//---------------------------------------------------------------------------

#ifndef AnemometreH
#define AnemometreH

#include "Capteur.h"
class Anemometre : public Capteur
{

    public:
        Anemometre(int channel);
		double readValue();
		string getUnit();

};

//---------------------------------------------------------------------------
#endif

