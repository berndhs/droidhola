import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: chatchat.name

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page {
            TextField {
                id: textfield1;
                text: "?";
                x: 100;
                y: 100;
                height: 50;
                width: 300;
                color: "green";
            }
            TextField {
                id: textfield2;
                text: "+";
                width: textfield1.width;
                height: textfield1.height;
                color: "red";
                anchors {
                    left: textfield1.left;
                    top: textfield1.bottom;
                    topMargin: 20;
                }
                Connections {
                    target: chatchat;
                    onOutputChanged: {
                        textfield2.text = chatchat.output;
                    }
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
                    chatchat.sendMessage(textfield1.text);
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
