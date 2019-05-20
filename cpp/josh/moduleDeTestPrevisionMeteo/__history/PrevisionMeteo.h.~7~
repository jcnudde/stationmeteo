//---------------------------------------------------------------------------

#ifndef PrevisionMeteoH
#define PrevisionMeteoH
#include "MysqlMeteoManager.h"

class PrevisionMeteo
{
    private:
		MysqlMeteoManager* sqlMeteo;
		//prend la moyenne de la direction et renvoie une direction N,NNE ...
        String moyenneDirectionToDirection(double moyenneDirect);
	public:
		PrevisionMeteo();
		String previsionMeteo();
};

//---------------------------------------------------------------------------
#endif
