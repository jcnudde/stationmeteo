/*
 * Hygrometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author LONGUET Louis)
 * @version 0.1
 *
 *
 **/
//---------------------------------------------------------------------------

#ifndef HygrometreH
#define HygrometreH
//---------------------------------------------------------------------------
#endif
#ifndef HYGROMETRE_H
#define HYGROMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"

using namespace std;

class Hygrometre : public Capteur
{

    public:
       	Hygrometre(double channel);
        double readValue();
		string getUnit();
};

#endif // CAPTEUR_H
