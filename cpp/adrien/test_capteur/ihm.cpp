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
	this->capteurjour_nuit = new CapteurJour_Nuit(8);
	this->capteurpluie = new CapteurPluie(7);
	this->pluiviometre = new Pluiviometre(6);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	this->Edit_jn = this->carte->readTOR(8);
	this->Editpluie = this->carte->readTOR(7);
	this->Editpluiviometre = this->carte->readTOR(9);
}
//---------------------------------------------------------------------------

