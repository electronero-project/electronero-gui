// Copyright (c) 2014-2018, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick 2.2
import QtQuick.Layouts 1.1

import "../components" as MoneroComponents

GridLayout {
    columns: (isMobile) ? 1 : 2
    columnSpacing: 32
    id: root
    property alias daemonAddrText: daemonAddr.text
    property alias daemonPortText: daemonPort.text
    property alias daemonAddrLabelText: daemonAddr.labelText
    property alias daemonPortLabelText: daemonPort.labelText

    property alias addressLabelColor: nodeListLabel.color
    property alias portLabelColor: portListLabel.color
    property alias addressSelectedColor: nodeListDropdown.textColor
    property alias portSeletedColor: portListDropdown.textColor

    // TODO: LEGACY; remove these placeHolder variables when
    // the wizards get redesigned to the black-theme
    property string placeholderFontFamily: MoneroComponents.Style.fontRegular.name
    property bool placeholderFontBold: false
    property int placeholderFontSize: 18 * scaleRatio
    property string placeholderColor: MoneroComponents.Style.defaultFontColor
    property real placeholderOpacity: 0.25

    property string lineEditBorderColor: Qt.rgba(0, 0, 0, 0.15)
    property string lineEditBackgroundColor: "white"
    property string lineEditFontColor: "black"
    property bool lineEditFontBold: true
    property bool isRemoteFlag: false

    signal editingFinished()

    function getAddress() {
        return daemonAddr.text.trim() + ":" + daemonPort.text.trim()
    }

    function update(isRemote) {
        isRemoteFlag = isRemote
        if(nodeList.count == 0){
            if(isRemote){
                for (var i = 0; i < remoteAddresses.length; i++) {
                    nodeList.append({'column1': remoteAddresses[i]});
                    if(remoteAddresses[i] === daemonAddrText)
                        nodeListDropdown.currentIndex = i;
                }

                for (i = 0; i < remoteCoins.length; i++) {
                    portList.append({'column1': remoteCoins[i]});
                    if(remotePorts[i] === daemonPortText)
                        portListDropdown.currentIndex = i;
                }
            }
            else{
                for (i = 0; i < localAddresses.length; i++) {
                    nodeList.append({'column1': localAddresses[i]});
                    if(localAddresses[i] === daemonAddrText)
                        nodeListDropdown.currentIndex = i;
                }

                for (i = 0; i < localCoins.length; i++) {
                    portList.append({'column1': localCoins[i]});
                    if(localPorts[i] === daemonPortText)
                        portListDropdown.currentIndex = i;
                }
            }
        }

        nodeListDropdown.update();
        portListDropdown.update();
    }

    LineEdit {
        id: daemonAddr
        visible: false
    }

    LineEdit {
        id: daemonPort
        visible: false
    }

    ColumnLayout {
        Layout.fillWidth: true
        Label {
            id: nodeListLabel
            Layout.topMargin: 14
            text: qsTr("Address")
            font.pixelSize: 16
            font.bold: false
            color: "#FFFFFF"
       }

        ListModel {
             id: nodeList
         }

        StandardDropdown {
            id: nodeListDropdown
            objectName: "nodeListDropdown"
            dataModel: nodeList
            onChanged: {

                console.log("nodeListDropdown changed: ", currentIndex);
                daemonAddr.text = dataModel.get(currentIndex).column1;
                root.editingFinished();
            }
            Layout.fillWidth: true
            shadowReleasedColor: "#f5d609"
            shadowPressedColor: "#B32D00"
            releasedColor: "#363636"
            pressedColor: "#202020"
        }
    }

    ColumnLayout {
        Layout.fillWidth: true
        Label {
            id: portListLabel
            Layout.topMargin: 14
            text: qsTr("Coin")
            font.pixelSize: 16
            font.bold: false
            color: "#FFFFFF"
        }

        ListModel {
             id: portList
        }

        StandardDropdown {
            id: portListDropdown
            dataModel: portList
            currentIndex: 1;
            onChanged: {
                console.log("portListDropdown changed: ", currentIndex);
                if(isRemoteFlag){
                    daemonPort.text = remotePorts[currentIndex];
                }
                else {
                    daemonPort.text = localPorts[currentIndex];
                }

                root.editingFinished();
            }

            Layout.fillWidth: true
            shadowReleasedColor: "#f5d609"
            shadowPressedColor: "#B32D00"
            releasedColor: "#363636"
            pressedColor: "#202020"
        }
    }
}
