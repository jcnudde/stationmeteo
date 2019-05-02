//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pluiviometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pluiviometre::Pluiviometre(int channel):Capteur(channel)
{

}

double Pluiviometre::readValue()
{
	this->PhysicalValue = this->carte->readTOR(this->channel);

	return  this->PhysicalValue;
}

string Pluiviometre::getUnit()
{
    return "mm²";
}