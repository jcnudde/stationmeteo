//---------------------------------------------------------------------------
#include <vcl.h>
#ifndef Carte_9111H
#define Carte_9111H
//---------------------------------------------------------------------------
#endif
#include "include/Dask.h"
#include <iostream>
#include "CarteE_S.h"

using namespace std;

class Carte_9111 : public CarteE_S
{
	I16 card;
	public:

	Carte_9111(I16 num_carte);
	~Carte_9111();

	int readAnalog(double channel);
	bool readTOR(double channel);
	void writeAnalog(double channel);
	double readVoltage(double channel);
};
