//---------------------------------------------------------------------------

#pragma hdrstop

#include "Hygometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Hygrometre::Hygrometre(double channel):Capteur(channel)
{

}
double Hygrometre::readValue()
{
    this->PhysicalValue=20;
    return 20;
}

double Barometre::readValue()
{
    this->carte->readVoltage(this->channel);
    return 100;
}
string Barometre::getUnit()
{
    return "%";
}
