// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QDialog>

namespace Ui {
class PrivateKeysDialog;
}

namespace WalletGui {

class PrivateKeysDialog : public QDialog {
    Q_OBJECT

public:
    PrivateKeysDialog(QWidget * _parent);
    void walletOpened();
    void walletClosed();
    ~PrivateKeysDialog();

private:
    Q_SLOT void copyKey();

    QScopedPointer<Ui::PrivateKeysDialog> m_ui;
};

}
