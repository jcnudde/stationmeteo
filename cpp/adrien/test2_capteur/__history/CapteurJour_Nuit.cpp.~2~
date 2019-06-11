//---------------------------------------------------------------------------

#pragma hdrstop

#include "CapteurJour_Nuit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CapteurJour_Nuit::CapteurJour_Nuit(double channel):Capteur(channel)
{

}

double CapteurJour_Nuit::readValue()
{
	this->PhysicalValue=this->carte->readTOR(this->channel);
	return this->PhysicalValue;
}

string CapteurJour_Nuit::getUnit()
{
	return "";
}

