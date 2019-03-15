#include "Girouette.h"

Girouette::Girouette(double channel):Capteur(channel)
{

}

double Girouette::readValue()
{
    this->PhysicalValue=1;
    return 360;    
}