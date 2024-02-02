#pragma once

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

#include "FluNavigationItem.h"
#include "../FluUtils/FluUtils.h"

class FluNavigationMenuItem : public FluNavigationItem
{
    Q_OBJECT
  public:
    FluNavigationMenuItem(QWidget *parent = nullptr);

  signals:
    void menuItemClicked();
  public slots:
    void onThemeChanged();

  protected:
    QPushButton *m_menuButton;
    QHBoxLayout *m_hLayout;
};
