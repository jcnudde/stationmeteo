//---------------------------------------------------------------------------

#pragma hdrstop

#include "MysqlMeteoManager.h"
#include <ustring.h>
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
}
	delete bdd;
	delete m_instance;
	m_instance = NULL;
	bdd = NULL;

}
	{
		return true;
	}
	else
	{
		return false;
    }
}
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
	  }
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
	requete+=donneeMeteo.vitesseVent;
	requete+=",";
	requete+=donneeMeteo.direction;
	requete+=",";
	requete+=donneeMeteo.pressionAtmospherique;
	requete+=",";
	requete+=donneeMeteo.temperature;
	requete+=",";
	requete+=donneeMeteo.hummiditeRelative;
	requete+=",";
	requete+=donneeMeteo.luminosite;
	requete+=",";
	requete+=donneeMeteo.jour;
	requete+=",";
	requete+=donneeMeteo.pluie;
    requete+=",";
	requete+=donneeMeteo.surfaceDePluie;
	requete+=",";
	requete+="NOW());";

	if(bdd->insert(requete))
	{
        return true;
	}
	else
	{
        return false;
    }

}
