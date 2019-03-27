/*
 * Barometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 *
 *
 **/
//---------------------------------------------------------------------------

#ifndef BarometreH
#define BarometreH


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"

using namespace std;

class Barometre : public Capteur
{

    public:
        Barometre(double channel);
		double readValue();
		string getUnit();

};
//---------------------------------------------------------------------------
#endif