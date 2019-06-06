﻿//---------------------------------------------------------------------------
/*
 * Pluiviometre
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author BASILE Adrien)
 * @version 0.0
 *
 *
 **/

#ifndef PluiviometreH
#define PluiviometreH
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Capteur.h"
#include "Windows.h"
#include <IniFiles.hpp>
#include <time.h>

using namespace std;

class Pluiviometre : public Capteur
{
	private:
		HANDLE mutex;
		HANDLE thread;
		DWORD dwThreadIdArray;
		static DWORD WINAPI threadCompteurPluivio(LPVOID params);
		int compteur;
		struct tm instant[2];
		time_t secondes;

		TIniFile *fichier;
    public:
        Pluiviometre(int channel);
		virtual double readValue();
		string getUnit();

};
#endif