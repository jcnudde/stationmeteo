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
    this->PhysicalValue=20;
    return 20;
}
double Solarimetre::readValue()
{
    this->carte->readVoltage(this->channel);
    return 1000;
}
string Solarimetre::getUnit()
{
    return "Lux";
}
