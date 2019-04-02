//---------------------------------------------------------------------------

#ifndef HygrometreH
#define HygrometreH
//---------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"

using namespace std;

class Hygrometre : public Capteur
{

	public:
		Hygrometre(double channel);
        double readValue();
		string getUnit();
};

#endif
