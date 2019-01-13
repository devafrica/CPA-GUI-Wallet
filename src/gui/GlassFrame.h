// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QFrame>

namespace WalletGui {

class GlassFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(GlassFrame)

public:
  explicit GlassFrame(QWidget* _parent);
  virtual ~GlassFrame();

  virtual void install(QWidget* _parent);
  virtual void remove();

protected:
  bool eventFilter(QObject* _object, QEvent* _event) override;
};

}
