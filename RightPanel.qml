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

import QtQuick 2.2
import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0
import moneroComponents.Wallet 1.0
import moneroComponents.NetworkType 1.0
import "components"

Rectangle {
    id: panel

    property alias unlockedBalanceText: unlockedBalanceText.text
    property alias unlockedBalanceVisible: unlockedBalanceText.visible
    property alias unlockedBalanceLabelVisible: unlockedBalanceLabel.visible
    property alias balanceLabelText: balanceLabel.text
    property alias balanceText: balanceText.text
    property alias networkStatus : networkStatus
    property alias progressBar : progressBar
    property alias daemonProgressBar : daemonProgressBar
    property alias minutesToUnlockTxt: unlockedBalanceLabel.text
    property alias cardImageSource: cardImage.source
    property int titleBarHeight: 50

    width: (isMobile)? appWindow.width : 300
    color: "transparent"
    anchors.bottom: parent.bottom
    anchors.top: parent.top

    Image {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        height: panel.height
        source: "images/leftPanelBg.jpg"
        z: 1
    }

    // card with monero logo
    Column {
        visible: true
        z: 2
        id: column1
        height: 200
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.topMargin: (persistentSettings.customDecorations)? 50 : 0

        RowLayout {
            visible: true
            Item {
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 20
                anchors.verticalCenter: parent.verticalCenter
                height: 490 * scaleRatio
                width: 259 * scaleRatio

                Image {
                    id: cardImage
                    width: 259; height: 170
                    fillMode: Image.PreserveAspectFit
                    source: "images/card-background.png"
                }

                Text {
                    id: testnetLabel
                    visible: persistentSettings.nettype != NetworkType.MAINNET
                    text: (persistentSettings.nettype == NetworkType.TESTNET ? qsTr("Testnet") : qsTr("Stagenet")) + translationManager.emptyString
                    anchors.top: parent.top
                    anchors.topMargin: 8
                    anchors.left: parent.left
                    anchors.leftMargin: 192
                    font.bold: true
                    font.pixelSize: 12
                    color: "#f33434"
                }

                Text {
                    id: viewOnlyLabel
                    visible: viewOnly
                    text: qsTr("View Only") + translationManager.emptyString
                    anchors.top: parent.top
                    anchors.topMargin: 8
                    anchors.right: testnetLabel.visible ? testnetLabel.left : parent.right
                    anchors.rightMargin: 8
                    font.pixelSize: 12
                    font.bold: true
                    color: "#ff9323"
                }
            }

            Item {
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 20
                anchors.verticalCenter: parent.verticalCenter
                height: 490 * scaleRatio
                width: 50 * scaleRatio

                Text {
                    visible: !isMobile
                    id: balanceText
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 76
                    font.family: "Arial"
                    color: "#FFFFFF"
                    text: "N/A"
                    // dynamically adjust text size
                    font.pixelSize: {
                        var digits = text.split('.')[0].length
                        var defaultSize = 22;
                        if(digits > 2) {
                            return defaultSize - 1.1*digits
                        }
                        return defaultSize;
                    }
                }

                Text {
                    id: unlockedBalanceText
                    visible: true
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 126
                    font.family: "Arial"
                    color: "#FFFFFF"
                    text: "N/A"
                    // dynamically adjust text size
                    font.pixelSize: {
                        var digits = text.split('.')[0].length
                        var defaultSize = 20;
                        if(digits > 3) {
                            return defaultSize - 0.6*digits
                        }
                        return defaultSize;
                    }
                }

                Label {
                    id: unlockedBalanceLabel
                    visible: true
                    text: qsTr("Unlocked balance") + translationManager.emptyString
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 110
                }

                Label {
                    visible: !isMobile
                    id: balanceLabel
                    text: qsTr("Balance") + translationManager.emptyString
                    fontSize: 14
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 60
                }
                Item { //separator
                    anchors.left: parent.left
                    anchors.right: parent.right
                    height: 1
                }
             }
        }
    }

    // card with monero logo
    Column {
        visible: true
        z: 2
        id: column1Xp
        height: 200
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: column1.bottom
        anchors.topMargin: 0

        RowLayout {
            visible: true
            Item {
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 20
                anchors.verticalCenter: parent.verticalCenter
                height: 490 * scaleRatio
                width: 259 * scaleRatio

                Image {
                    id: cardImageXp
                    width: 259; height: 170
                    fillMode: Image.PreserveAspectFit
                    source: "images/card-background.png"
                }

                Text {
                    id: testnetLabelXp
                    visible: persistentSettings.nettype != NetworkType.MAINNET
                    text: (persistentSettings.nettype == NetworkType.TESTNET ? qsTr("Testnet") : qsTr("Stagenet")) + translationManager.emptyString
                    anchors.top: parent.top
                    anchors.topMargin: 8
                    anchors.left: parent.left
                    anchors.leftMargin: 192
                    font.bold: true
                    font.pixelSize: 12
                    color: "#f33434"
                }

                Text {
                    id: viewOnlyLabelXp
                    visible: viewOnly
                    text: qsTr("View Only") + translationManager.emptyString
                    anchors.top: parent.top
                    anchors.topMargin: 8
                    anchors.right: testnetLabel.visible ? testnetLabel.left : parent.right
                    anchors.rightMargin: 8
                    font.pixelSize: 12
                    font.bold: true
                    color: "#ff9323"
                }
            }

            Item {
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 20
                anchors.verticalCenter: parent.verticalCenter
                height: 490 * scaleRatio
                width: 50 * scaleRatio

                Text {
                    visible: !isMobile
                    id: balanceTextXp
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 76
                    font.family: "Arial"
                    color: "#FFFFFF"
                    text: "N/A"
                    // dynamically adjust text size
                    font.pixelSize: {
                        var digits = text.split('.')[0].length
                        var defaultSize = 22;
                        if(digits > 2) {
                            return defaultSize - 1.1*digits
                        }
                        return defaultSize;
                    }
                }

                Text {
                    id: unlockedBalanceTextXp
                    visible: true
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 126
                    font.family: "Arial"
                    color: "#FFFFFF"
                    text: "N/A"
                    // dynamically adjust text size
                    font.pixelSize: {
                        var digits = text.split('.')[0].length
                        var defaultSize = 20;
                        if(digits > 3) {
                            return defaultSize - 0.6*digits
                        }
                        return defaultSize;
                    }
                }

                Label {
                    id: unlockedBalanceLabelXp
                    visible: true
                    text: qsTr("Unlocked balance") + translationManager.emptyString
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 110
                }

                Label {
                    visible: !isMobile
                    id: balanceLabelXp
                    text: qsTr("Balance") + translationManager.emptyString
                    fontSize: 14
                    anchors.left: parent.left
                    anchors.leftMargin: 20
                    anchors.top: parent.top
                    anchors.topMargin: 60
                }
                Item { //separator
                    anchors.left: parent.left
                    anchors.right: parent.right
                    height: 1
                }
            }
        }
    }

    Rectangle {
        id: menuRect
        z: 2
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.top: (isMobile)? parent.top : column1Xp.bottom
        anchors.topMargin: (isMobile)? 0 : 32
        color: "transparent"

        Rectangle {
            id: separator
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: 0
            anchors.rightMargin: 0
            anchors.bottom: networkStatus.top;
            height: 10 * scaleRatio
            color: "black"
        }

        NetworkStatusItem {
            id: networkStatus
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: 0
            anchors.rightMargin: 0
            anchors.bottom: (progressBar.visible)? progressBar.top : parent.bottom;
            connected: Wallet.ConnectionStatus_Disconnected
            height: 48 * scaleRatio
        }

        ProgressBar {
            id: progressBar
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: daemonProgressBar.top
            height: 48 * scaleRatio
            syncType: qsTr("Wallet")
            visible: networkStatus.connected
        }

        ProgressBar {
            id: daemonProgressBar
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: separatorXp.bottom
            syncType: qsTr("Daemon")
            visible: networkStatus.connected
            height: 62 * scaleRatio
        }

        Rectangle {
            id: separatorXp
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: 0
            anchors.rightMargin: 0
            anchors.bottom: networkStatusXp.top;
            height: 10 * scaleRatio
            color: "black"
        }

        NetworkStatusItem {
            id: networkStatusXp
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: 0
            anchors.rightMargin: 0
            anchors.bottom: (progressBarXp.visible)? progressBarXp.top : parent.bottom;
            connected: Wallet.ConnectionStatus_Disconnected
            height: 48 * scaleRatio
        }

        ProgressBar {
            id: progressBarXp
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: daemonProgressBarXp.top
            height: 48 * scaleRatio
            syncType: qsTr("Wallet")
            visible: networkStatus.connected
        }

        ProgressBar {
            id: daemonProgressBarXp
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            syncType: qsTr("Daemon")
            visible: networkStatus.connected
            height: 62 * scaleRatio
        }
    } // menuRect
}
