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
	this->PhysicalValue=1000;
    return 1000;
}
string Solarimetre::getUnit()
{
    return "Lux";
}
