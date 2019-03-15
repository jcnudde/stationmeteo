/*
 * Solarimetre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author LONGUET Louis)
 * @version 0.1
 *
 *
 **/

#ifndef SOLARIMETRE_H0
#define SOLARIMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h"

using namespace std;

class Solarimetre : public Capteur
{

    public:
        virtual double readValue();

};

#endif // CAPTEUR_H
