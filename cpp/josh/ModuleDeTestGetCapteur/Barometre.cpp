//---------------------------------------------------------------------------

#pragma hdrstop

#include "Barometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Barometre::Barometre(double channel):Capteur(channel)
{

}
double Barometre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	this->PhysicalValue=this->PhysicalValue*43+815.48;
	return this->PhysicalValue;
}
string Barometre::getUnit()
{
    return "hPa";
}
