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
}// delete bdd et instancevoid MysqlMeteoManager::stopInstance(){
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
}// insertion en bddbool MysqlMeteoManager::InsertDonnerCapteur(tabDonnerCapteur donneeMeteo){     string direction;	 switch ((int)donneeMeteo.direction)      {
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
	  }	 // requete pour inserer donn�es m�t�o	String requete = "INSERT INTO `meteo`.`donnees_meteo` (`vitesseVent`, `direction`, `pressionAtmospherique`, `temperature`, `humiditeRelative`, `luminosite`, `pluie`, `jour`, `surfaceDePluie`, `date`) VALUES (";

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

}// s�l�ctionner les derni�res donn�es en BDDvector<tabDonnerCapteur> MysqlMeteoManager::SelectLastDonnee(){	vector< vector<string> > resultRequete;	vector<tabDonnerCapteur> vectorDonnerCapteur;	string requete = "SELECT`vitesseVent`, `direction`, `pressionAtmospherique`, `temperature`, `humiditeRelative`, `luminosite`, `pluie`, `jour`, `surfaceDePluie`, `date` FROM `donnees_meteo` WHERE 1 ";	resultRequete=bdd->select(requete);	for (int i = 0; i <resultRequete.size(); i++)	{		tabDonnerCapteur * donnerCapteur = new tabDonnerCapteur;		for (int j = 0; j < resultRequete[i].size(); i++)
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
	}}
