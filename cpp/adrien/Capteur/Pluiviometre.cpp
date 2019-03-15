#include "Pluiviometre.h"

Pluiviometre::Pluiviometre(double channel):Capteur(channel)
{

}

double Pluiviometre::readValue()
{
    return 1 ;
}
