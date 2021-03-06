//---------------------------------------------------------------------------

#pragma hdrstop

#include "RecupDonnerMeteo.h"
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
    this->capteur.capteurPluie = new CapteurPluie(7);
    this->capteur.pluviometre = new Pluiviometre(9);

	//on demare la boucle infini du thread
    this->boucleThread = true;

    //on cr�e notre thread et on lui envoie en paramettre notre objet this
	this->Thread=CreateThread(
	NULL,
	0,
	ThreadRecupDonnee,
	this,
	0,
	&dwThreadIdArray);
}
RecupDonnerMeteo::~RecupDonnerMeteo()
{
    //on close la boucle du thread
	this->boucleThread = false;
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

    while(true)
    {
        tabDonnerCapteur donneeMeteoThread;

        donneeMeteoThread.vitesseVent = recupDonnerMeteo->capteur.anemometre->readValue();
        donneeMeteoThread.direction = recupDonnerMeteo->capteur.girouette->readValue();
        donneeMeteoThread.pressionAtmospherique = recupDonnerMeteo->capteur.barometre->readValue();
        donneeMeteoThread.direction = recupDonnerMeteo->capteur.girouette->readValue();
        donneeMeteoThread.hummiditeRelative = recupDonnerMeteo->capteur.hygrometre->readValue();
        donneeMeteoThread.luminosite = recupDonnerMeteo->capteur.solarimetre->readValue();
        donneeMeteoThread.jour = recupDonnerMeteo->capteur.capteur_JourNuit->readValue();
        donneeMeteoThread.pluie = recupDonnerMeteo->capteur.capteurPluie->readValue();
        donneeMeteoThread.surfaceDePluie = recupDonnerMeteo->capteur.pluviometre->readValue();

        //attente classe sqlMeteoManager pour insert les donn�e meteo
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