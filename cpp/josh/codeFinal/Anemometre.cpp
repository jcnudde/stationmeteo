//---------------------------------------------------------------------------

#pragma hdrstop

#include "Anemometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Anemometre::Anemometre(double channel):Capteur(channel)
{

}

double Anemometre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//on enleve -1 pour tomber � 0
	this->PhysicalValue-=1.17;
	//premier calcul aproximatif
	this->PhysicalValue*=26.6;

	return this->PhysicalValue;
}
string Anemometre::getUnit()
{
    return "m/s";
}
