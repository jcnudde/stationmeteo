#include "RecupDonnerMeteo.h"

RecupDonnerMeteo::RecupDonnerMeteo()
{
    capteur.anemometre = new Anemometre(0);
    capteur.girouette = new Girouette(1);
    capteur.barometre = new Barometre(2);
    capteur.thermometre = new Thermometre(); //  manque le constructeur
    capteur.hygrometre = new Hygrometre(); //  manque le constructeur
    capteur.solarimetre = new Solarimetre(); //  manque le constructeur
    capteur.capteur_JourNuit = new CapteurJour_Nuit(8);
    capteur.capteurPluie = new CapteurPluie(7);
    capteur.pluviometre = new Pluiviometre(9); 

    Thread=CreateThread(
	NULL,
	0,
	MonThread,
	this,
	0,
	&dwThreadIdArray); 
}
RecupDonnerMeteo::~RecupDonnerMeteo()
{
    //dtor
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

        //attentte classe sqlMeteoManager pour insert les donnée meteo   
    }

}
tabDonnerCapteur RecupDonnerMeteo::getDonner()
{
    tabDonnerCapteur donneeMeteo;

    donneeMeteo.vitesseVent=capteur.anemometre->readValue();
    donneeMeteo.direction = capteur.girouette->readValue();
    donneeMeteo.pressionAtmospherique=capteur.barometre->readValue();
    donneeMeteo.direction=capteur.girouette->readValue();
    donneeMeteo.hummiditeRelative=capteur.hygrometre->readValue();
    donneeMeteo.luminosite=capteur.solarimetre->readValue();
    donneeMeteo.jour=capteur.capteur_JourNuit->readValue();
    donneeMeteo.pluie=capteur.capteurPluie->readValue();
    donneeMeteo.surfaceDePluie=capteur.pluviometre->readValue();

    return donneeMeteo;
}
