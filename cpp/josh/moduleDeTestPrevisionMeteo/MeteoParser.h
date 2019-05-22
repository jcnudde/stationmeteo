//---------------------------------------------------------------------------

#ifndef MeteoParserH
#define MeteoParserH

#include "AbstractParser.h"
#include <cstring>
#include <iostream>
#include <System.hpp>
#include "MeteoStructs.h"
#include "StringUtils.h"
#include "PrevisionMeteo.h"

using namespace std;

class MeteoParser : public AbstractParser
{
	private:
		PrevisionMeteo * previMeteo;
		void sendPrevisionMeteo(TcpServer *serv,SOCKET client);
	public:
		MeteoParser();
		virtual void Parse(char * buf, SOCKET sock);
};

//---------------------------------------------------------------------------
#endif
