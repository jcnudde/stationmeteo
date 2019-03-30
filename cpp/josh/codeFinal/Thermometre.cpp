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
    return this->PhysicalValue;
}
string Thermometre::getUnit()
{
    return "�c";
}