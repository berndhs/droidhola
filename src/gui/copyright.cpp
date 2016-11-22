#include "copyright.h"

CopyRight::CopyRight()
{
m_text = ""
"\n  "
"\n  "
"\n /****************************************************************/ "
"\n  "
"\n /* "
"\n ** Copyright (c) 2016 - present, Bernd Stramm. "
"\n ** All rights reserved. "
"\n ** "
"\n ** Redistribution and use in source and binary forms, with or without "
"\n ** modification, are permitted provided that the following conditions "
"\n ** are met: "
"\n ** 1. Redistributions of source code must retain the above copyright "
"\n **    notice, this list of conditions and the following disclaimer. "
"\n ** 2. Redistributions in binary form must reproduce the above copyright "
"\n **    notice, this list of conditions and the following disclaimer in the "
"\n **    documentation and/or other materials provided with the distribution. "
"\n ** 3. The name of the author may not be used to endorse or promote products "
"\n **    derived from chatchat without specific prior written permission. "
"\n ** "
"\n ** chatchat IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR "
"\n ** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES "
"\n ** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. "
"\n ** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, "
"\n ** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT "
"\n ** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, "
"\n ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY "
"\n ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT "
"\n ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF "
"\n ** chatchat, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. "
"\n */ "
"\n  "
"\n  "
"\n  /****************************************************************/ "
"\n  "
"\n  "
"\n  "
;




}

QString CopyRight::print()
{
  return m_text;
}

void CopyRight::printRight()
{
  qDebug() << print();
}
