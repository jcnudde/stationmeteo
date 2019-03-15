 
 /*
 * Capteur
 * 
 * Classe abstraite permet de recuperer les données des capteurs
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../CarteES/CarteE_S.h"
#include "../CarteES/Carte_9111/Carte_9111.h"

using namespace std;

class Capteur
{
    protected:
        double channel;
        double PhysicalValue;
        CarteE_S *carte;  
    public:
        Capteur(double channel);
        ~Capteur();
        //methode abstraite pour lire une valeur et la retourne 
        virtual double readValue()=0;
        //recupere la dernier valeur
        double getLastValue(); 

        virtual char * getUnit()=0; 
};

#endif // CAPTEUR_H