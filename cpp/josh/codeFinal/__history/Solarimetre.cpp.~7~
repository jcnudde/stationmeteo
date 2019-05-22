//---------------------------------------------------------------------------

#pragma hdrstop

#include "Solarimetre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Solarimetre::Solarimetre(int channel):Capteur(channel)
{

}

double Solarimetre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//Muliplie la valeur par 10000
	this->PhysicalValue*=10000;
    this->PhysicalValue*=0.001;

	return this->PhysicalValue;
}

string Solarimetre::getUnit()
{
    return "Lux";
}
