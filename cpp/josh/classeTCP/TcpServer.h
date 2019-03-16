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
typedef int socklen_t;
class TcpServer : public Server
{
	private:
		SOCKET server;
		SOCKET client;
		sockaddr_in addrServer;
		sockaddr_in addrClient;
		socklen_t addrlen;
		char buffer[1500];
		WSAData wsaData;

	public:
		//TcpServer();
		~TcpServer();

		bool start(int port);
		void stop();
		vector<char> recevoir();
		void envoi(string message);

		void clientAccept();

};
//---------------------------------------------------------------------------
#endif