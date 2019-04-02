//---------------------------------------------------------------------------
/*
 * CapteurPluie
 *
 * Classe qui herite de la class capteur
 *
 * Copyright 11 mars 2019 (@author BASILE Adrien)
 * @version 0.0
 *
 *
 **/
 //---------------------------------------------------------------------------
#ifndef MeteoParserH
#define MeteoParserH

#include "AbstractParser.h"
#include <cstring>
#include <iostream>


using namespace std;

class MeteoParser : public AbstractParser
{
	public:
		virtual void Parse(char * buf, SOCKET sock);
};

//---------------------------------------------------------------------------
#endif
