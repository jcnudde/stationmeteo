//---------------------------------------------------------------------------

#pragma hdrstop

#include "CapteurPluie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CapteurPluie::CapteurPluie(int channel):Capteur(channel)
{

}

double CapteurPluie::readValue()
{
	this->PhysicalValue = this->carte->readTOR(this->channel);

	if (	this->PhysicalValue == 0) {
		this->PhysicalValue =1 ;
	}
	else
	{
        this->PhysicalValue =0;
    }

	return  this->PhysicalValue;
}

string CapteurPluie::getUnit()
{
    return "pluie";
}
