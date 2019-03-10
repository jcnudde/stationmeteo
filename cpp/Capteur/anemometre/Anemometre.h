 
/*
 * Anemometre
 * 
 * Classe qui herite de la class capteur
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef ANEMOMETRE_H0
#define ANEMOMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h" 

using namespace std;

class Anemometre : public Capteur
{
    
    public: 
        virtual double readValue();
           
};

#endif // CAPTEUR_H