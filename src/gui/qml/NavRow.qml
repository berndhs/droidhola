import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: navRowPage;
    color: "transparent";
    Menu {
        id: optionsMenu;
        title: "Options";

        Image {
            id: optionsImg;
            z: 1000;

            width: 24;
            height: width;
            source: "options.png"
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

    Row {
        anchors {
            left: navRowPage.left;
            top: navRowPage.top;
	    topMargin: optionsImg.height+2;
        }

        width: navRowPage.width;
        height: 50;
        spacing: 15;

        Button {
            id: toLoginButton;
            width: 100
            height: width/2;
            text: "Login";
            onReleased: {
                chatchatLoader.source = "LoginPage.qml";
            }
        }
        Button {
            width: toLoginButton.width;
            height: width/2;
            text: "Symmetric";
            onReleased: {
                chatchatLoader.source = "SmmChat.qml";
            }
        }
        Button {
            width: toLoginButton.width;
            height: width/2;
            text: "Nada";
            onReleased: {
                chatchatLoader.source = "NoPage.qml";
            }
        }
    }


}
