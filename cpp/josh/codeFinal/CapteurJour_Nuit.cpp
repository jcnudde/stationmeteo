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
    this->PhysicalValue=1;
        return 1 ;
}

string CapteurJour_Nuit::getUnit()
{
    return "";
}

