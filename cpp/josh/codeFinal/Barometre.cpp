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
	this->carte->readVoltage(this->channel);
    this->PhysicalValue=2000;
    return this->PhysicalValue;
}
string Barometre::getUnit()
{
    return "hPa";
}
