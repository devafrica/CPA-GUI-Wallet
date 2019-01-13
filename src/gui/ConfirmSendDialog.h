// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class ConfirmSendDialog;
}

namespace WalletGui {

class ConfirmSendDialog : public QDialog {
  Q_OBJECT

public:
  ConfirmSendDialog(QWidget* _parent);
  ~ConfirmSendDialog();

  void showPasymentDetails(quint64 _total);
  void showPaymentId(QString _paymentid);
  void confirmNoPaymentId();

private:
  QScopedPointer<Ui::ConfirmSendDialog> m_ui;
};

}
