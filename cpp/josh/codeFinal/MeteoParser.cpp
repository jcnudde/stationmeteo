//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"

void MeteoParser::Parse(char * buf, SOCKET sock)
{

	TcpServer * serv = this->getServer();

	if(strcmp(buf,"METEO\n") == 0 ) {
		this->previsionMeteo(serv,sock);
	}
	if(strcmp(buf,"DONNEDONNER") == 0 ){
		this->getDonnerMeteo(serv,sock);
    }

}
void MeteoParser::previsionMeteo(TcpServer * serv,SOCKET client)
{
	serv->sendMessage(client,"123458");
}
void MeteoParser::getDonnerMeteo(TcpServer *serv,SOCKET client)
{
	this->recupDonnerMeteo = RecupDonnerMeteo::getInstance();

    recupDonnerMeteo->getDonner();
	serv->sendMessage(client,"120km/h;NNE;1000hPa;20°C;50%;100lux;pluie;jour;120mm²");
}
