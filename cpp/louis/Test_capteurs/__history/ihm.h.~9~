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


#include "Thermometre.h"
#include "Hygrometre.h"
#include "Solarimetre.h"
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------

class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TLabel *label_humidite;
	TLabel *Label_temperature;
	TLabel *Label_luminosite;
	TEdit *Edit_humidité;
	TEdit *Edit_temperature;
	TEdit *Edit_luminosite;
	TTimer *Timer;
	TEdit *Edit_hygrometrie;
	TEdit *Edit_thermometre;
	TEdit *Edit_luxmetre;
	void __fastcall TimerTimer(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
	CarteE_S *carte;
	Capteur *thermometre;
	Capteur *hygrometre;
	Capteur *solarimetre;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
