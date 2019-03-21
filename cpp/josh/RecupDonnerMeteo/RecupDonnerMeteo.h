/**
 * Fichier : RecupDonner.H
 * 
 * Cette classe permet de utiliser les donner des capteur,les gardes
 * en mémoire, les insert dans la base de donnée. Elle appuyer sur le 
 * principe du singleton
 * 
 * Copyright 7 mars 2019 (@author CNUDDE Joshua)
 * @version 1.0
 * 
 * 
 **/

#ifndef RECUPDONNERMETEO_H
#define RECUPDONNERMETEO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "../Capteur/Anemometre.h"
#include "../Capteur/Girouette.h"
#include "../Capteur/Barometre.h"
#include "../../adrien/Capteur/CapteurJour_Nuit.h"
#include "../../adrien/Capteur/CapteurPluie.h"
#include "../../adrien/Capteur/Pluiviometre.h"
#include "../../louis/Capteur/Hygrometre.h"
#include "../../louis/Capteur/Solarimetre.h"
#include "../../louis/Capteur/Thermometre.h"


using namespace std;

typedef struct 
{
    Capteur *anemometre;
    Capteur *girouette;
    Capteur *barometre;
    Capteur *thermometre;
    Capteur *hygrometre;
    Capteur *solarimetre;
    Capteur *capteur_JourNuit;
    Capteur *capteurPluie;
    Capteur *pluviometre;
} tabCapteur;
typedef struct 
{
    double vitesseVent;
    double temperature;
    double pressionAtmospherique;
    double direction;
    double hummiditeRelative;
    double luminosite;
    bool jour;      //0 pour nuit et 1 pour jour
    bool pluie; //0 pour pas de pluie et 1 pour pluie
    double surfaceDePluie;
}tabDonnerCapteur;
class RecupDonnerMeteo
{
    private:
        SqlMeteoManager* sqlMeteo;
        tabCapteur capteur;
        HANDLE Thread;
        DWORD dwThreadIdArray;
        //constructeur
        RecupDonnerMeteo();
        //destructeur
        ~RecupDonnerMeteo();

        static DWORD WINAPI ThreadRecupDonnee(LPVOID params);

    public:
        //renvoie les données météo aquise à l'instant t sous forme d'une structure
        tabDonnerCapteur getDonner();
        //renvoie un seul et même pointeur
        RecupDonner* getInstance();

};

#endif // RECUPDONNERMETEO_H
