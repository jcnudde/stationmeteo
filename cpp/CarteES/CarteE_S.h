 
/*
 * CarteE_S
 * 
 * Classe abstraite permettant de declarer les methode à utiliser 
 * pour une carte entrée sortie
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef CARTE_ES_H0
#define CARTE_ES_H

#include <stdlib.h>
#include <stdio.h>


using namespace std;

class CarteE_S
{
    private:
       
    public:
       virtual int  readAnalog(double channel)=0;
       virtual bool readTOR(double channel)=0;
       virtual void writeAnalog(double channel)=0;  
};

#endif // CAPTEUR_H