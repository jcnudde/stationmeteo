#include "Capteur.h"

Capteur::Capteur(double channel)
{
   this->carte=new Carte_9111(1); 
   this->channel= channel;

}
Capteur::~Capteur()
{
    delete this->carte;
}
double Capteur::getLastValue()
{
    return this->PhysicalValue;
}