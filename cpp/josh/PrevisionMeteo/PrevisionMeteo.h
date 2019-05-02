#ifndef PREVISIONMETEO_H
#define PREVISIONMETEO_H

#include "RecupDonnerMeteo.h"


class PrevisonMeteo
{
    private:
        SqlMeteoManager* sqlMeteo;  
        RecupDonnerMeteo * donneeMeteo         
    public:
        string previsionMeteo();
};


#endif // CAPTEUR_H