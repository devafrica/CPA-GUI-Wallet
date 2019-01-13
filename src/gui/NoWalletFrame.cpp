// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "MainWindow.h"
#include "NoWalletFrame.h"

#include "ui_nowalletframe.h"

namespace WalletGui {

NoWalletFrame::NoWalletFrame(QWidget* _parent) : QFrame(_parent), m_ui(new Ui::NoWalletFrame) {
  m_ui->setupUi(this);
}

NoWalletFrame::~NoWalletFrame() {
}

void NoWalletFrame::createWallet() {
  Q_EMIT createWalletClickedSignal();
}

void NoWalletFrame::openWallet() {
  Q_EMIT openWalletClickedSignal();
}

}
