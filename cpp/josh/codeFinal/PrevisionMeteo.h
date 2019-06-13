//---------------------------------------------------------------------------

#ifndef PrevisionMeteoH
#define PrevisionMeteoH
#include "RecupDonnerMeteo.h"

class PrevisionMeteo
{
    private:
        //MysqlMeteoManager* sqlMeteo;
		RecupDonnerMeteo * recDonneeMeteo;
		//prend la moyenne de la direction et renvoie une direction N,NNE ...
        String moyenneDirectionToDirection(double moyenneDirection);
	public:
		PrevisionMeteo();
		String previsionMeteo();
};

//---------------------------------------------------------------------------
#endif
