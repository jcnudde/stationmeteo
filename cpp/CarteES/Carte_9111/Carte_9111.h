 
/*
 * Carte_9111
 *
 * Herite de la classe carteE_S
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef CARTE_9111_H0
#define CARTE_9111_H

#include <stdlib.h>
#include <stdio.h>
#include "../CarteE_S.h"
#include "include/Dask.h"


using namespace std;

class Carte_9111 : public CarteE_S 
{
    private:
        I16 card;   //variable permettant de concerver la connection avec la carte   
    public:
        Carte_9111(I16 num_carte); // Constructeur qui permet d'initialiser
							  //la connection
	    ~Carte_9111(); 			  //ferme la connection avec la connection 
       virtual int  readAnalog(double channel);
       virtual bool readTOR(double channel);
       virtual void writeAnalog(double channel);  
};

#endif // CAPTEUR_H