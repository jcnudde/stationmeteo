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
		m_instance->connect();

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

	requete+=this->convertVirguPoint((int)donneeMeteo.vitesseVent*3.6);
	requete+=",'";
	requete+=String(convertDegrPointCard((int)donneeMeteo.direction).c_str());
	requete+="',";
	requete+=this->convertVirguPoint(donneeMeteo.pressionAtmospherique);
	requete+=",";
	requete+=this->convertVirguPoint(donneeMeteo.temperature);
	requete+=",";
	requete+= String((int)donneeMeteo.hummiditeRelative);
	requete+=",";
	requete+=String((int)donneeMeteo.luminosite);
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
		{
			switch(j)
			{
				case 0:
					donnerCapteur->vitesseVent= atof(resultRequete[i][j].c_str());
				break;
				case 1:
					donnerCapteur->direction= atof(resultRequete[i][j].c_str());
				break;
				case 2:
					donnerCapteur->pressionAtmospherique= atof(resultRequete[i][j].c_str());
				break;
				case 3:
					donnerCapteur->temperature= atof(resultRequete[i][j].c_str());
				break;
				case 4:
					donnerCapteur->hummiditeRelative= atof(resultRequete[i][j].c_str());
				break;
				case 5:
					donnerCapteur->luminosite= atof(resultRequete[i][j].c_str());
				break;
				case 6:
					donnerCapteur->pluie= atoi(resultRequete[i][j].c_str()) == 1;
				break;
				case 7:
					donnerCapteur->jour= atoi(resultRequete[i][j].c_str()) == 1;
				break;
				case 8:
					donnerCapteur->surfaceDePluie= atoi(resultRequete[i][j].c_str()) == 1;
                break;
			}
		}
		vectorDonnerCapteur.push_back(*donnerCapteur);
		delete donnerCapteur;
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
}
	//on convertie en char
	char *vale = StringUtils::magicConvert(val);
	//on recupere l'emplacement de la virgule
	char *valeCouper = strchr(vale,',');
	if(valeCouper != NULL)
	{
		int empl = valeCouper-vale;
		//on change la , en . a l'emplacement
		vale[empl]='.';

		val=vale;
	}

    return val;
}