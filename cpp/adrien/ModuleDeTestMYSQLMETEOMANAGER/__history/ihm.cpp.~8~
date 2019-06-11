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
	this->bddManager = MysqlMeteoManager::getInstance();


	if(this->bddManager->connect())
	{
		this->ShapeEtatServeurSQL->Brush->Color = clLime;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonInsertDonnerCapteurClick(TObject *Sender)
{
	tabDonnerCapteur donner;

	donner.vitesseVent=120;
	donner.temperature=20;
	donner.pressionAtmospherique=1050;
	donner.direction=360;
	donner.hummiditeRelative=50;
	donner.luminosite=9000;
	donner.jour=1;
	donner.pluie=0;
	donner.surfaceDePluie=20;

    this->bddManager->InsertDonnerCapteur(donner);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonSelectDonnerClick(TObject *Sender)
{
	vector<tabDonnerCapteur> dataMeteo = this->bddManager->SelectLastDonnee();

	for (int i = 0; i < dataMeteo.size(); i++) {
		this->Memo1->Lines->Add(dataMeteo[i].vitesseVent);
		this->Memo1->Lines->Add(dataMeteo[i].temperature);
		this->Memo1->Lines->Add(dataMeteo[i].pressionAtmospherique);
		this->Memo1->Lines->Add(dataMeteo[i].direction);
		this->Memo1->Lines->Add(dataMeteo[i].hummiditeRelative);
		this->Memo1->Lines->Add(dataMeteo[i].luminosite);
		this->Memo1->Lines->Add(dataMeteo[i].jour);
		this->Memo1->Lines->Add(dataMeteo[i].pluie);
		this->Memo1->Lines->Add(dataMeteo[i].surfaceDePluie);
	}
}
//---------------------------------------------------------------------------
