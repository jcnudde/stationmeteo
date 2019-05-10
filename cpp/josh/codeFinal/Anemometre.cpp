//---------------------------------------------------------------------------

#pragma hdrstop

#include "Anemometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Anemometre::Anemometre(int channel):Capteur(channel)
{

}

double Anemometre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//on enleve -1 pour tomber à 0
//	this->PhysicalValue-=1.17;
	//premier calcul aproximatif
//	this->PhysicalValue*=12;
    this->PhysicalValue=58.139*this->PhysicalValue-68.3;
	return this->PhysicalValue;
}
string Anemometre::getUnit()
{
    return "km/s";
}

