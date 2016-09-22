import QtQuick 2.4
////import Ubuntu.Components 1.3
import QtQuick.Window 2.2 // Window.FullScreen
import KontextProjektRaspberryPi 1.0
///*!
//    \brief MainView with a Label and Button elements.
//*/

//MainView {
//    // objectName for functional testing purposes (autopilot-qt5)
//    objectName: "mainView"

//    // Note! applicationName needs to match the "name" field of the click manifest
//    applicationName: "kontextprojektraspberrypi.9lindt"

//    width: Screen.width
//        height: Screen.height

////    width: units.gu(100)
////    height: units.gu(75)

//    Page {
//        header: PageHeader {
//            id: pageHeader
//            title: i18n.tr("KontextProjektRaspberryPi")
//            StyleHints {
//                foregroundColor: UbuntuColors.orange
//                backgroundColor: UbuntuColors.porcelain
//                dividerColor: UbuntuColors.slate
//            }
//        }

//        MyType {
//            id: myType

//            Component.onCompleted: {
//                myType.helloWorld = i18n.tr("Hello world..")
//            }
//        }

//        Label {
//            id: label
//            objectName: "label"
//            anchors {
//                horizontalCenter: parent.horizontalCenter
//                top: pageHeader.bottom
//                topMargin: units.gu(2)
//            }
//            text: myType.helloWorld
//        }

//        Button {
//            objectName: "button"
//            anchors {
//                horizontalCenter: parent.horizontalCenter
//                top: label.bottom
//                topMargin: units.gu(2)
//            }
//            width: parent.width

//            text: i18n.tr("Tap me!")

//            onClicked: {
//                myType.helloWorld = i18n.tr("..from Cpp Backend")
//            }
//        }
//    }
//}


Rectangle {
    width: Screen.width
    height: Screen.height
    color: "gray"
    Rectangle{
        id:indicator
        anchors.centerIn: parent
        height: parent.height /2
        width: parent.width /2
        radius: parent.height /4
        color: box.watchers[0].condition === BackgroundProcess.GREEN?"green":"red"


        Text {
            id:textField
            anchors.centerIn: parent
            text: box.helloWorld
            color: "white"


            FoodBox {
                id: box
                //anchors.fill: parent

                lock.locked : box.watchers[0].condition === BackgroundProcess.GREEN


                Component.onCompleted: {
                    box.helloWorld = watchers[0].condition;

                }
                radioDial.onRotationLeft: {

                    console.log("qml rotation left");
                    indicator.rotation = indicator.rotation + 10;
                }
                radioDial.onRotationRight: {
                    console.log("qml rotation right");
                    indicator.rotation = indicator.rotation - 10;
                }
                radioDial.onClick: {
                    console.log("qml radio dial click");
                }
                radioDial.onPressedChanged: {
                    console.log("qml radio pressed:" + pressed);
                    if(pressed){
                        indicator.scale = indicator.scale * 1.5;
                    } else {
                        indicator.scale = indicator.scale * 2/3;
                    }

                    textField.color = pressed?"white":"black"
                }


            }
        }
    }

}
