//---------------------------------------------------------------------------

#ifndef MeteoParserH
#define MeteoParserH

#include "AbstractParser.h"
#include <cstring>
#include <iostream>
#include <System.hpp>
#include "MeteoStructs.h"
#include "StringUtils.h"
#include "RecupDonnerMeteo.h"
#include "PrevisionMeteo.h"

using namespace std;

class MeteoParser : public AbstractParser
{
	private:
		RecupDonnerMeteo *recDonner;
		PrevisionMeteo * previMeteo;
		void sendPrevisionMeteo(TcpServer *serv,SOCKET client);
		void sendDonnerMeteo(TcpServer *serv,SOCKET client);
		string convertDegrPointCard(int degree);
	public:
		MeteoParser();
		virtual void Parse(char * buf, SOCKET sock);
};

//---------------------------------------------------------------------------
#endif
