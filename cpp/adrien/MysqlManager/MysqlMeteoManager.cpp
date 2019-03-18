#include "MysqlMeteoManager.h"
//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------
#pragma package(smart_init)

MysqlMeteoManager MysqlMeteoManager::m_instance = MysqlMeteoManager();

MysqlMeteoManager::MysqlMeteoManager()
{
   

}
MysqlMeteoManager::~MysqlMeteoManager()
{

}
MysqlMeteoManager * MysqlMeteoManager::getInstance()
{
    if(m_instance == NULL)
    {
        m_instance = new MysqlMeteoManager();
        bdd = new Mysql();
        bdd->connecte("192.168.65.66","root","root","meteo");
    }
    return m_instance;
}
