//---------------------------------------------------------------------------

#pragma hdrstop

#include "Capteur.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Capteur::Capteur(double channel)
{
   this->carte=new Carte_9111(channel);
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

