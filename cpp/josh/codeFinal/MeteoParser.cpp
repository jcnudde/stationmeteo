﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"
MeteoParser::MeteoParser()
{
	this->recDonner = RecupDonnerMeteo::getInstance();
    this->previMeteo = new PrevisionMeteo();
}
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
	serv->sendMessage(client,StringUtils::magicConvert(this->previMeteo->previsionMeteo()));
}
void MeteoParser::sendDonnerMeteo(TcpServer *serv,SOCKET client)
{

	//on simule nos capteur que l'on est sens� recuperer avec notre class RecupDonnerMeteo

	tabDonnerCapteur donner = this->recDonner->getDonner();

	String answer;

	answer = String((int)donner.temperature);
	answer+=";";
	answer+= String((int)donner.hummiditeRelative);
	answer+=";";
	answer+= String((int)donner.vitesseVent);
	answer+=";";
	answer+= String(this->convertDegrPointCard((int)donner.direction).c_str());
	answer+=";";
	answer+= String((int)donner.luminosite);
	answer+=";";
	answer+= String((int)donner.pressionAtmospherique);
	answer+=";";
	answer+= String((int)donner.surfaceDePluie);
	answer+=";";
	answer+= String(donner.pluie ? 1 : 0);
	answer+=";";
	answer+= String(donner.jour ? 1 : 0);
	answer+="\n";
	serv->sendMessage(client,StringUtils::magicConvert(answer));

}
string MeteoParser::convertDegrPointCard(int degree)
{    string direction;    switch (degree)	{
		 case 360:
			direction ="N";
			break;
		 case 337:
			direction = "NNO";
			break;
		 case 315:
			direction = "NO";
			break;
		 case 292:
			direction = "ONO";
			break;
		 case 270:
			direction = "O";
			break;
		 case 247:
			direction = "OSO";
			break;
		 case 225:
			direction = "SO";
			break;
		 case 202:
			direction = "SSO";
			break;
		 case 180:
			direction = "S";
			break;
		 case 157:
			direction = "SSE";
			break;
		 case 135:
			direction = "SE";
			break;
		 case 112:
			direction = "ESE";
			break;
		 case 90:
			direction = "E";
			break;
		 case 67:
			direction = "ENE";
			break;
		 case 45:
			direction = "NE";
			break;
		 case 22:
			direction = "NNE";
			break;
	  }	return direction;
}
