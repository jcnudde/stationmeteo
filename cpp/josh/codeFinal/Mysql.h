//---------------------------------------------------------------------------

#ifndef MysqlH
#define MysqlH
#include "Bdd.h"
#include <iostream>
#include <cstring>
#include <string>
#include "include\mysql.h"
#include <vcl.h>

class Mysql : public Bdd
{
	private :
		MYSQL *mysql;
	public:
		Mysql();
		~Mysql();
		bool connecte(string host,string user,string password,string dbname);
		bool insert(string requete);
		bool update (std::string requete);
		std::vector< std::vector<string> > select(string requete);

};
//---------------------------------------------------------------------------
#endif
