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
	//Recup�ration de l'instance de la Classe RecupDonnerMeteo
	recupDonnerMeteo = RecupDonnerMeteo::getInstance();

	dataNotifier = new MeteoDataNotifier();
	recupDonnerMeteo->addNotifier(dataNotifier);
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



void __fastcall TForm2::TimerAffichageCapteurTimer(TObject *Sender)
{
    try
	{
		while(true)
		{
			tabDonnerCapteur capData = dataNotifier->get();
			this->StringGridCapteur->Cells[1][1] = UnicodeString((int)capData.vitesseVent*3.6)+"km/h";
			this->StringGridCapteur->Cells[1][2] = UnicodeString((int)capData.direction);
			this->StringGridCapteur->Cells[1][3] = UnicodeString((int)capData.pressionAtmospherique)+"hPa";
			this->StringGridCapteur->Cells[1][4] =  UnicodeString((int)capData.temperature)+"�C";
			this->StringGridCapteur->Cells[1][5] = UnicodeString((int)capData.hummiditeRelative)+"%";
			this->StringGridCapteur->Cells[1][6] =  UnicodeString((int)capData.luminosite)+"Lux";
			this->StringGridCapteur->Cells[1][7] =  UnicodeString((int)capData.jour);
			this->StringGridCapteur->Cells[1][8] =   UnicodeString((int)capData.pluie);
			this->StringGridCapteur->Cells[1][9] = UnicodeString((int)capData.surfaceDePluie);
        }
	}
	catch(std::string error)
	{

	}
}
//---------------------------------------------------------------------------

