#pragma once

#include <QScroller>
#include <QScrollArea>

class ScrollView : public QScrollArea {
  Q_OBJECT

public:
  explicit ScrollView(QWidget *w = nullptr, QWidget *parent = nullptr);
};
