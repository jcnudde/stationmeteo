//---------------------------------------------------------------------------

#pragma hdrstop

#include "Thermometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Thermometre::Thermometre(double channel):Capteur(channel)
{

}
double Thermometre::readValue()
{
    this->PhysicalValue=20;
    return 20;
}
string Thermometre::getUnit()
{
    return "°c";
}