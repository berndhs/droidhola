import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: navRowPage;
    anchors.fill: chatchatLoader;
    color: "transparent";
    Row {
        anchors {
            left: parent.left;
            bottom: parent.bottom;
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
