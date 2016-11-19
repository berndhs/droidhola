#include "programversion.h"
#include <QMessageBox>
#include <QTimer>
#include <QCoreApplication>
#include <iostream>


/****************************************************************
 * This file is distributed under the following license:
 *
 * Copyright (C) 2010, Bernd Stramm
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA  02110-1301, USA.
 ****************************************************************/
#include <QDebug>

namespace deliberate {

  QString ProgramVersion::VersionNumber ("1.0.0");

  QString ProgramVersion::ProgramName("chatchat");
  QString ProgramVersion::copyright ("Copyright (C) 2016 Bernd Stramm");


  ProgramVersion::ProgramVersion(QCoreApplication &app, QString pgmname, QObject *parent)
    :QObject(parent)
  {
    m_app = &app;
    ProgramName = pgmname;
  }

  QString ProgramVersion::Version ()
  {
    return ProgramName + QString (" Version " )
                   + VersionNumber + " " + QString(__DATE__) + " "
           + QString(__TIME__)
           + QString("\r\n")
           + copyright;
  }

  void ProgramVersion::ShowVersionWindow ()
  {
    QString versionMessage(Version());
    qDebug() << Q_FUNC_INFO << versionMessage;
//    QMessageBox::warning("Version",QString ("vers") );
    QMessageBox box;
    box.setText (versionMessage + " the current version");
    QTimer::singleShot(30000,&box,SLOT(accept()));
    box.exec();
  }

  void ProgramVersion::CLIVersion ()
  {
    std::cerr << Version().toStdString() << std::endl;
  }

  QString ProgramVersion::MyName()
  {
    return ProgramName;
  }

}
