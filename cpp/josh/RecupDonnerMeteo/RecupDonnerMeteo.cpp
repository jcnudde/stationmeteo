#include "RecupDonnerMeteo.h"

RecupDonner::RecupDonner()
{
    capteur.anemometre = new Anemometre(0);
    capteur.thermometre = new Girouette(1);
    capteur.barometre = new Barometre(2);
    capteur.thermometre = NULL;
    capteur.hygrometre = NULL;
    capteur.luxmetre = NULL;
    capteur.capteur_JourNuit = new CapteurJour_Nuit(8);
    capteur.capteurPluie = new CapteurPluie(7);
    capteur.pluviometre = new Pluiviometre(9);       
}

RecupDonner::~RecupDonner()
{
    //dtor
}
tabDonnerCapteur RecupDonner::getDonner()
{
    tabDonnerCapteur donneeMeteo;

    donneMeteo.vitesseVent=capteur.anemometre->readValue();

    
    
}
