//---------------------------------------------------------------------------

#ifndef AbstractParserH
#define AbstractParserH

#include <windows.h>

class TcpServer;

class AbstractParser
{
	TcpServer * server;

	public:
		virtual void Parse(char * buffer, SOCKET sock) = 0;
		inline void setServer(TcpServer * server) {
			this->server = server;
		}

		inline TcpServer * getServer()
		{
            return server;
        }
};


//---------------------------------------------------------------------------
#endif
