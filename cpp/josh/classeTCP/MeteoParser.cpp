//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoParser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "TcpServer.h"
#include <iostream>

void MeteoParser::Parse(char * buf, SOCKET sock)
{
	std::cout << buf << std::endl;
}