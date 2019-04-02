//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"

void MeteoParser::Parse(char * buf, SOCKET sock)
{

	TcpServer * serv = this->getServer();

	if (strcmp(buf,"METEO\n") == 0 ) {

        this->affichageIHM();


	}
}