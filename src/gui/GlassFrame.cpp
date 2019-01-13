// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QEvent>

#include "GlassFrame.h"

namespace WalletGui {

GlassFrame::GlassFrame(QWidget* _parent) : QFrame(_parent) {
  d_ptr->q_ptr = this;
}

GlassFrame::~GlassFrame() {
}

void GlassFrame::install(QWidget* _parent) {
  if (parent() == _parent) {
    return;
  }

  remove();
  setParent(_parent);
  _parent->installEventFilter(this);
  show();
  QEvent event(QEvent::Resize);
  eventFilter(0, &event);
}

void GlassFrame::remove() {
  if (parentWidget() != nullptr) {
    parentWidget()->removeEventFilter(this);
    hide();
    setParent(nullptr);
  }
}

bool GlassFrame::eventFilter(QObject* _object, QEvent* _event) {
  if (_event->type() == QEvent::Show || _event->type() == QEvent::Paint || _event->type() == QEvent::Resize) {
    resize(parentWidget()->size());
    move(0, 0);
    return true;
  }

  if (qobject_cast<QWidget*>(parent())->isVisible()) {
    setFocus();
  }

  return false;
}

}
