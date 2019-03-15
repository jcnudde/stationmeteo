//---------------------------------------------------------------------------

#include "Carte_9111.h"

//---------------------------------------------------------------------------


Carte_9111::Carte_9111(I16 num_carte)
{
	this->card = Register_Card(PCI_9111DG, num_carte);
}
Carte_9111::~Carte_9111()
{
	Release_Card(this->card);
}
int  Carte_9111::readAnalog(double channel)
{
    return 10;
}
bool Carte_9111::readTOR(double channel)
{
    return true;
}
void Carte_9111::writeAnalog(double channel)
{
        
}