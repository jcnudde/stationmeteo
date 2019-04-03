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
#include <conio.h>

#include "TcpServer.h"
#include "MeteoParser.h"

using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
{
	 //intstance de mes classe :  MeteoParser , TcpServer
	 AbstractParser * parser = new MeteoParser();
	 TcpServer serv(parser);

     //on demarre le server sur le port 9013 nous renvoie true si c'est bon
	 if(serv.start(9013))
	 {
		cout<<"serveur demmarer sur le port 9013"<<endl;
        //on bloque la console pour laisser le serveur tourn�
		getch();
        //on stope le server
	 	serv.stop();
	 }

	return 0;
}
