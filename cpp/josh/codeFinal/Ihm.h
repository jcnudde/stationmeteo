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

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TButton *startServer;
	TButton *stopServer;
	TGroupBox *GroupBoxServer;
	TShape *voyantEtatServer;
	TButton *ParamServer;
	void __fastcall startServerClick(TObject *Sender);
	void __fastcall stopServerClick(TObject *Sender);

private:	// D�clarations utilisateur
	RecupDonnerMeteo *recupDonnerMeteo;
	Server *tcpServer;
	AbstractParser *meteoParser;
public:		// D�clarations utilisateur
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif