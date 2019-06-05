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
	this->PhysicalValue=(8.3*this->PhysicalValue-10)*3.6;

    if(PhysicalValue < 0)
	{
		this->PhysicalValue=0;
    }

	return this->PhysicalValue;
}
string Anemometre::getUnit()
{
    return "m/s";
}

