#include "textbox.h"


//
//  Copyright (C) 2009 - Bernd H Stramm 
//
// This program is distributed under the terms of 
// the GNU General Public License version 3 
//
// This software is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty 
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
//

#include <QDebug>
#include <QFont>
#include <QFontInfo>
#include <QFontDatabase>

namespace deliberate {

  TextBox::TextBox (QWidget *parent)
          :theValue("")
  {
    QFontDatabase fdb;
    QFont ft("Monospace",20,2,true);
//    ft.setPixelSize(22);
    ft.setPointSize(22);
    ft.setWeight(1);
    ft.setFixedPitch(true);
    setFont(ft);
    qDebug() << Q_FUNC_INFO << "fonts from" << fdb.families();
    qDebug() << Q_FUNC_INFO << "current font " << font() << "/ w" << font().weight() << "/ px"
             << font().pixelSize() << "/ pt" << font().pointSize() ;
    setupUi(this);
  }

  TextBox::~TextBox ()
  {
  }

  void
  TextBox::SetLabel (QString lbl)
  {
    boxLabel->setText(lbl);
    qDebug() << "boxLabel set to" << boxLabel->text();
  }

  void
  TextBox::SetDefault (QString def)
  {
    textValueBox->setText(def);
    qDebug() << "textValueBox set to" << textValueBox->text();
  }

  QString
  TextBox::GetText ()
  {
    return textValueBox->text();
  }

  int
  TextBox::exec ()
  {
    QFont ft = font();
    QFontInfo inf(ft);
    qDebug() << Q_FUNC_INFO << "font info " << inf.pixelSize() << "/" << inf.pointSize() << "fam " << inf.family();
    ft.setPixelSize(20); ft.setPointSize(40);
    setFont(ft);
    qDebug() << Q_FUNC_INFO << "font size px " << font().pixelSize() << " pt " << font().pointSize();
    return this->QDialog::exec();
  }

} // namespace
