/*
 * Barometre
 * 
 * Classe qui herite de la class capteur
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 0.0
 * 
 * 
 **/

#ifndef GIROUETTE_H
#define BAROMETRE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../Capteur.h" 

using namespace std;

class Girouette : public Capteur
{
    
    public: 
        virtual double readValue();
           
};

#endif // BAROMETRE_H