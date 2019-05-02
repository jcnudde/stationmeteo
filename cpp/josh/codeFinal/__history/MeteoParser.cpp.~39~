//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"

void MeteoParser::Parse(char * buf, SOCKET sock)
{
	//on recupere le serveur car on en à besoin pour renvoyer la reponse
	//au client 
	TcpServer * serv = this->getServer();

	//on test si le message reçue est METEO
	if(strcmp(buf,"PreviMeteo\n") == 0 ) {
		this->sendPrevisionMeteo(serv,sock);
	}
	//on test si le message reçue est DONNEDONNER
	if(strcmp(buf,"PartDonnerMeteo\n") == 0 ){
		this->sendDonnerMeteo(serv,sock);
    }

}
void MeteoParser::sendPrevisionMeteo(TcpServer * serv,SOCKET client)
{
	serv->sendMessage(client,"$ensoleill�;pluie=0;25");
}
void MeteoParser::sendDonnerMeteo(TcpServer *serv,SOCKET client)
{

	//on simule nos capteur que l'on est sens� recuperer avec notre class RecupDonnerMeteo
	tabDonnerCapteur tabDonner;
	tabDonner.vitesseVent = 120;
	tabDonner.temperature=21;
	tabDonner.pressionAtmospherique=1050;
	tabDonner.direction=360;
	tabDonner.hummiditeRelative=50;
	tabDonner.luminosite=50000;
	tabDonner.jour=1;
	tabDonner.pluie=0;
	tabDonner.surfaceDePluie=120;

	serv->sendMessage(client,"$120;21;1050;360;50;50000;1;0;120$");

}
