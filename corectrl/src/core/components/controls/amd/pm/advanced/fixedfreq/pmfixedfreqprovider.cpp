// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright 2019 Juan Palacios <jpalaciosdev@gmail.com>

#include "pmfixedfreqprovider.h"

#include "../freqmode/pmfreqmodeprovider.h"
#include "common/fileutils.h"
#include "common/stringutils.h"
#include "core/components/amdutils.h"
#include "core/components/controls/amd/pm/handlers/ppdpmhandler.h"
#include "core/info/igpuinfo.h"
#include "core/info/iswinfo.h"
#include "core/sysfsdatasource.h"
#include "pmfixedfreq.h"
#include <easylogging++.h>
#include <filesystem>
#include <fmt/format.h>
#include <memory>
#include <string>
#include <tuple>
#include <vector>

std::vector<std::unique_ptr<IControl>>
AMD::PMFixedFreqProvider::provideGPUControls(IGPUInfo const &gpuInfo,
                                             ISWInfo const &swInfo) const
{
  std::vector<std::unique_ptr<IControl>> controls;

  if (gpuInfo.vendor() == Vendor::AMD) {
    auto kernel =
        Utils::String::parseVersion(swInfo.info(ISWInfo::Keys::kernelVersion));
    auto driver = gpuInfo.info(IGPUInfo::Keys::driver);

    if (driver == "amdgpu" && kernel >= std::make_tuple(4, 6, 0)) {

      auto perfLevel = gpuInfo.path().sys / "power_dpm_force_performance_level";
      auto dpmSclk = gpuInfo.path().sys / "pp_dpm_sclk";
      auto dpmMclk = gpuInfo.path().sys / "pp_dpm_mclk";
      if (Utils::File::isSysFSEntryValid(perfLevel) &&
          Utils::File::isSysFSEntryValid(dpmSclk) &&
          Utils::File::isSysFSEntryValid(dpmMclk)) {

        auto dpmSclkLines = Utils::File::readFileLines(dpmSclk);
        auto dpmSclkValid = Utils::AMD::parseDPMStates(dpmSclkLines).has_value();

        auto dpmMclkLines = Utils::File::readFileLines(dpmMclk);
        auto dpmMclkValid = Utils::AMD::parseDPMStates(dpmMclkLines).has_value();

        if (dpmSclkValid && dpmMclkValid) {

          controls.emplace_back(std::make_unique<AMD::PMFixedFreq>(
              std::make_unique<PpDpmHandler>(
                  std::make_unique<SysFSDataSource<std::string>>(perfLevel),
                  std::make_unique<SysFSDataSource<std::vector<std::string>>>(
                      dpmSclk)),
              std::make_unique<PpDpmHandler>(
                  std::make_unique<SysFSDataSource<std::string>>(perfLevel),
                  std::make_unique<SysFSDataSource<std::vector<std::string>>>(
                      dpmMclk))));
        }
        else {
          if (!dpmSclkValid) {
            LOG(WARNING) << fmt::format("Unknown data format on {}",
                                        dpmSclk.string());
            for (auto &line : dpmSclkLines)
              LOG(ERROR) << line.c_str();
          }

          if (!dpmMclkValid) {
            LOG(WARNING) << fmt::format("Unknown data format on {}",
                                        dpmMclk.string());
            for (auto &line : dpmMclkLines)
              LOG(ERROR) << line.c_str();
          }
        }
      }
    }
  }

  return controls;
}

bool AMD::PMFixedFreqProvider::register_()
{
  AMD::PMFreqModeProvider::registerProvider(
      std::make_unique<AMD::PMFixedFreqProvider>());

  return true;
}

bool const AMD::PMFixedFreqProvider::registered_ =
    AMD::PMFixedFreqProvider::register_();
