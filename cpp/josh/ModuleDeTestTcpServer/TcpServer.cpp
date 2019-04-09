﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "TcpServer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

TcpServer::TcpServer(AbstractParser * parser)
{
	this->parser = parser;
    this->parser->setServer(this);
}

bool TcpServer::start(int port)
{
    //variable de retour
    bool retour=false;
		if (WSAStartup(MAKEWORD(2, 2),&this->wsaData) == 0)
		{
			this->server=socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			//teste si la socket est créé
			if (this->server != INVALID_SOCKET)
			{
                //on remplie les info pour le server
				this->addrServer.sin_addr.s_addr = INADDR_ANY;
				this->addrServer.sin_port = htons(port);
				this->addrServer.sin_family = AF_INET;
				//test si le bind est bien fait
				if(bind(server, (sockaddr*)&addrServer, sizeof(addrServer)) == 0)
				{
					//test si le listen a fonctionné
					if(listen(server, SOMAXCONN) == 0)
					{

                        this->boucleThread=true;
						this->Thread=CreateThread(
						NULL,
						0,
						threadServer,
						this,
						0,
						&dwThreadIdArray);
						retour=true;
					}
				}

			}
		}
        return retour;

}
void TcpServer::stop()
{

    this->boucleThread=false;
	closesocket(this->server);
	WSACleanup();
}

DWORD WINAPI TcpServer::threadServer(LPVOID params)
{
	//on recaste notre objet reçue en TcpServer
	TcpServer *thisThread = (TcpServer*) params;

	//on crée notre tableau qui va contenir à la premier case notre socket server 
	//et ensuite nos socket client
	fd_set master;

	FD_ZERO(&master);

	FD_SET(thisThread->server, &master);

	//boucle 
	while(thisThread->boucleThread)
	{
		fd_set copy = master;

		int socketCount = select(0,&copy,NULL,NULL,NULL);

		for (int i = 0; i < socketCount; i++) {
			SOCKET sock = copy.fd_array[i];
			if(sock == thisThread->server)
			{
				//accept une nouvelle connexion
				SOCKET newClient = accept(thisThread->server,NULL,NULL);

				//on ajoute le nouveau client dans le tableaux master
				FD_SET(newClient,&master);

			}
			else
			{

				ZeroMemory(thisThread->buffer,1500);
				//accept un nouveau  message
				int bytesIn = recv(sock,thisThread->buffer,1500,0);
				if(bytesIn <=0)
				{
					//on suprimmer le client si il ne repond plus
					closesocket(sock);
					FD_CLR(sock,&master);
				}
				else
				{
					//on envoie notre message à la classe parse
					thisThread->parser->Parse(thisThread->buffer, sock);
				}
			}
		}
	}
	//si la methode stop de la classe tcp server à etait appelé on sort de la boucle
	//est on fermer toute les socket
	for (int i = 0; i < master.fd_count; i++) {

		closesocket(master.fd_array[i]);
	}
	return 0;
}
bool TcpServer::sendMessage(SOCKET sock, char *buff)
{
    send(sock,buff,strlen(buff),NULL);
}
TcpServer::~TcpServer()
{
    this->stop();
}
