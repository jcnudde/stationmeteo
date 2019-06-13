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
	//Allocation des pointeur
	this->ObjPrevi = new PrevisionMeteo();
	this->meteoParser = new MeteoParser();
	this->tcpServe = new TcpServer(meteoParser);
	//ouverture du server
	if(this->tcpServe->start(9013))
	{
		this->ShapeEtatServer->Brush->Color=clLime;
		this->ButtonStart->Visible=false;
		this->ButtonStop->Visible=true;
	}
	else
	{
		this->ShapeEtatServer->Brush->Color=clRed;
		this->ButtonStart->Visible=true;
		this->ButtonStop->Visible=false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonAffichPreviClick(TObject *Sender)
{
	this->StringGridAffichePrevi->Cells[0][0]="Etat du climat";
	this->StringGridAffichePrevi->Cells[1][0]="Température";
	this->StringGridAffichePrevi->Cells[0][0]=


	this->ObjPrevi->previsionMeteo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonStopClick(TObject *Sender)
{
	this->tcpServe->stop();
	this->ButtonStart->Visible=true;
	this->ButtonStop->Visible=false;
	this->ShapeEtatServer->Brush->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonStartClick(TObject *Sender)
{
	if(this->tcpServe->start(9013))
	{
		this->ButtonStart->Visible=false;
		this->ButtonStop->Visible=true;
		this->ShapeEtatServer->Brush->Color=clLime;
    }
}
//---------------------------------------------------------------------------



