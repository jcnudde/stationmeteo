//--------------------------------------------------------------------------

#ifndef BddH
#define BddH
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;
class Bdd
{
	private:

	public:
		virtual bool connecte(string host,string user,string password,string dbname)=0;
		virtual bool insert(std::string requete)=0;
		virtual bool update (std::string requete)=0;
		virtual std::vector< std::vector<string> > select(string requete)=0;

};
//---------------------------------------------------------------------------
#endif


