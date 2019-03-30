//---------------------------------------------------------------------------

#pragma hdrstop

#include "CapteurPluie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CapteurPluie::CapteurPluie(double channel):Capteur(channel)
{

}

double CapteurPluie::readValue()
{
	this->PhysicalValue=1;
	return this->PhysicalValue;
}

string CapteurPluie::getUnit()
{
    return "pluie";
}
