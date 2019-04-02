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
 int _tmain(int argc, _TCHAR* argv[])
{
	tabDonnerCapteur tableauxDonner;

	tableauxDonner.vitesseVent= 120;
	tableauxDonner.temperature =20;
	tableauxDonner.pressionAtmospherique=50;
	tableauxDonner.direction=360;
	tableauxDonner.hummiditeRelative=50;
	tableauxDonner.luminosite=100;
	tableauxDonner.jour=1;
	tableauxDonner.pluie=0;
    tableauxDonner.surfaceDePluie=5;

	MysqlMeteoManager *test1 = MysqlMeteoManager::getInstance();
	MysqlMeteoManager *test2= MysqlMeteoManager::getInstance();

	cout<<test2<<endl;
	cout<<test1<<endl;

    bool value;
	tabDonnerCapteur var1;

	var1.vitesseVent=120;
	var1.temperature=30;
	var1.pressionAtmospherique=25;
	var1.direction=22;
	var1.hummiditeRelative=12;
	var1.luminosite=50;
	var1.jour=0;
	var1.pluie=1;
	var1.surfaceDePluie=1;

	if(test1->InsertDonnerCapteur(tableauxDonner))
	{
		cout<<"insert good"<<endl;
	}
	else
	{
		cout<<"insert not good"<<endl;
	}

    //	MysqlMeteoManager *test3
	bool value = test1->InsertDonnerCapteur(var1);
//	cout<<test3<<endl;


	getch();
	return 0;
}
