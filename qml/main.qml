import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    id: bigBox;
    visible: true
    width: 640
    height: 480
    title: chatchat.name


    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex


        Page {
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
            TextField {
                id: textfield1;
                text: "¿ ";
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
                height: textfield1.height/2;
                color: "darkblue";
                text: "dunno";
            }


            Button {
                height: textfield2.height;
                width: 2*height;
                anchors.left: textfield2.right;
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
                anchors.left: textfield1.right;
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

        Page {
            Label {
                text: qsTr("Second page")
                anchors.centerIn: parent
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("First")
        }
        TabButton {
            text: qsTr("Second")
        }
    }
}
