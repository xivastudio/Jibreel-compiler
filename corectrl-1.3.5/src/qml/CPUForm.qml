// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright 2019 Juan Palacios <jpalaciosdev@gmail.com>

import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3
import CoreCtrl.UIComponents 1.0
import "Style.js" as Style
import "Settings.js" as Settings

CPU {
  id: cpu
  objectName: "CPU"

  onNewGraphItem: {
    sensorGraph.addItem(item)
    Settings.addComponentData("CPU" + cpu.socketId, "CPU " + cpu.socketId,
                              item.name,
                              qsTranslate("SensorGraph", item.name))
  }

  ColumnLayout {
    spacing: 0
    anchors.fill: parent

    SensorGraph {
      id: sensorGraph
      Layout.fillWidth: true

      Connections {
        target: settings

        onSettingChanged: {
          if (key === "Workarounds/ignoredSensors") {
            var sensors = Settings.componentIgnoredSensors("CPU" + cpu.socketId,
                                                            value)
            sensorGraph.ignoredSensors(sensors)
          }
        }
      }
    }

    Pane {
      padding: 0
      Layout.fillWidth: true
      Layout.fillHeight: true

      ScrollView {
        id: scrollview
        anchors.fill: parent
        clip: true
        ScrollBar.horizontal.policy: ScrollBar.AlwaysOn
        ScrollBar.vertical.policy: ScrollBar.AlwaysOn
        ScrollBar.horizontal.visible: ScrollBar.horizontal.size < 1
        ScrollBar.vertical.visible: ScrollBar.vertical.size < 1

        /// WORKAROUND QTBUG-74000
        contentHeight: flow.implicitHeight
        contentWidth: flow.implicitWidth

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
