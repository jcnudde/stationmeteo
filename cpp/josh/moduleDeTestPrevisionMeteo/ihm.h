//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "PrevisionMeteo.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TLabel *Label1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// D�clarations utilisateur
	PrevisionMeteo* ObjPrevi;
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif