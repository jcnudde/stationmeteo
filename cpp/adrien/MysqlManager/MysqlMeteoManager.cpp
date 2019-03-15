//---------------------------------------------------------------------------

#pragma hdrstop

#include "MysqlMeteoManager.h"
#include "../classeBDD/Bdd.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


class MysqlMeteoManager {
   private:
     
      static BDD* bdd;
      static MysqlMeteoManager *m_instance;  
      MysqlMeteoManager(); 
      ~MysqlMeteoManager();

   public:
   
       MysqlMeteoManager * getInstance();
       bool connect();
       bool InsertDonnéeCapteur();  

}