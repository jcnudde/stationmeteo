#include "Thermometre.h"
Thermometre::Thermometre(double channel):Capteur(channel)
{

}
double Thermometre::readValue()
{
    this->PhysicalValue=20;
    return 20;
}
