import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.2

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
        }
        onTextChanged: {
            messageDialog.text = text;
        }
        onShowVersionChanged: {
            messageDialog.visible = true;
            console.log("\tDialog title ",messageDialog.title);
            console.log("\tDualog text",messageDialog.text);
        }

        function showThePopup (myTitle, theText) {
            messageDialog.title = myTitle;
            messageDialog.text = theText;
            messageDialog.visible = true;
        }
    }

    MessageDialog {
        id: messageDialog
        objectName: "mainDialog";
        title: "May I have your attention please"
        text: "It's so cool that you are using Qt Quick."
        visible: false;
        onAccepted: {
            console.log("And of course you could only agree.")
            Qt.quit()
        }
    }


    Loader {
        id: chatchatLoader;
        objectName: "chatchatLoader";
        anchors.fill: parent;
        source: "LoginPage.qml"
    }
}
