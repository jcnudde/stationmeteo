//---------------------------------------------------------------------------

#ifndef DataNotifierH
#define DataNotifierH

#include "MemoirePartagee.h"

template<typename T>
class DataNotifier : public MemoirePartagee<T>
{
	public:
		virtual void notifyData(T data) = 0;
};

//---------------------------------------------------------------------------
#endif