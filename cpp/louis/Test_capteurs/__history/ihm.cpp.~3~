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
	this->StringGrid1->Cells[2][0] = "Voltage";
	this->StringGrid1->Cells[3][0] = "Relevés";
	this->StringGrid1->Cells[1][1] = "Thermometre";
	this->StringGrid1->Cells[1][2] = "Hygrometre";
	this->StringGrid1->Cells[1][3] = "Solarimetre";
	this->carte =new Carte_9111(0);
	this->thermometre = new Thermometre(3);
	this->hygrometre = new Hygrometre(4);
	this->solarimetre = new Solaimetre(5);

}
//---------------------------------------------------------------------------


