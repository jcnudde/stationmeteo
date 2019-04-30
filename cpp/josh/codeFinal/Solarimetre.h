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

//---------------------------------------------------------------------------

#ifndef SolarimetreH
#define SolarimetreH
//---------------------------------------------------------------------------
#endif
#ifndef SOLARIMETRE_H
#define SOLARIMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"

using namespace std;

class Solarimetre : public Capteur
{

    public:
       	Solarimetre(int channel);
        double readValue();
		string getUnit();
};

#endif // CAPTEUR_H