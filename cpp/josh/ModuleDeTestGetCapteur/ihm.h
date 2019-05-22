//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RecupDonnerMeteo.h"
#include <Vcl.ExtCtrls.hpp>
#include "MeteoDataNotifier.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TTimer *Timer1;
	TLabel *LabelAnemo;
	TLabel *LabelHumid;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *LabelGirouette;
	TLabel *Labelbarom;
	TLabel *LabelTherm;
	TLabel *LabelSola;
	TLabel *LabelJour;
	TLabel *LabelPlui;
	TLabel *LabelPluiviometre;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// Déclarations utilisateur

	RecupDonnerMeteo *recupDonner;
	MeteoDataNotifier * dataNotifier;
public:		// Déclarations utilisateur

	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
