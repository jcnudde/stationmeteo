//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"

void MeteoParser::Parse(char * buf, SOCKET sock)
{

	TcpServer * serv = this->getServer();

	if(strcmp(buf,"METEO") == 0 ) {
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

	tabDonnerCapteur tabDonner =recupDonnerMeteo->getDonner();
	String protocole = "$";
	protocole+= String((int)tabDonner.vitesseVent);
	protocole+=";";
	protocole+=String((int)tabDonner.temperature);
	protocole+=";";
	protocole+=String((int)tabDonner.pressionAtmospherique);
	protocole+=";";
	protocole+=String(tabDonner.direction);
	protocole+=";";
	protocole+=String((int)tabDonner.hummiditeRelative);
	protocole+=";";
	protocole+=String((int)tabDonner.luminosite);
	protocole+=";";
	protocole+=String((int)tabDonner.jour);
	protocole+=";";
	protocole+=String((int)tabDonner.pluie);
	protocole+=";";
	protocole+=String((int)tabDonner.surfaceDePluie);
	protocole+="$";

	char * req = StringUtils::magicConvert(protocole.c_str());
	serv->sendMessage(client,req);
    delete req;
}
