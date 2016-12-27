import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.2
import QtQuick.Controls.Styles 1.4

ApplicationWindow {
    id: mainBigBox;
    visible: true
    width: 640
    height: 480
    color: "beige";
    title: appTitle.text
    objectName: "nouveauMainTop";
    property int titleHeight: 40;
    
    Rectangle {
        id: titleBox;
        anchors.top:mainBigBox.top;
        anchors.left: mainBigBox.left;
        width: mainBigBox.width;
        height: mainBigBox.titleHeight
        color: "lightgreen";
        Text {
            id: appTitle;
            font.pointSize: 20;
            text: "Souverain";
            anchors.centerIn:  titleBox;
        }
        Text {
            id: loadedFile;
            font.pointSize: 12;
            text: subLoader.source;
            anchors.bottom: appTitle.bottom;
            anchors.left: appTitle.right;
            anchors.leftMargin: 20;
        }

        Image {
            id: titlePic;
            width: height;
            height: 2*titleBox.height;
            z: 999;
            source: "/pics/logo.png";
        }
        Image {
            id: optionsPic;
            anchors.left: titlePic.right;
            source: "pics/options.png";
        }
    }

    Rectangle {
        id: subPageBox;
        width: mainBigBox.width;

        height: mainBigBox.height - mainBigBox.titleHeight;
        color: "pink";
        anchors.top: titleBox.bottom;

        Button {
            id: startButton;
            text: "Start";
            visible: subLoader.status != Loader.Ready;
            width: 75;
            height: 50;
            anchors.centerIn: subPageBox;
            onReleased: {
                subLoader.source = "LoginPage.qml";
            }
        }
    }

    Timer {
        id: loginTimer;
        interval: 3000;
        repeat: false;
        running: true;
        onTriggered: {
            subLoader.source = "LoginPage.qml";
        }
    }

    Connections {
        target: chatchat;
        onHaveLoggedIn: {
            subLoader.source = "SmmChat.qml";
        }
    }

    Loader {
        id: subLoader;
        objectName: "chatchatLoader";
        width: subPageBox.width;
        height: subPageBox.height;
        anchors.centerIn: subPageBox;
        source: "";
        onLoaded: {
            console.log ("done loading ",subLoader.source);
        }
    }
}

