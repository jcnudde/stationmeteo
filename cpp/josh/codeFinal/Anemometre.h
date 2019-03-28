//---------------------------------------------------------------------------

#ifndef AnemometreH
#define AnemometreH

#include "Capteur.h"
class Anemometre : public Capteur
{

    public:
        Anemometre(double channel);
		double readValue();
		string getUnit();

};

//---------------------------------------------------------------------------
#endif

