#include <QDebug>
#include "threadbody.h"

ThreadBody::ThreadBody(QString name, CustomEngine *p)
    :m_parentObj(0)
{
    qDebug() << Q_FUNC_INFO << name;
    m_name = name;
    m_parentObj = p;
    doReport();
}

void ThreadBody::doReport()
{
    if (m_parentObj) {
        m_parentObj->reportIn (m_name,this);
    }
}
