// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QDialog>

namespace Ui {
class ExportTrackingKeyDialog;
}

namespace WalletGui {

class ExportTrackingKeyDialog : public QDialog {
    Q_OBJECT

public:
    ExportTrackingKeyDialog(QWidget * _parent);
    void walletOpened();
    void walletClosed();
    ~ExportTrackingKeyDialog();

private:
    QString trackingWalletKeys;
    Q_SLOT void copyKey();
    Q_SLOT void saveKeyToFile();

    QScopedPointer<Ui::ExportTrackingKeyDialog> m_ui;
};

}
