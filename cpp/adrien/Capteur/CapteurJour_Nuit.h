/*
 * CapteurJour_Nuit
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author BASILE Adrien)
 * @version 0.0
 *
 *
 **/

#ifndef LUMIERE_H0
#define LUMIERE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h"

using namespace std;

class CapteurJour_Nuit : public Capteur
{

    public:
        CapteurJour_Nuit(double channel);
        virtual double readValue();

};

#endif // CAPTEUR_H