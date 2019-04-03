//---------------------------------------------------------------------------

#pragma hdrstop

#include "MeteoDataNotifier.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void MeteoDataNotifier::notifyData(tabDonnerCapteur data)
{
    add(data);
}
