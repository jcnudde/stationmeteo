/**
 * RecupDonner
 * 
 * Cette classe permet de utiliser les donner des capteur,les gardes
 * en mémoire, les insert dans la base de donnée
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef RECUPDONNER_H
#define RECUPDONNER_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <map>
#include "../Capteur/Capteur.h"

using namespace std;

class RecupDonner
{
    private:
        static SqlMeteoManager* sqlMeteo;
        map<std::string,Capteur*> Capteur;


    public:
        RecupDonner();
        virtual ~RecupDonner();
    

   
};

#endif // RECUPDONNER_H
