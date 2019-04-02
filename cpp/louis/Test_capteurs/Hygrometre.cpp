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
	this->PhysicalValue=this->carte->readVoltage(this->channel);
	//on multiplie par 10 la valeur
	this->PhysicalValue*=10;

	return this->physicalValue;
}

string Hygrometre::getUnit()
{
    return "%";
}

