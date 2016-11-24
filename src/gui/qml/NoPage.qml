import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    width: 200;
    height: 200;
    Rectangle {
        id: smallBox;
        anchors.centerIn: parent;
        width: parent.width/2;
        height: parent.height/2;
        color: "pink";
        Text {
            anchors.centerIn: parent;
            text: "No Page";
        }
    }
    Button {
        anchors {
            top: smallBox.bottom;
            horizontalCenter: smallBox.horizontalCenter;
        }

        width: smallBox.width;
        height: width;
        text: "Login";
        onReleased: {
            chatchatLoader.source = "LoginPage.qml";
        }
    }

}
