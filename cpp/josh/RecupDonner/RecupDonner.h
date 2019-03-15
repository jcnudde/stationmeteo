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

#ifndef RECUPDONNER_H
#define RECUPDONNER_H

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
    Capteur *solarimetre;
    Capteur *capteurPluie;
};

class RecupDonner
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
        
        tabCapteur getDonner();

    

   
};

#endif // RECUPDONNER_H
