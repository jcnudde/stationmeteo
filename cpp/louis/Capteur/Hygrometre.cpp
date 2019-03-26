#include "Hygrometre.h"
Hygrometre::Hygrometre(double channel):Capteur(channel)
{

}
double Hygrometre::readValue()
{
    this->PhysicalValue=20;
    return 20;
}

