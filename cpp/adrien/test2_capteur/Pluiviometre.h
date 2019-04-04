﻿//---------------------------------------------------------------------------
/*
 * Pluiviometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author BASILE Adrien)
 * @version 0.0
 *
 *
 **/

#ifndef PluiviometreH
#define PluiviometreH
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"


using namespace std;

class Pluiviometre : public Capteur
{

    public:
        Pluiviometre(double channel);
		virtual double readValue();
		string getUnit();

};
#endif
