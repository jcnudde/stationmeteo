//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ihm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	//allocation des pointeur sur nos classe
	this->meteoParser = new MeteoParser();
	this->tcpServer = new TcpServer(meteoParser);
	recupDonnerMeteo = RecupDonnerMeteo::getInstance();
	//Remplissage du tableau du StringGridCapteur
	this->StringGridCapteur->Cells[0][0]="Capteurs";
	this->StringGridCapteur->Cells[1][0]="Valeur Physique";
	this->StringGridCapteur->Cells[0][1]="An�mom�tre";
	this->StringGridCapteur->Cells[0][2]="Girouette";
	this->StringGridCapteur->Cells[0][3]="Barom�tre";
	this->StringGridCapteur->Cells[0][4]="Thermom�tre";
	this->StringGridCapteur->Cells[0][5]="Hygrom�tre";
	this->StringGridCapteur->Cells[0][6]="Luxm�tre";
	this->StringGridCapteur->Cells[0][7]="Capteur jour/nuit";
	this->StringGridCapteur->Cells[0][8]="Capteur Pluie";
	this->StringGridCapteur->Cells[0][9]="Pluiviom�tre";


}
//---------------------------------------------------------------------------

void __fastcall TForm2::startServerClick(TObject *Sender)
{
	//on demmare notre serveur
	if(this->tcpServer->start(9013))
	{
		//voyant passe au vert
		this->voyantEtatServer->Brush->Color=clLime;
		//on cache start et on affiche stop
		this->startServer->Visible=false;
        this->stopServer->Visible=true;
	}
	else
	{
        //passe rouge
		this->voyantEtatServer->Brush->Color=clRed;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::stopServerClick(TObject *Sender)
{
	//on arrete le server
	this->tcpServer->stop();
	//voyant passe au rouge
	this->voyantEtatServer->Brush->Color=clRed;
    //on cache stop et on affiche start
	this->stopServer->Visible=false;
    this->startServer->Visible=true;
}
//---------------------------------------------------------------------------


