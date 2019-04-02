//---------------------------------------------------------------------------

#pragma hdrstop

#include "Hygrometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Hygrometre::Hygrometre(double channel):Capteur(channel)
{

}
double Hygrometre::readValue()
{
    this->PhysicalValue=100;
    return 100;
}
string Hygrometre::getUnit()
{
    return "%";
}