import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    id: bigBox;
    visible: true
    width: 640
    height: 480
    title: chatchat.name


    Item {
        id: swipeView
        anchors.fill: parent
//        currentIndex: tabBar.currentIndex
        property int visiblePage: 0;

        Item {
            id: loginPage;
            visible: swipeView.visiblePage == 0;
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
                        swipeView.visiblePage = 1;
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
                        swipeView.visiblePage = 1;
                    }
                }
            }
        }

        Item {
            id: page1;
            visible: swipeView.visiblePage == 1;
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
                height: textfield1.height/2;
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

        Item {
            id: page2;
            visible: swipeView.visiblePage == 2;
            Label {
                text: qsTr("Second page")
                anchors.centerIn: swipeView
            }
        }
    }

    Rectangle {
        id: footer;
        width: parent.width;
        height: 35;
        anchors {
            left: parent.left;
            bottom: parent.bottom;
        }
        color: "lightgreen";
        Row {
            spacing: 20;
            Button {
                id: buttonFor1;
                text: "1";
                onReleased: {
                    swipeView.visiblePage = 0;
                }
            }
            Button {
                id: buttonFor2;
                text: "2";
                onReleased: {
                    swipeView.visiblePage = 1;
                }
            }
            Button {
                id: buttonFor3;
                text: "3";
                onReleased: {
                    swipeView.visiblePage = 2;
                }
            }
        }
    }

//    footer: TabBar {
//        id: tabBarBottom;
//        currentIndex: swipeView.currentIndex
//        TabButton {
//            text: qsTr("Login")
//        }
//        TabButton {
//            id: tabDuo;
//            text: qsTr("Duo")
//            onClicked: {
//                console.log("clicked",text);
//            }
//        }
//        TabButton {
//            text: qsTr("Tres")
//        }
//    }
}
