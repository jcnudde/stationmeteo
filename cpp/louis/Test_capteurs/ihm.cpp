//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ihm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

	this->carte =new Carte_9111(0);
	this->thermometre = new Thermometre(3);
	this->hygrometre = new Hygrometre(4);
	this->solarimetre = new Solaimetre(6);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerTimer(TObject *Sender)
{
	// affichage du releve direct sans calcul
	this->Edit_temperature = this->carte->readVoltage(3);
	this->Edit_luminosite = this->carte->readVoltage(4);
	this->Edit_humidit� = this->carte->readVoltage(6);
	//affichage avec calcul
	this->Edit_thermometre = this->thermometre->readValue(3);
	this->Edit_luxmetre = this->solarimetre->readValue(4);
	this->Edit_hygrometrie =this->hygrometre->readValue(6);



}
//---------------------------------------------------------------------------

