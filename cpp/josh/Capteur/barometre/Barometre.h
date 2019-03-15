/*
 * Barometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author LONGUET Louis)
 * @version 0.1
 *
 *
 **/

#ifndef BAROMETRE_H0
#define BAROMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h"

using namespace std;

class Barometre : public Capteur
{

    public:
        virtual double readValue();

};

#endif // CAPTEUR_H
