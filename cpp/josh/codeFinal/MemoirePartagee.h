//---------------------------------------------------------------------------

#ifndef MemoirePartageeH
#define MemoirePartageeH

#include <windows.h>
#include <vector>

template<typename T>
class MemoirePartagee
{
	HANDLE mutex;
	std::vector<T> file;

public:
	MemoirePartagee();
	~MemoirePartagee();

	T get();
	void add(T data);
};

template<typename T>
MemoirePartagee<T>::MemoirePartagee()
{
	mutex = CreateMutex(NULL,
				FALSE,
				NULL);
}

template<typename T>
MemoirePartagee<T>::~MemoirePartagee()
{
	CloseHandle(mutex);
}


template<typename T>
T MemoirePartagee<T>::get()
{
	DWORD dwResult = WaitForSingleObject(mutex, INFINITE);

	if(file.size() == 0)
	{
		ReleaseMutex(mutex);
		throw std::string("File vide");
	}

	T data = file.front();
	file.erase(file.begin());

	ReleaseMutex(mutex);
	return data;
}

template<typename T>
void MemoirePartagee<T>::add(T data)
{
	DWORD dwResult = WaitForSingleObject(mutex, INFINITE);

	file.push_back(data);

	ReleaseMutex(mutex);
}

//---------------------------------------------------------------------------
#endif
