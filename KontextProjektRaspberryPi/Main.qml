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

                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        if(box.state === "open"){
                            box.helloWorld = ("..from Cpp Backend")
                        } else {
                            box.helloWorld = "box is already open"

                        }
//console.log(box.state);

                    }
                }
                Text {
                    anchors.centerIn: parent
                    text: box.helloWorld
                    color: "white"

                }
                        FoodBox {
                            id: box
                            //anchors.fill: parent

                            Component.onCompleted: {
                                box.helloWorld = ("Hello world..");

                            }
                        }
            }

}
