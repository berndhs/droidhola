import QtQuick 2.7

Page1Form {
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        goldeneye.input = textField1.text;
    }

    Connections {
        target: goldeneye;
        onInputChanged: {
            textField1.text = goldeneye.input;
        }
    }
}
