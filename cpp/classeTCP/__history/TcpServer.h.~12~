//---------------------------------------------------------------------------

#ifndef TcpServerH
#define TcpServerH
#include "Server.h"
#include <stdio.h>    .
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <vector>

using namespace std;
class TcpServer : public Server
{
	private:
		SOCKET server;
        SOCKET client;
		sockaddr_in addrServer;
		sockaddr_in addrClient;
		socklen_t addrlen;
		char buffer[1500];
	public:
		//TcpServer();
		~TcpServer();
		bool start(int port);
		void stop()=0;
		vector<char> recevoir();
		void envoi(string message);

};
//---------------------------------------------------------------------------
#endif
