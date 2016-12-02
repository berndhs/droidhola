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
#include <QPushButton>
#include <QAbstractButton>
#include <QDateTime>

namespace deliberate {

  TextBox::TextBox (QWidget *parent)
          :theValue(""),
            okButton(nullptr)
  {
    setupUi(this);
    QAbstractButton * but = findChild<QAbstractButton*> ("okButton");
    if (but) {
      okButton = but;
      connect (but,SIGNAL(clicked()),this,SLOT(grabPass()));
    }
    connect (textValueBox,SIGNAL(returnPressed()),this,SLOT(grabPass()));
  }

  TextBox::~TextBox ()
  {
  }

  void
  TextBox::SetLabel (QString lbl)
  {
    boxLabel->setText(lbl);\
    QString dateString = QDateTime::currentDateTime().toString(Qt::ISODate);
    dateLabel->setText(dateString);
    QFont f = dateLabel->font();
    f.setPointSize(8);
    dateLabel->setFont(f);
    qDebug() << "boxLabel set to" << boxLabel->text();
  }

  void TextBox::SetButtonText(QString butText)
  {
    okButton->setText(butText);
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
    QString theValue = textValueBox->text();
    emit haveText(theValue);
    return theValue;
  }

  void TextBox::grabPass()
  {
    theValue = textValueBox->text();
    QString dateString = QDateTime::currentDateTime().toString(Qt::ISODate);
    qDebug() << Q_FUNC_INFO << theValue << " at " << dateString;
    emit haveText(theValue);
    accept();
  }

  int
  TextBox::exec ()
  {
    return this->QDialog::exec();
  }

} // namespace
