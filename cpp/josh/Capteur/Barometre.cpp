#include "Barometre.h"

Barometre::Barometre(double channel):Capteur(channel)
{
    
}
double Barometre::readValue()
{
    this->PhysicalValue=2000;    
    return 2000;
}