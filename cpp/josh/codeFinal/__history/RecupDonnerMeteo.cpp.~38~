//---------------------------------------------------------------------------

#pragma hdrstop

#include "RecupDonnerMeteo.h"
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)
RecupDonnerMeteo* RecupDonnerMeteo::m_instance = NULL;

RecupDonnerMeteo::RecupDonnerMeteo()
{
    //on instancie chaque capteur
	this->capteur.anemometre = new Anemometre(0);
    this->capteur.girouette = new Girouette(1);
    this->capteur.barometre = new Barometre(2);
	this->capteur.thermometre = new Thermometre(3);
	this->capteur.hygrometre = new Hygrometre(4);
	this->capteur.solarimetre = new Solarimetre(6);
	this->capteur.capteur_JourNuit = new CapteurJour_Nuit(8);
	this->capteur.capteurPluie = new CapteurPluie(10);
    this->capteur.pluviometre = new Pluiviometre(4);

	//on demare la boucle infini du thread
	this->boucleThread = true;

	this->mutexNotifiers = CreateMutex(NULL, FALSE, NULL);

	//on instancie notre objet mysql
    this->mysql = MysqlMeteoManager::getInstance();

    //on crée notre thread et on lui envoie en paramettre notre objet this
	this->Thread=CreateThread(
	NULL,
	0,
	ThreadRecupDonnee,
	this,
	0,
	&dwThreadIdArray);

    this->boucleThread=true;
}
RecupDonnerMeteo::~RecupDonnerMeteo()
{
    //on close la boucle du thread
	this->boucleThread = false;
    CloseHandle(mutexNotifiers);
}
RecupDonnerMeteo* RecupDonnerMeteo::getInstance()
{
	if(m_instance==NULL)
	{
		m_instance = new RecupDonnerMeteo();
	}
	return m_instance;

}
DWORD WINAPI RecupDonnerMeteo::ThreadRecupDonnee(LPVOID params)
{
	RecupDonnerMeteo * recupDonnerMeteo = (RecupDonnerMeteo*) params;

	tabDonnerCapteur donneeMeteoThread;

    while(recupDonnerMeteo->boucleThread)
	{
        donneeMeteoThread.vitesseVent = recupDonnerMeteo->capteur.anemometre->readValue();
        donneeMeteoThread.direction = recupDonnerMeteo->capteur.girouette->readValue();
        donneeMeteoThread.pressionAtmospherique = recupDonnerMeteo->capteur.barometre->readValue();
		donneeMeteoThread.temperature = recupDonnerMeteo->capteur.thermometre->readValue();
		donneeMeteoThread.hummiditeRelative = recupDonnerMeteo->capteur.hygrometre->readValue();
        donneeMeteoThread.luminosite = recupDonnerMeteo->capteur.solarimetre->readValue();
        donneeMeteoThread.jour = recupDonnerMeteo->capteur.capteur_JourNuit->readValue();
        donneeMeteoThread.pluie = recupDonnerMeteo->capteur.capteurPluie->readValue();
		donneeMeteoThread.surfaceDePluie = recupDonnerMeteo->capteur.pluviometre->readValue();

        recupDonnerMeteo->notifyData(donneeMeteoThread);

		//attente classe sqlMeteoManager pour insert les donnée meteo
		recupDonnerMeteo->mysql->InsertDonnerCapteur(donneeMeteoThread);

		Sleep(60000);
	}
	return 0;
}
tabDonnerCapteur RecupDonnerMeteo::getDonner()
{
    tabDonnerCapteur donneeMeteo;

	donneeMeteo.vitesseVent = capteur.anemometre->readValue();
    donneeMeteo.direction = capteur.girouette->readValue();
	donneeMeteo.pressionAtmospherique = capteur.barometre->readValue();
	donneeMeteo.direction = capteur.girouette->readValue();
	donneeMeteo.temperature = capteur.thermometre->readValue();
	donneeMeteo.hummiditeRelative = capteur.hygrometre->readValue();
	donneeMeteo.luminosite = capteur.solarimetre->readValue();
	donneeMeteo.jour = capteur.capteur_JourNuit->readValue();
	donneeMeteo.pluie = capteur.capteurPluie->readValue();
    donneeMeteo.surfaceDePluie = capteur.pluviometre->readValue();

    return donneeMeteo;
}

void RecupDonnerMeteo::lockNotifier()
{
    WaitForSingleObject(mutexNotifiers, INFINITE);
}

void RecupDonnerMeteo::unlockNotifier()
{
	ReleaseMutex(mutexNotifiers);
}

void RecupDonnerMeteo::notifyData(tabDonnerCapteur data)
{
	lockNotifier();

	for(int i = 0; i < notifiers.size(); i++)
	{
        notifiers[i]->notifyData(data);
	}

	unlockNotifier();
}

void RecupDonnerMeteo::addNotifier(MeteoDataNotifier * notifier)
{
    lockNotifier();

	notifiers.push_back(notifier);

	unlockNotifier();
}

bool RecupDonnerMeteo::removeNotifier(MeteoDataNotifier * notifier)
{
	bool res = false;
	lockNotifier();

	std::vector<MeteoDataNotifier *>::iterator it = std::find(notifiers.begin(), notifiers.end(), notifier);
	if(it != notifiers.end())
	{
		notifiers.erase(it);
		res = true;
    }

	unlockNotifier();

    return res;
}
