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
void TcpServer::clientAccept()
{

//	this->addrlen= sizeof(this->addrServer);
//	this->client=accept(this->server, //socket server
//						(SOCKADDR*)(&this->addrClient), //variable qui stock les info du client
//						&this->addrlen);
//	if (this->client != INVALID_SOCKET)
//	{
//		retour=true;
//	}
//
	fd_set master;

	FD_ZERO(&master);

	FD_SET(server, &master);
	while(true)
	{
		fd_set copy = master;

		int socketCount = select(0,&copy,NULL,NULL,NULL);

		for (int i = 0; i < socketCount; i++) {
			SOCKET sock = copy.fd_array[i];
			if(sock == server)
			{
				//accept a new connection
				SOCKET newClient = accept(server,NULL,NULL);

				//add the new wonnection to the list of connected clients
				FD_SET(newClient,&master);

			}
			else
			{
				char buffer[1500];
				ZeroMemory(buffer,1500);
				//accept a new message
				int bytesIn = recv(sock,buffer,1500,0);
				if(bytesIn <=0)
				{
					//Drop the client
					closesocket(sock);
					FD_CLR(sock,&master);
				}
				else
				{
					//send message to other clients, and definiately NOT the listening socket
					for (int j = 0; j < master.fd_count; j++) {
						SOCKET outSock = master.fd_array[j];
						if(outSock != server && outSock !=sock)
						{
							send(outSock,buffer,bytesIn,0);
						}
					}

				}
			}


		}
	}
}
TcpServer::~TcpServer()
{
    this->stop();
}
