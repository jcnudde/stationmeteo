#include "Solarimetre.h"
Solarimetre::Solarimetre(double channel):Capteur(channel)
{

}
double Solarimetre::readValue()
{
    this->PhysicalValue=20;
    return 20;
}
