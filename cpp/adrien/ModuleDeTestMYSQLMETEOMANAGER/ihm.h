//---------------------------------------------------------------------------

#ifndef ihmH
#define ihmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "MysqlMeteoManager.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TShape *ShapeEtatServeurSQL;
	TButton *ButtonInsertDonnerCapteur;
	TButton *ButtonSelectDonner;
	TMemo *Memo1;
	void __fastcall ButtonInsertDonnerCapteurClick(TObject *Sender);
	void __fastcall ButtonSelectDonnerClick(TObject *Sender);
private:	// Déclarations utilisateur
	MysqlMeteoManager *bddManager;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
