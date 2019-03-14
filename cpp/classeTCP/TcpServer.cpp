﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "TcpServer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


TcpServer::~TcpServer()
{

}
bool TcpServer::start(int port)
{
    //variable de retour
    bool retour=false;

    this->server=socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //teste si la socket est créé
    if (this->server != INVALID_SOCKET)
	{ 
        this->addrServer.sin_addr.s_addr = INADDR_ANY;
	    this->addrServer.sin_port = htons(port);
	    this->addrServer.sin_family = AF_INET;
        //test si le bind est bien fait
        if(bind(server, (sockaddr*)&addr, sizeof(addr)) == 0)
        {
            //test si le listen a fonctionné
            if(listen(server, SOMAXCONN) == 0)
            {
                this->addrClient={0}; 
                this->addrlen= sizeof(this->addrServer);
                this->client=accept(this->server, //socket server
                                    (SOCKADDR*)(&this->addrClient), //variable qui stock les info du client 
                                    &this->addrlen);
                this->client=accept(server, (SOCKADDR*)(&from),&addrlen);
                if (this->client != INVALID_SOCKET)
	            {
                    cout<<"connecter"<<endl;            
                }                          
            }
            
        }
		
	}

}
void TcpServer::stop()
{
    closesocket(this->server);
}
vector<char> TcpServer::recevoir()
{
    std::vector<char> test;

	if (recvfrom(newClient,buffer,1500,0,(SOCKADDR*)(&from),&addrlen) != SOCKET_ERROR)
	{
					cout<<buffer<<endl;
					buffer[0]='\0';
	}
    return test;
}
void TcpServer::envoi(string message)
{
}
