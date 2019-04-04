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
	this->capteurpluie = new CapteurPluie(0);
	this->pluiviometre = new Pluiviometre(5);
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	bool chose;
	char * BOOL;

		chose = this->capteurjour_nuit->readValue();
		BOOL = chose ? "true" : "false";
		this->Edit_jn->Text = BOOL;


		chose = this->capteurpluie->readValue();
		BOOL = chose ? "true" : "false";
		this->Editpluie->Text =BOOL;


		chose = this->pluiviometre->readValue();
		BOOL = chose ? "true" : "false";
		this->Editpluiviometre->Text =BOOL;


}
//---------------------------------------------------------------------------
