//---------------------------------------------------------------------------

#ifndef ServerH
#define ServerH
#include <vector>
#include <string>

using namespace std;
class Server
{
	public :
		virtual bool start(int port)=0;
		virtual void stop()=0;
		virtual vector<char> recevoir()=0;
		virtual void envoi(string message)=0;
};
//---------------------------------------------------------------------------
#endif
