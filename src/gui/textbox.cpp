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
          :theValue(""),
            okButton(nullptr)
  {
    setupUi(this);
    QObject * but = findChild<QObject*> ("okButton");
    if (but) {
      okButton = but;
      connect (but,SIGNAL(clicked()),this,SLOT(grabPass()));
    }
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
    exec();
    return textValueBox->text();
  }

  void TextBox::grabPass()
  {
    theValue = textValueBox->text();
    accept();
  }

  int
  TextBox::exec ()
  {
    return this->QDialog::exec();
  }

} // namespace
