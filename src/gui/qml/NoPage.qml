import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: nopageItem;
    anchors.fill: mainBigBox;
    color: "lightgrey";
    property bool havePass;

    Menu {
        id: optionsMenu;
        title: "Options";

        Image {
            id: optionsImg;
            z: 1000;

            width: 24;
            height: width;
            source: "pics/options.png"
            MouseArea {
                anchors.fill: optionsImg;
                onReleased: {
                    optionsMenu.visible = true;
                    optionsMenu.popup();
                }
            }
        }

        MenuItem {
            text: "Configuration";
            onTriggered: {
                console.log("first menu item chose")
            }
        }
    }
    Rectangle {
        id: smallBox;
        anchors.centerIn: parent;
        width: parent.width/4;
        height: parent.height/4;
        color: "pink";
        Text {
            anchors.centerIn: smallBox;
            text: "No Page";
        }
    }
    NavRow {
        id: navRow;
        anchors.bottom: nopageItem.bottom;

    }
}
