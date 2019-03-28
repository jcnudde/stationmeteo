//---------------------------------------------------------------------------

#pragma hdrstop

#include "MysqlMeteoManager.h"
#include <ustring.h>
#include "StringUtils.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

MysqlMeteoManager* MysqlMeteoManager::m_instance = NULL;
Bdd* MysqlMeteoManager::bdd =NULL;

// constructeur MysqlMeteoManagers
MysqlMeteoManager::MysqlMeteoManager()
{


}

// destruction constructeur MysqlMeteoManager
MysqlMeteoManager::~MysqlMeteoManager()
{
}
// instance de la class MysqlMeteoManager
MysqlMeteoManager * MysqlMeteoManager::getInstance()
{
    if(m_instance == NULL)
	{
		m_instance = new MysqlMeteoManager();
		bdd = new Mysql();
		if(m_instance->connect())
		{
            cout<<"nice"<<endl;
		}
		else
		{
			cout<<"null"<<endl;
        }

    }
    return m_instance;
}void MysqlMeteoManager::stopInstance(){
	delete bdd;
	delete m_instance;
	m_instance = NULL;
	bdd = NULL;

}//connexion a la BDDbool MysqlMeteoManager::connect(){	if(bdd->connecte("127.0.0.1","root","","meteo"))
	{
		return true;
	}
	else
	{
		return false;
    }
}bool MysqlMeteoManager::InsertDonnerCapteur(tabDonnerCapteur donneeMeteo){     string direction;	 switch ((int)donneeMeteo.direction)      {
		 case 360:
			direction ="N";
			break;
		 case 337:
			direction = "NNO";
			break;
		 case 315:
			direction = "NO";
			break;
		 case 292:
			direction = "ONO";
			break;
		 case 270:
			direction = "O";
			break;
		 case 247:
			direction = "OSO";
			break;
		 case 225:
			direction = "SO";
			break;
		 case 202:
			direction = "SSO";
			break;
		 case 180:
			direction = "S";
			break;
		 case 157:
			direction = "SSE";
			break;
		 case 135:
			direction = "SE";
			break;
		 case 112:
			direction = "ESE";
			break;
		 case 90:
			direction = "E";
			break;
		 case 67:
			direction = "ENE";
			break;
		 case 45:
			direction = "NE";
			break;
		 case 22:
			direction = "NNE";
			break;
	  }	String requete = "INSERT INTO `meteo`.`donnees_meteo` (`vitesseVent`, `direction`, `pressionAtmospherique`, `temperature`, `humiditeRelative`, `luminosite`, `pluie`, `jour`, `surfaceDePluie`, `date`) VALUES (";
//	 stringstream ss;
//	float f;
//	ss.string(120);
//	ss >> f;
	String test = FloatToStr(donneeMeteo.vitesseVent);
//	UnicodeString test ;
	wchar_t * tmp;
//	tmp = test.w_str();
//	int len = wcslen(tmp);
//	char * ret = new char[len+1];
//	wcstombs(ret, tmp, len);
//	requete+= ret;
	requete+=String(donneeMeteo.vitesseVent);
	requete+=",";
	requete+=String(donneeMeteo.direction);
	requete+=",";
	requete+=String(donneeMeteo.pressionAtmospherique);
	requete+=",";
	requete+=String(donneeMeteo.temperature);
	requete+=",";
	requete+= String(donneeMeteo.hummiditeRelative);
	requete+=",";
	requete+=String(donneeMeteo.luminosite);
	requete+=",";
	requete+= String(donneeMeteo.jour ? 1 : 0);
	requete+=",";
	requete+= String(donneeMeteo.pluie ? 1 : 0);
    requete+=",";
	requete+= String(donneeMeteo.surfaceDePluie);
	requete+=",";
	requete+="NOW());";

	char * req = StringUtils::magicConvert(requete.c_str());

	bool res = bdd->insert(req);
    delete req;

	return res;

}

