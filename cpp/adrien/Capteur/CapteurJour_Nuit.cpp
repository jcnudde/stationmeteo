#include "CapteurJour_Nuit.h"

CapteurJour_Nuit::CapteurJour_Nuit(double channel):Capteur(channel)
{

}

double CapteurJour_Nuit::readValue()
{
    this->PhysicalValue=1;
        return 1 ;
}

