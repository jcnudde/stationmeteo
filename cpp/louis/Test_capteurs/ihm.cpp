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
	this->solarimetre = new Solarimetre(6);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerTimer(TObject *Sender)
{
	// affichage du releve direct sans calcul
	this->Edit_temperature->Text= this->carte->readVoltage(3);
	this->Edit_luminosite->Text = this->carte->readVoltage(4);
	this->Edit_humidit�->Text = this->carte->readVoltage(6);
	//affichage avec calcul
	this->Edit_thermometre->Text = this->thermometre->readValue();
	this->Edit_luxmetre->Text = this->solarimetre->readValue();
	this->Edit_hygrometrie->Text =this->hygrometre->readValue();



}
//---------------------------------------------------------------------------

