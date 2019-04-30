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

using namespace std;

class MeteoParser : public AbstractParser
{
	private:
		RecupDonnerMeteo *recupDonnerMeteo;
		void sendPrevisionMeteo(TcpServer *serv,SOCKET client);
		void sendDonnerMeteo(TcpServer *serv,SOCKET client);
		string convertDegrPointCard(int degree);
	public:
		MeteoParser();
		virtual void Parse(char * buf, SOCKET sock);
};

//---------------------------------------------------------------------------
#endif
