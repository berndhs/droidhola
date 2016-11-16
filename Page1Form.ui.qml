import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    property alias textField1: textField1
    property alias button1: button1
    property alias button2: button2

    RowLayout {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        anchors.top: parent.top

        TextField {
            id: textField1
            color: "#aaff7f"
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button1
            text: qsTr("Press Me")
        }
    }

    Button {
        id: button2
        x: 270
        y: 132
        text: "Exit"
    }

    TextField {
        id: textField2
        x: 170
        y: 66
        color: "#aaff7f"
        placeholderText: qsTr("Text Field")
    }
}
