
 /*
 * Capteur
 *
 * Classe abstraite permet de recuperer les donn�es des capteurs
 *
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 *
 *
 **/
//---------------------------------------------------------------------------

#ifndef CapteurH
#define CapteurH

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CarteE_S.h"
#include "Carte_9111.h"
#include <string>

using namespace std;

class Capteur
{
    protected:
        int channel;
        double PhysicalValue;
        CarteE_S *carte;
    public:
        Capteur(int channel);
        ~Capteur();
		//methode abstraite pour lire une valeur et la retourne
		virtual double readValue()=0;
		//methode abstraite pour retourner l'unit�
		virtual string getUnit()=0;
        //recupere la dernier valeur
        double getLastValue();


};
//---------------------------------------------------------------------------
#endif
