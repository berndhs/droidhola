import QtQuick 2.7

Page1Form {
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        crypto.input = textField1.text;
    }

    Connections {
        target: crypto;
        onInputChanged: {
            textField1.text = crypto.input;
        }
    }
}
