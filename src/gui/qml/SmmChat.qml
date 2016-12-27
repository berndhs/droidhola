import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: bigBox;
    property bool havePass: false;
    color: "lightgreen";
    Item {
        id: page1;
        visible: true;
        TextField {
            id: textfield1;
            text: "¿";
            x: 100;
            y: 100;

            height: 50;
            width: 300;
            color: "green";
        }
        TextField {
            id: textfield2;
            text: chatchat.output
            width: textfield1.width;
            height: textfield1.height;
            color: "red";
            anchors {
                left: textfield1.left;
                top: textfield1.bottom;
                topMargin: textfield1.height;
            }
            Connections {
                target: chatchat;
                onCryptoChanged: {
                    console.log("receiving "+chatchat.crypto)
                    textfield3.text = chatchat.crypto;
                }
                onClearChanged: {
                    console.log("receiving clear "+chatchat.clear)
                    textfield2.text = chatchat.clear;
                }
            }
        }
        TextField {
            id: textfield3;
            anchors {
                left: textfield1.left;
                top: textfield1.bottom;
                topMargin: 5;
            }
            width: textfield1.width;
            height: textfield1.height * 0.75;
            color: "darkblue";
            text: "dunno";
        }


        Button {
            height: textfield2.height;
            width: 2*height;
            anchors.right: textfield2.left;
            anchors.verticalCenter: textfield2.verticalCenter;
            anchors.leftMargin: 10;
            text: "ClearText";
            onClicked: {
                chatchat.dumpInfo();
                chatchat.symmetric(textfield3.text);
            }
        }

        Button {
            height: textfield1.height;
            width: 2*height;
            anchors.right: textfield1.left;
            anchors.verticalCenter: textfield1.verticalCenter;
            anchors.leftMargin: 10;
            text: "Submit";
            onClicked: {
                chatchat.dumpInfo();
                chatchat.sendMessage(textfield1.text);
            }
        }
        Button {
            height: textfield1.height;
            width: height*1.75;
            anchors.horizontalCenter: textfield2.horizontalCenter;
            anchors.top: textfield2.bottom;
            anchors.topMargin: 10;
            text: "Exit"
            onReleased: {
                chatchat.done();
            }
        }
    }

    Rectangle {
        anchors.left: bigBox.left;
        anchors.bottom: bigBox.bottom;
        width: bigBox.width/2;
        height: 10;
        color: "red";
    }

    NavRow {
        id: navRow;
        width: bigBox.width/2;
        anchors.right: bigBox.right;
        anchors.bottom: bigBox.bottom;

    }
}

