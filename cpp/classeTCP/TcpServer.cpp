﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "TcpServer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

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
							retour=true;
					}
				}

			}
		}
        return retour;

}
void TcpServer::stop()
{
	closesocket(this->server);
	WSACleanup();
}
vector<char> TcpServer::recevoir()
{
	std::vector<char> test;
	memset(this->buffer,'\0',1500);
	if (recvfrom(this->client,buffer,1500,0,(SOCKADDR*)(&this->addrClient),&addrlen) != SOCKET_ERROR)
	{
					cout<<buffer<<endl;
	}
    return test;
}
void TcpServer::envoi(string message)
{
}
bool TcpServer::clientAccept()
{
	bool retour=false;
	this->addrlen= sizeof(this->addrServer);
	this->client=accept(this->server, //socket server
						(SOCKADDR*)(&this->addrClient), //variable qui stock les info du client
						&this->addrlen);
	if (this->client != INVALID_SOCKET)
	{
		retour=true;
	}
    return retour;
}
TcpServer::~TcpServer()
{
    this->stop();
}
