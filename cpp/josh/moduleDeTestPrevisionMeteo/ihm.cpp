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
	this->ObjPrevi = new PrevisionMeteo();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonObtenPreviClick(TObject *Sender)
{
	this->LabelAfficheProtocolePrevi->Caption = this->ObjPrevi->previsionMeteo();
}
//---------------------------------------------------------------------------
