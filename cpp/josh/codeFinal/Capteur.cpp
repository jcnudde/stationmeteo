//---------------------------------------------------------------------------

#pragma hdrstop

#include "Capteur.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Capteur::Capteur(int channel)
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

