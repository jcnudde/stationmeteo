//---------------------------------------------------------------------------

#ifndef MeteoParserH
#define MeteoParserH

#include "AbstractParser.h"
#include <cstring>
#include <iostream>
#include "RecupDonnerMeteo.h"


using namespace std;

class MeteoParser : public AbstractParser
{
	private:
		RecupDonnerMeteo *recupDonnerMeteo;
		void previsionMeteo(TcpServer *serv,SOCKET client);
		void getDonnerMeteo(TcpServer *serv,SOCKET client);
	public:
		virtual void Parse(char * buf, SOCKET sock);
};

//---------------------------------------------------------------------------
#endif
