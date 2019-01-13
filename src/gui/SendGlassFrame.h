// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016 Karbowanec developers
// Copyright (c) 2018 The ParsiCoin developers
// Copyright (c) 2019 The CryptoPayAfrica Team
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "GlassFrame.h"

namespace WalletGui {

class SendGlassFrame : public GlassFrame {
  Q_OBJECT
  Q_DISABLE_COPY(SendGlassFrame)

public:
  explicit SendGlassFrame(QWidget* _parent);
  ~SendGlassFrame();

  void updateSynchronizationState(quint32 _current, quint32 _total);

protected:
  void paintEvent(QPaintEvent* _event) override;

private:
  quint64 m_currentHeight;
  quint64 m_totalHeight;
  QPixmap m_pixmapBuffer;
  QString m_lastThemeName;

  void paintInBuffer();
  void drawProgressGraph(QPainter &_painter);
  void drawProgressLabel(QPainter &_painter);
  void drawProgressValue(QPainter &_painter);
};

}
