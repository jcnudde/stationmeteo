//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "CapteurJour_Nuit.h"
#include "CapteurPluie.h"
#include "Pluiviometre.h"


//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit_jn;
	TEdit *Editpluie;
	TEdit *Editpluiviometre;
	TTimer *Timer1;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// D�clarations utilisateur
	CarteE_S *carte;
	Capteur *capteurjour_nuit;
	Capteur *capteurpluie;
	Capteur *pluiviometre;
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);


};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
