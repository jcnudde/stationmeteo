#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include "MysqlMeteoManager.h"
#include <conio.h>
#include <iostream>

using namespace std;
int main(int argc, char * argv[])
{
   	MysqlMeteoManager *test1 = MysqlMeteoManager::getInstance();
	MysqlMeteoManager *test2= MysqlMeteoManager::getInstance();
	cout<<test2<<endl;
	cout<<test1<<endl;

	getch();
	return 0;
}