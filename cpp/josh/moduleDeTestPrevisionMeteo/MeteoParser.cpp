//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"
MeteoParser::MeteoParser()
{
    this->previMeteo = new PrevisionMeteo();
}
void MeteoParser::Parse(char * buf, SOCKET sock)
{
	//on recupere le serveur car on en à besoin pour renvoyer la reponse
	//au client 
	TcpServer * serv = this->getServer();

	//on test si le message reçue est METEO
	if(strcmp(buf,"PreviMeteo") == 0 ) {
		this->sendPrevisionMeteo(serv,sock);
	}
}
void MeteoParser::sendPrevisionMeteo(TcpServer * serv,SOCKET client)
{

	wchar_t * tmp;
	tmp = this->previMeteo->previsionMeteo().w_str();
	int len = wcslen(tmp);
	char * rep = new char[len+1];
	wcstombs(rep, tmp, len);

	serv->sendMessage(client,rep);
}

