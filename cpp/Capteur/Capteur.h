 
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

#ifndef CAPTEUR_H0
#define CAPTEUR_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../CarteES/CarteE_S.h"

using namespace std;

class Capteur
{
    private:
        int canal;
        double PhysicalValue;
        CarteE_S *carte;  
    public:
        //methode abstraite pour lire une valeur et la retourne 
        virtual double readValue()=0;
        //recupere 
        double getLastValue();   
};

#endif // CAPTEUR_H