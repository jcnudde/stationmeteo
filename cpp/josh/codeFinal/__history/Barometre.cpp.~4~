//---------------------------------------------------------------------------

#pragma hdrstop

#include "Barometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Barometre::Barometre(int channel):Capteur(channel)
{

}
double Barometre::readValue()
{
	this->carte->readVoltage(this->channel);
    this->PhysicalValue=1050;
    return this->PhysicalValue;
}
string Barometre::getUnit()
{
    return "hPa";
}
