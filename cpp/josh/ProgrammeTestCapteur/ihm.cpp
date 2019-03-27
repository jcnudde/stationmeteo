// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ihm.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

string renvoiCardinaux(double valeurAzimut)
{
		string direction;
		switch ((int)valeurAzimut)
		{
			case 360:
			direction ="N";
			break;
			case 337:
			direction = "NNO";
			break;
			case 315:
			direction = "NO";
			break;
			case 292:
			direction = "ONO";
			break;
			case 270:
			direction = "O";
			break;
			case 247:
			direction = "OSO";
			break;
			case 225:
			direction = "SO";
			break;
			case 202:
			direction = "SSO";
			break;
			case 180:
			direction = "S";
			break;
			case 157:
			direction = "SSE";
			break;
			case 135:
			direction = "SE";
			break;
			case 112:
			direction = "ESE";
			break;
			case 90:
			direction = "E";
			break;
			case 67:
			direction = "ENE";
			break;
			case 45:
			direction = "NE";
			break;
			case 22:
			direction = "NNE";
			break;
		}

        return direction;
}
// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	this->StringGrid1->Cells[1][0] = "An�mom�tre";
	this->StringGrid1->Cells[2][0] = "Girouette";
	this->StringGrid1->Cells[3][0] = "Barometre";
	this->StringGrid1->Cells[0][1] = "Tension";
	this->StringGrid1->Cells[0][2] = "Physique";
	// this->carte = new Carte_9111(0);
	this->anemometre = new Anemometre(0);
	this->carte =new Carte_9111(0);
	this->girouette = new Girouette(1);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender) {
	 this->StringGrid1->Cells[1][1]=  this->carte->readVoltage(0);
	 this->StringGrid1->Cells[2][1]= this->carte->readVoltage(1);
	// this->StringGrid1->Cells[3][1]= this->carte->readVoltage(2);

    string t = renvoiCardinaux(this->girouette->readValue());
	this->StringGrid1->Cells[1][2] = ((int)this->anemometre->readValue());
	this->StringGrid1->Cells[2][2]= t.c_str();
	// this->StringGrid1->Cells[3][2]= this->carte->readAnalog(2);
}
// ---------------------------------------------------------------------------