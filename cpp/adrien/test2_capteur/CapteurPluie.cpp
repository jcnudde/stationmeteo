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

   	this->PhysicalValue=this->carte->readTOR(this->channel);
	return this->PhysicalValue;
}

string CapteurPluie::getUnit()
{
    return "pluie";
}
