//---------------------------------------------------------------------------

#pragma hdrstop

#include "Carte_9111.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

Carte_9111::Carte_9111(I16 num_carte)
{
	this->card = Register_Card(PCI_9111DG, 0);
}
Carte_9111::~Carte_9111()
{
	Release_Card(card);
}
double Carte_9111::readVoltage(double channel)
{
	F64 volt_temp=0;

	AI_VReadChannel(card,channel, AD_B_5_V,&volt_temp);

	return  ((float)volt_temp);
}
int Carte_9111::readAnalog(double channel)
{
	U16  value = 0;
	AI_ReadChannel(this->card,channel,AD_B_10_V,&value);

	return ((int)value);
}
bool Carte_9111::readTOR(double channel)
{
    return 1;
}
void Carte_9111::writeAnalog(double channel)
{
//	AO_VWriteChannel(this->card, channel, voltage);
}




