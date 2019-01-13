// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

namespace Ui {
  class NoWalletFrame;
}

namespace WalletGui {

class NoWalletFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(NoWalletFrame)

public:
  NoWalletFrame(QWidget* _parent);
  ~NoWalletFrame();

 Q_SLOT void createWallet();
 Q_SLOT void openWallet();

private:
  QScopedPointer<Ui::NoWalletFrame> m_ui;

Q_SIGNALS:
  void createWalletClickedSignal();
  void openWalletClickedSignal();
};

}
