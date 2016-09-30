import QtQuick 2.4

Rectangle {
    id: scale
    anchors.horizontalCenter: parent.horizontalCenter
    anchors.verticalCenter: parent.verticalCenter
    color: "#39630a"
    anchors.right: parent.right
    anchors.rightMargin: 0
    anchors.verticalCenterOffset: -29
    anchors.horizontalCenterOffset: 0


  Text{
      id: price
      anchors.centerIn: parent
      horizontalAlignment: Text.AlignHCenter
      font.family: "Tahoma"
      width: parent.width
      color: "#DEA600"
      wrapMode: Text.WordWrap
      text: "0.00 €"
      font.pointSize: 30

  }

  Text{
      anchors.top: price.bottom
      width: parent.width
      horizontalAlignment: Text.AlignHCenter
      height: 40
      color: "#DEA600"
      text: "0 g"
      font.family: "Tahoma"
      font.pointSize: 18
  }



}
