// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright 2019 Juan Palacios <jpalaciosdev@gmail.com>

import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15
import CoreCtrl.UIComponents 1.0
import "Style.js" as Style
import "Settings.js" as Settings

CPU {
  id: cpu
  objectName: "CPU"

  onNewGraphItem: {
    sensorGraph.addItem(item)
    Settings.addComponentData("CPU" + cpu.physicalId, "CPU " + cpu.physicalId,
                              item.name,
                              qsTranslate("SensorGraph", item.name))
  }

  Connections {
    target: settings

    function onSettingChanged(key, value) {
      if (key === "Workarounds/ignoredSensors") {
        var sensors = Settings.componentIgnoredSensors("CPU" + cpu.physicalId,
                                                        value)
        sensorGraph.ignoredSensors(sensors)
      }
      else if (key === "UI/splitview-sysmodel-sensorgraph-height") {
        sensorGraph.SplitView.preferredHeight = value
      }
    }
  }

  SplitView {
    spacing: 0
    anchors.fill: parent
    orientation: Qt.Vertical

    onResizingChanged: {
      if (!resizing) {
        settings.setValue("UI/splitview-sysmodel-sensorgraph-height",
                          sensorGraph.SplitView.preferredHeight)
      }
    }

    SensorGraph {
      id: sensorGraph
    }

    Pane {
      padding: 0
      SplitView.fillHeight: true

      ScrollView {
        id: scrollview
        anchors.fill: parent
        clip: true
        ScrollBar.horizontal.policy: ScrollBar.AlwaysOn
        ScrollBar.vertical.policy: ScrollBar.AlwaysOn
        ScrollBar.horizontal.visible: ScrollBar.horizontal.size < 1
        ScrollBar.vertical.visible: ScrollBar.vertical.size < 1

        Flow {
          id: flow
          objectName: "CPU_Plug"
          width: scrollview.availableWidth
          height: scrollview.availableHeight
          spacing: Style.Controls.items_spacing

          property var childrenAdded: []
          onChildrenChanged: {
            for (var i = 0; i < children.length; ++i)
              if (childrenAdded[children[i].objectName] === undefined) {
                childrenAdded[children[i].objectName] = children[i]
                cpu.setupChild(children[i])
              }
          }

          move: Transition {
            NumberAnimation { properties: "x,y"; easing.type: Easing.InOutQuad }
          }
        }

        Component.onCompleted: {
          // BUG Scroll on control views does not work.
          // ScrollView will interfere with any children that uses MouseArea.
          // This stops that behaviour, but also disables scroll on the ScrollView.
          scrollview.contentItem.interactive = false
        }
      }
    }
  }
}
