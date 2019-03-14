#pragma hdrstop
#pragma argsused


#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>    .
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>

#include "TcpServer.h"
typedef int socklen_t;


using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
{
//	 TcpServer test;
//
//	 if(test.start(9013))
//	 {
//		 if(test.clientAccept())
//		 {
//			test.recevoir();
//         }
//	 }
//	 test.stop();
//
	 WSAData wsaData;
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		std::cout << "Erreur initialisation WinSock : " << WSAGetLastError();
		return -1;
	}
//
	SOCKET server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (server == INVALID_SOCKET)
	{
		std::cout << "Erreur initialisation socket : " << WSAGetLastError();
		return -2;
	}

	const unsigned short port = 9999;
	sockaddr_in addr;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(port);
	addr.sin_family = AF_INET;

	int res = bind(server, (sockaddr*)&addr, sizeof(addr));
	if (res != 0)
	{
		std::cout << "Erreur bind : " << WSAGetLastError();
		return -3;
	}

	res = listen(server, SOMAXCONN);
	if (res != 0)
	{
		std::cout << "Erreur listen : " << WSAGetLastError();
		return -4;
	}
	fd_set master;

	FD_ZERO(&master);

	FD_SET(server, &master);


	while(true)
	{
		fd_set copy = master;

		int socketCount = select(0,&copy,nullptr,nullptr,nullptr);

		for (int i = 0; i < socketCount; i++) {
			SOCKET sock = copy.fd_array[i];
			if(sock == server)
			{
				//accept a new connection
				 SOCKET newClient = accept(server,nullptr,nullptr);

				//add the new wonnection to the list of connected clients
				FD_SET(client,&master);
				//Send a welcome message to the connected client
				string welcomeMsg = "Bienvenue sur le server";
				send(client,welcomeMsg.c_str(),welcomeMsg.size()+1,0);
				//TODO : Broadcat we have new connection


			}
			else
			{
				//accept a new message
                //send message to other clients, and definiately NOT the listening socket
            }

		}

	}



	closesocket(server);
	WSACleanup();


	return 0;
}
