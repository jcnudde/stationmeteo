//---------------------------------------------------------------------------

#ifndef MysqlManagerH
#define MysqlManagerH
#include "MysqlMeteoManager.h"
#include "../classeBDD/Bdd.h"
#include "../classeMysql/Mysql.h"

//---------------------------------------------------------------------------
#endif


class MysqlMeteoManager {
   private:
     
      static BDD* bdd;
      static MysqlMeteoManager *m_instance;  
      MysqlMeteoManager(); 
      ~MysqlMeteoManager();

   public:
   
       static MysqlMeteoManager * getInstance();
    //    MysqlMeteoManager * operator=(MysqlMeteoManager* o1);
    //    bool connect();
    //    bool InsertDonnéeCapteur();  
}