//---------------------------------------------------------------------------

#ifndef IhmH
#define IhmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "TcpServer.h"
#include "MeteoParser.h"
#include "RecupDonnerMeteo.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "MeteoDataNotifier.h"

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *startServer;
	TButton *stopServer;
	TGroupBox *GroupBoxServer;
	TShape *voyantEtatServer;
	TButton *ParamServer;
	TGroupBox *GroupBoxCapteur;
	TStringGrid *StringGridCapteur;
	TTimer *TimerAffichageCapteur;
	void __fastcall startServerClick(TObject *Sender);
	void __fastcall stopServerClick(TObject *Sender);
	void __fastcall TimerAffichageCapteurTimer(TObject *Sender);

private:	// Déclarations utilisateur
	RecupDonnerMeteo *recupDonnerMeteo;
	Server *tcpServer;
	AbstractParser *meteoParser;
	MeteoDataNotifier *dataNotifier;
public:		// Déclarations utilisateur
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
