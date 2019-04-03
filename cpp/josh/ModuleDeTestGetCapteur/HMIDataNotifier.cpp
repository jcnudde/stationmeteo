//---------------------------------------------------------------------------

#pragma hdrstop

#include "HMIDataNotifier.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

//HMIDataNotifier::HMIDataNotifier(TForm1 * hmi)
//{
//	this->hmi
//}

void HMIDataNotifier::notifyData(tabDonnerCapteur data)
{
	add(data);
}
