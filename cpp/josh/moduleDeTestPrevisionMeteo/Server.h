//---------------------------------------------------------------------------

#ifndef ServerH
#define ServerH
#include <vector>
#include <string>

using namespace std;
class Server
{
	protected :
		int port;
	public :
		virtual bool start(int port)=0;
		virtual void stop()=0;
		int getPort();
	
};
//---------------------------------------------------------------------------
#endif
