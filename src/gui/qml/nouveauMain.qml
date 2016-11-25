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
    title: chatchat.name
    objectName: "nouveauMainTop";
    Item {
        objectName: "cantSeeMe";
        property string title: "";
        property string text: "";
        property int showVersion: 0;
        onTitleChanged: {
            messageDialog.title = title;
            messageDialogText.dumpStuff();
        }
        onTextChanged: {
            messageDialog.text = text;
            messageDialogText.dumpStuff();
        }
        onShowVersionChanged: {
            messageDialog.visible = true;
            console.log("\tDialog title ",messageDialog.title);
            console.log("\tDualog text",messageDialog.text);
            console.log("\tDualog text font ",messageDialogText.font);
            messageDialogText.dumpStuff();
        }



        function showThePopup (myTitle, theText) {
            messageDialog.title = myTitle;
            messageDialog.text = theText;
            messageDialog.visible = true;
        }
    }

    Rectangle {
        id: messageDialog
        width: 150;
        height: 150;
        x: 150;
        y: 200;
        z: 200;
        visible: false;
        color: "lightblue";
        opacity: 0.75;
        border.color: "black";
        border.width: 2;
        radius: 4;
        objectName: "mainDialog";
        property string title: "The Text Title"
        property string text: "the text field";
        property int showVersion: 0;
        TextField {

            id: messageDialogText;
            objectName: "MessageText";
            function dumpStuff() {
                console.log(text.font);
            }

            property alias showVersion: messageDialog.showVersion;
            text: messageDialog.text;
            font.pixelSize: 20;
            font.weight: Font.Normal;
            anchors {
                top: titleLine.bottom;
                horizontalCenter: titleLine.horizontalCenter;
                topMargin: 20;
            }

        }
        Text {
            id: titleLine;
            text: messageDialog.title;
            anchors {
                top: messageDialog.top;
                horizontalCenter: messageDialog.horizontalCenter;
                topMargin: 20;
            }
        }
        Button {
            id: closeButton;
            anchors {
                bottom: messageDialog.bottom;
                horizontalCenter: messageDialog.horizontalCenter;
            }

            text: "OK";
            onReleased: {
                messageDialog.visible = false;
            }
        }
    }


    Loader {
        id: chatchatLoader;
        objectName: "chatchatLoader";
        anchors.fill: parent;
        source: "LoginPage.qml"
    }
}
