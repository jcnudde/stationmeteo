//---------------------------------------------------------------------------

#ifndef MysqlMeteoManagerH
#define MysqlMeteoManagerH
#include "Bdd.h"
#include "Mysql.h"

#include <vcl.h>
#include <iostream>
#include <sstream>
#include "MeteoStructs.h"

using namespace std;

class MysqlMeteoManager {
   private:
	  static Bdd* bdd;
	  static MysqlMeteoManager *m_instance;
	  MysqlMeteoManager();
	  ~MysqlMeteoManager();

   public:

		static MysqlMeteoManager * getInstance();
		static void stopInstance();
        MysqlMeteoManager * operator=(MysqlMeteoManager* o1);
        bool connect();
		bool InsertDonnerCapteur(tabDonnerCapteur donneeMeteo);
		vector<tabDonnerCapteur> SelectLastDonnee();
		//methode pour convertire les degr�e en point cardinaux (string)
		string convertDegrPointCard(int degree);
		String convertVirguPoint(double valeur);
};
//---------------------------------------------------------------------------
#endif
