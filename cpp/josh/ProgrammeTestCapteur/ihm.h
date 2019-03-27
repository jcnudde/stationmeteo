//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>

//#include "Carte_9111.h"
//#include "CarteE_S.h"
#include <string>
#include "Capteur.h"
#include "Anemometre.h"
#include "Girouette.h"
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>

using namespace std;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TStringGrid *StringGrid1;
	TTimer *Timer1;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// D�clarations utilisateur
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
	CarteE_S *carte;
	Capteur *girouette;
	Capteur *anemometre;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
