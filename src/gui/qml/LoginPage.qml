import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    id: loginPage;
    objectName: "loginPage";
    visible: true;
    property bool havePass;

    Button {
        height: versionButton.height;
        width: height*1.75;
        anchors {
            top: versionButton.top;
            left: versionButton.right;
            leftMargin: 10;
        }

        text: "Exit"
        onReleased: {
            chatchat.done();
        }
    }
    Button {
        id: versionButton;
        objectName: "versionButton";
        x: 0; y: 0;
        width: 100;
        height: 50;
        text: "Version";
        onPressed: {
            chatchat.showVersion();
        }
    }
    Rectangle {
        anchors {
            top: versionButton.bottom;
            topMargin: 5;
            left: loginPage.left;
        }
        objectName: "versionBox";
        height: loginPage.height - 5 - versionButton.height;
        width: loginPage.width;
        color: "lightblue";

        TextField {
            Rectangle{
                id: yellowBox;
                width: passPhraseBox.width;
                height: passPhraseBox.height;
                color: "lightyellow";
            }

            id: passPhraseBox;
            focus: true;
            x: 100;
            y: 200;
            width: 140;
            height:40;
            text: "";
            background: yellowBox;
            function enter() {
                chatchat.setPhrase(passPhraseBox.text);
                console.log("got pass phrase " + passPhraseBox.text);
                chatchatLoader.source = "NoPage.qml"
            }

            Keys.onEnterPressed: {
                passPhraseBox.enter();
            }

            Keys.onReturnPressed: {
                passPhraseBox.enter();
            }
        }
        Button {
            id: passButton;
            objectName: "passPhraseButton";
            signal wantPhrase();
            anchors {
                top: passPhraseBox.top;
                right: passPhraseBox.left;
            }

            width: 90;
            height: passPhraseBox.height;
            text: "Set Pass"
            onReleased: {
//                chatchat.setPhrase(passPhraseBox.text);
//                passPhraseBox.enter();
                passButton.wantPhrase();
            }
        }
    }

    NavRow {
        id: navRow;
        visible: loginPage.havePass;
        anchors.left: loginPage.left;
        anchors.top: loginPage.top;
        anchors.topMargin: versionButton.height+5

    }
}
