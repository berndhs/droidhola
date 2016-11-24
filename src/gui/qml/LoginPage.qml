import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    id: loginPage;
    visible: true;
    Button {
        height: textfield1.height;
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
            left: swipeView.left;
        }
        height: bigBox.height - 5 - versionButton.height;
        width: bigBox.width;
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
//                swipeView.visiblePage = 1;
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
            anchors {
                top: passPhraseBox.top;
                right: passPhraseBox.left;
            }

            width: 90;
            height: passPhraseBox.height;
            text: "Set Pass"
            onReleased: {
                chatchat.setPhrase(passPhraseBox.text);
                passPhraseBox.enter();
            }
        }
    }
}
