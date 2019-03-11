/*
 * thermometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author LONGUET Louis)
 * @version 0.1
 *
 *
 **/

#ifndef THERMOMETRE_H0
#define THERMOMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h"

using namespace std;

class Thermometre : public Capteur
{

    public:
        virtual double readValue();

};

#endif // CAPTEUR_H
