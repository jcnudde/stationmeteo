//---------------------------------------------------------------------------

#ifndef MysqlManagerH
#define MysqlManagerH
#include "MysqlMeteoManager.h"
#include "../classeBDD/Bdd.h"
//---------------------------------------------------------------------------
#endif


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