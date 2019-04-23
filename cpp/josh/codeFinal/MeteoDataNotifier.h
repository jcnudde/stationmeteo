//---------------------------------------------------------------------------

#ifndef MeteoDataNotifierH
#define MeteoDataNotifierH

#include "DataNotifier.h"
#include "MeteoStructs.h"

class MeteoDataNotifier : public DataNotifier<tabDonnerCapteur>
{
	public:
		virtual void notifyData(tabDonnerCapteur data);
};

//---------------------------------------------------------------------------
#endif
