//---------------------------------------------------------------------------

#ifndef HMIDataNotifierH
#define HMIDataNotifierH

#include "MeteoDataNotifier.h"
#include "ihm.h"

class HMIDataNotifier : public MeteoDataNotifier
{
	//TForm1 * hmi;

	public:
		//HMIDataNotifier(TForm1 * hmi);
		virtual void notifyData(tabDonnerCapteur data);
};


//---------------------------------------------------------------------------
#endif
