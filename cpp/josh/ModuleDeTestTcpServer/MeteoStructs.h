
#ifndef METEOSTRUCTS_H
#define METEOSTRUCTS_H

class Capteur;

//structure permettant de gerer tout les capteur
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

//structure permettant de gerer toute les données des capteur
typedef struct
{
    double vitesseVent;
    double temperature;
    double pressionAtmospherique;
    double direction;
    double hummiditeRelative;
    double luminosite;
	double jour;      //0 pour nuit et 1 pour jour
    double pluie; //0 pour pas de pluie et 1 pour pluie
    double surfaceDePluie;
}tabDonnerCapteur;

#endif