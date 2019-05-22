//---------------------------------------------------------------------------

#pragma hdrstop

#include "Solarimetre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Solarimetre::Solarimetre(double channel):Capteur(channel)
{

}

double Solarimetre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//Muliplie la valeur par 1000
	this->PhysicalValue*=10000;

	return this->PhysicalValue;
}

string Solarimetre::getUnit()
{
    return "Lux";
}
