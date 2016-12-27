import QtQuick 2.7

Page1Form {
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        chatchat.input = textField1.text;
    }

    Connections {
        target: chatchat;
        onInputChanged: {
            textField1.text = chatchat.input;
        }
        onMsgChanged: {
            textField2.text = Msg;
        }
    }
}
