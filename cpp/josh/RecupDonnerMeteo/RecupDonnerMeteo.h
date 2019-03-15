/**
 * RecupDonner
 * 
 * Cette classe permet de utiliser les donner des capteur,les gardes
 * en mémoire, les insert dans la base de donnée
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef RECUPDONNERMETEO_H
#define RECUPDONNERMETEO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <map>
#include "../Capteur/Capteur.h"

using namespace std;

typedef struct tabCapteur
{
    Capteur *anemometre;
    Capteur *thermometre;
    Capteur *barometre;
    Capteur *girouette;
    Capteur *hygrometre;
    Capteur *luxmetre;
    Capteur *capteur_JourNuit;
    Capteur *capteurPluie;
    Capteur *pluviometre;
};
typedef struct tabDonnerCapteur
{
    double vitesseVent;
    double temperature;
    double pressionAtmospherique;
    double direction;
    double hummiditeRelative;
    double luminosite;
    bool jour;      //0 pour nuit et 1 pour jour
    bool pluie; //0 pour pas de pluie et 1 pour pluie
    double surfaceDePluie;
};
class RecupDonnerMeteo
{
    private:
        SqlMeteoManager* sqlMeteo;
        tabCapteur Capteur;
        static ThreadRecupDonnee(RecupDonner*);
        //constructeur
        RecupDonner();
        //destructeur
        ~RecupDonner();

    public:
        
        tabDonnerCapteur getDonner();
        RecupDonner* getInstance();

    

   
};

#endif // RECUPDONNER_H
