#include "cryptofront.h"
#include <QDebug>
#include <QHostAddress>
#include <QTimer>
#include <QMutex>
#include <QDateTime>
#include <QtGlobal>
#include <QMetaObject>
#include <QMessageBox>
#include <QFontDatabase>
#include <QFont>
#include <unistd.h>
#include "spotkernel.h"
#include "cryptobad.h"
#include "textbox.h"

using namespace std;

/****************************************************************/

/*
** Copyright (c) 2016 - present, Bernd Stramm.
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the author may not be used to endorse or promote products
**    derived from chatchat without specific prior written permission.
**
** chatchat IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** chatchat, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


 /****************************************************************/

using namespace deliberate;

CryptoFront::CryptoFront(ChatApplication & app, ProgramVersion &vers, QString daName, QObject *parent)
  : QObject(parent),
    m_input("?"),
    m_output("!"),
    connecTimer(nullptr),
    m_kernel(nullptr),
    mainDialog(nullptr)
{
  chatApp = &app;
  version = &vers;
  qDebug() << Q_FUNC_INFO;
  qDebug() << "\ton thread" << thread();
  setObjectName(daName);
  m_kernelThread = new QThread(this);
  m_kernel = new SpotKernel(nullptr);
  m_kernel->moveToThread(m_kernelThread);
  m_kernel->setCrypto(this);
  m_kernelThread->start();
  qsrand(QDateTime::currentDateTime().toTime_t());
  connecTimer = nullptr;
  m_passphrase = new TextBox (0);
  connect(m_kernel,SIGNAL(reportCrypt(QString)),this,SLOT(reportEncrypted(QString)),Qt::QueuedConnection);
  connect(m_kernel,SIGNAL(reportClear(QString)),this,SLOT(reportClear(QString)),Qt::QueuedConnection);
  connect(this,SIGNAL(haveInput(QByteArray)),m_kernel,SLOT(sendMsg(QByteArray)),Qt::QueuedConnection);
  connect(this,SIGNAL(haveCrypto(QByteArray)),m_kernel,SLOT(clearText(QByteArray)),Qt::QueuedConnection);
  connect (m_passphrase, SIGNAL(haveText(QString)),this,SLOT(changeSource(QString)));
//  connecTimer = new QTimer();
//  connect(connecTimer,SIGNAL(timeout()),this,SLOT(pokeThread()));
//  connecTimer->start(10000);

  qDebug() <<Q_FUNC_INFO <<  "FONT FONT FONT " << chatApp->font();
  QFontDatabase fdb;
  qDebug() << "we have fonts:\n" << fdb.families();
  QFont ft;
  ft.setFamily("Latin Modern Roman");
  ft.setWeight(50);
  ft.setPixelSize(18);
  chatApp->setFont(ft);
}

CryptoFront::~CryptoFront()
{
  m_kernelThread->terminate();
  m_kernelThread->deleteLater();
}

void CryptoFront::sendMessage(QString msg)
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << msg;
  m_input = msg;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  qDebug() << "\tkernel is at " << m_kernel;
  sleep(0);
  emit haveInput(m_input.toUtf8());
  //  m_kernel->sendMsg (m_input.toUtf8());
}

void CryptoFront::symmetric(QString msg)
{
  emit haveCrypto(msg.toUtf8());
}

void CryptoFront::done()
{
//  qDebug() << Q_FUNC_INFO;
//  connecTimer->stop();
//  connecTimer->deleteLater();
//  m_kernelThread->terminate();
//  m_kernelThread->deleteLater();
//  m_kernel->deleteLater();
//  disconnect(m_kernel,0,0,0);
//  disconnect(this,0,0,0);

  chatApp->quit();
}

void CryptoFront::showVersion()
{
  qDebug() << Q_FUNC_INFO << mainDialog;

  QMessageBox box;
  QFont ft = chatApp->font();
  ft.setFamily("Waree");
  ft.setWeight(50);
  ft.setPointSize(16);
  ft.setPixelSize(18);
  box.setFont(ft);
  box.setToolTip(QString("the tooltip for this box"));
  box.setText(version->Version());
  box.setIcon(QMessageBox::Information);
  box.setDetailedText(version->Version());
  qDebug() << box.font();
  box.exec();
}

