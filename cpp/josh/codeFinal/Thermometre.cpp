//---------------------------------------------------------------------------

#pragma hdrstop

#include "Thermometre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Thermometre::Thermometre(int channel):Capteur(channel)
{

}
double Thermometre::readValue()
{
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//on muliplie la valeur par 7
	this->PhysicalValue*=7;
	//on retire 35 au resulat precedent
	this->PhysicalValue-=35;

    return this->PhysicalValue;
}

string Thermometre::getUnit()
{
    return "Oc";
}