//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pluiviometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pluiviometre::Pluiviometre(double channel):Capteur(channel)
{

}

double Pluiviometre::readValue()
{
	this->carte->readTOR(this->channel);
	return 1 ;
}

string Pluiviometre::getUnit()
{
    return "mm";
}