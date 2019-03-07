/**
 * RecupDonner
 * 
 * Cette classe permet de recuperer les donner des capteur,les gardes
 * en mémoire, les insert dans la base de donnée
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef RECUPDONNER_H0
#define RECUPDONNER_H

#include <stdlib.h>
#include <stdio.h>

using namespace std;

class RecupDonner
{
    private:
        static SqlMeteoManager* sqlMeteo; 

    public:
        RecupDonner();
        virtual ~RecupDonner();
    

   
};

#endif // RECUPDONNER_H
