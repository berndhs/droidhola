import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: nopageItem;
    anchors.fill: mainBigBox;
    color: "lightgrey";
    property bool havePass;
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
        anchors.left: nopageItem.left;
        anchors.bottom: nopageItem.bottom;

    }
}
