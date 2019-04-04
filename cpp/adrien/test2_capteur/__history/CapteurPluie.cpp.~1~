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
    this->carte->readTOR(this->channel);
    return 1 ;
}

string CapteurPluie::getUnit()
{
    return "pluie";
}
