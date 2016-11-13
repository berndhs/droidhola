#include "customengine.h"
#include <QDebug>
#include <QStringList>
#include <QString>

CustomEngine::CustomEngine()
{

}

void
CustomEngine::reportIn(QString name, QObject *fellow)
{
  m_fellows[name] = fellow;
  qDebug() << Q_FUNC_INFO << "\n\tfellow " << fellow << name
           << " on " << fellow->thread();
}

void
CustomEngine::reportState()
{
  qDebug() << Q_FUNC_INFO;
  qDebug() << "\tpluginpath " << pluginPathList();
  qDebug() << "\tbase Url" << baseUrl();
  qDebug() << "\t" << m_fellows.count() << "fellows";

  auto kk = m_fellows.keys();
  qDebug() << "\nthere are " << kk.count() << " fellows";
  for (int i=0; i<kk.count(); ++i) {
    qDebug() << "\t\t" << "fellow" << kk[i] << m_fellows[kk[i]];
  }
}