void CryptoFront::setPhrase(QString phrase)
{
  qDebug() << Q_FUNC_INFO << "passphrase " << phrase;
}

void CryptoFront::setMainDialog(QObject *dialogue)
{
  mainDialog = dialogue;
}

void CryptoFront::reportEncrypted(QString crypto)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO << "going to emit for " << crypto;
  m_crypto = crypto;
  emit cryptoChanged(crypto);
}

void CryptoFront::reportClear(QString clear)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO << "going to emit for " << clear << "bytes:" <<clear.length();
  m_clear = clear;
  emit clearChanged(clear);
}
void CryptoFront::gotSignal(QByteArray arg0)
{
  qDebug() << Q_FUNC_INFO << arg0;
}

void CryptoFront::getPhrase()
{
  qDebug() << Q_FUNC_INFO;
  if (m_passphrase) {
    m_passphrase->SetLabel("Enter Passphrase");
    m_passphrase->SetButtonText("AllRight");
    QString phrase = m_passphrase->GetText();
    qDebug() << "phrase is " << phrase;
  }
}

void
CryptoFront::addKernel(SpotKernel &kern)
{
  qDebug() << Q_FUNC_INFO;
  m_kernel = &kern;
}

void
CryptoFront::pokeThread()
{
  qDebug() << Q_FUNC_INFO;
//  int threadNum = qrand() % threadPool.size();
//  qDebug() << "calling thread " << threadNum;
  //  threadPool[threadNum]->makeData();
}

void CryptoFront::changeSource(QString pass)
{
  qDebug() << Q_FUNC_INFO << pass;
  QVariant msg = "NoPage.qml";
  QVariant returnedValue ("nothing");
  QMetaObject::invokeMethod(loadConnect, "nextQml",
          Q_RETURN_ARG(QVariant, returnedValue),
          Q_ARG(QVariant, msg));
  qDebug() << "after dooDa" << returnedValue;

  if (root0) {
    QObject * cantSee = root0->findChild<QObject*> ("cantSeeMe");
    qDebug() << Q_FUNC_INFO << "cantSee at " << cantSee;
    if (cantSee) {
      cantSee->setProperty("havePass",QVariant(true));
    }
  }
}

void CryptoFront::connectQML(CustomEngine &eng)
{
  qDebug() << Q_FUNC_INFO << "\t\t\t======================================="
           << "\n---------------------------------------"
          ;
  if (m_passphrase) {
    QList<QObject*> rootList = eng.rootObjects();
    root0 = rootList.at(0);
    QObject * button = root0->findChild<QObject*> ("passPhraseButton");
    qDebug() << Q_FUNC_INFO << "passPhraseButton" << "is " << button;
    connect (button,SIGNAL(wantPhrase()),this,SLOT(getPhrase()));
    QObject * top = root0->findChild<QObject*> ("cantSeeMe");
    qDebug() << "\n\n\n\n\n\ntop at " << top;
    if (top) {
      loadConnect = top;
      QVariant returnedValue;
      QVariant msg = "Hello from C++";
      QMetaObject::invokeMethod(loadConnect, "dooDa",
              Q_RETURN_ARG(QVariant, returnedValue),
              Q_ARG(QVariant, msg));
      qDebug() << "after dooDa" << returnedValue;
    }
  }
}

void
CryptoFront::setInput(QString &input)
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  m_input = input;
  qDebug() << Q_FUNC_INFO << "input is " << m_input;
  m_kernel->sendMsg (m_input.toUtf8());
}


QString
CryptoFront::getInput()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  return m_input;
}

QString
CryptoFront::getOutput()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  return m_output;
}

void
CryptoFront::dumpInfo()
{
  qDebug() << Q_FUNC_INFO << "tread" << thread();
  qDebug() << Q_FUNC_INFO;
  qDebug() << "m_input" << m_input;
  qDebug() << "m_output" << m_output;
  qDebug() << "connectTimer ptr " << connecTimer;
  qDebug() << "m_kernel" << m_kernel << "on" << m_kernel->thread();
}
