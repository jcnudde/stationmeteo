
/*
 * Pluie
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author BASILE Adrien)
 * @version 0.0
 *
 *
 **/

#ifndef PLUIE_H0
#define PLUIE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h"

using namespace std;

class Pluie : public Capteur
{

    public:
        virtual double readValue();

};

#endif // CAPTEUR_H
