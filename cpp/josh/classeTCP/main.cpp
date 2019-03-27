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

typedef int socklen_t;


using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
{
	AbstractParser * parser = new MeteoParser();
	 TcpServer test(parser);

	 if(test.start(9013))
	 {
		cout<<"serveur demmarer sur le port 9013"<<endl;
        getch();
	 	test.stop();
	 }

	return 0;
}
