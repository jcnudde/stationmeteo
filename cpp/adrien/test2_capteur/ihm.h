//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CapteurJour_Nuit.h"
#include "CapteurPluie.h"
#include "Pluiviometre.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TTimer *Timer1;
	TShape *Shape_pluiv;
	TShape *Shape_jn;
	TShape *Shape_pluie;
	TLabel *Label4;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// Déclarations utilisateur
	CarteE_S *carte;
	Capteur *capteurjour_nuit;
	Capteur *capteurpluie;
	Capteur *pluiviometre;
public:
		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
