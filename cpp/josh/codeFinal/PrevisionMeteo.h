//---------------------------------------------------------------------------

#ifndef PrevisionMeteoH
#define PrevisionMeteoH
#include "RecupDonnerMeteo.h"

class PrevisionMeteo
{
    private:
        MysqlMeteoManager* sqlMeteo;
		RecupDonnerMeteo * recDonneeMeteo;
	public:
		PrevisionMeteo();
		String previsionMeteo();
};

//---------------------------------------------------------------------------
#endif
