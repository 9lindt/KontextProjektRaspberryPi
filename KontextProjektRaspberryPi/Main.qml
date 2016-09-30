import QtQuick 2.4
////import Ubuntu.Components 1.3
import QtQuick.Window 2.2 // Window.FullScreen
import QtQuick.Controls 1.0
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


StackView{

    width: Screen.width
    height: Screen.height
    id: stack

    MainForm {
        id: main
        objectName: "main"
        color: "#39630a"
//        anchors.rightMargin: 14
//        anchors.bottomMargin: 0
//        anchors.leftMargin: -14
//        anchors.topMargin: 0
        anchors.fill: parent


//        mouseArea.onClicked: {

//            main.setVisible(false)
//            scale.setVisible(true)


//        }

    }

    ScaleForm{
         id: scale
         objectName: "scale"
         visible: false
         width: parent.width
         height: parent.height

         anchors.fill: parent


     }

     NoPermissionForm
     {
         id: nopermission
         visible: false
         width: parent.width
         height: parent.height
     }

     ByeForm {
         visible: false
         width: parent.width
         height: parent.height
     }


                    FoodBox {
                        id: foodbox
                        //anchors.fill: parent




                        onTransactionAuthorized: {
                            console.log("qml message:transaction authorized");
                            stack.push(scale)
                        }




                        onTransactionDenied: {
                            stack.push(nopermission)

                            console.log("qml message:transaction denied");

                            function Timer() {
                                return Qt.createQmlObject("import QtQuick 2.0; Timer {}", box);
                            }
                            var timer = new Timer();
                            timer.interval = 5000;
                            timer.repeat = false;
                            timer.triggered.connect(function () {
                                stack.clear();
                            })

                            timer.start();
                           ;
                        }

                        lock.onLockedChanged: {
                            if(locked){
                                console.log("locked again:"  + locked);
                                //stack.currentItem.visible = false;
                                stack.clear();
                            }
                        }


//                        Component.onCompleted: {
//                            box.helloWorld = watchers[0].condition;

//                        }
//                        radioDial.onRotationLeft: {

//                            console.log("qml rotation left");
//                            indicator.rotation = indicator.rotation - 10;
//                        }
//                        radioDial.onRotationRight: {
//                            console.log("qml rotation right");
//                            indicator.rotation = indicator.rotation + 10;
//                        }
//                        radioDial.onClick: {
//                            console.log("qml radio dial click");
//                        }
//                        radioDial.onPressedChanged: {
//                            console.log("qml radio pressed:" + pressed);
//                            if(pressed){
//                                indicator.scale = indicator.scale * 1.5;
//                            } else {
//                                indicator.scale = indicator.scale * 2/3;
//                            }

//                            textField.color = pressed?"white":"black"
//                        }


                    }

}


