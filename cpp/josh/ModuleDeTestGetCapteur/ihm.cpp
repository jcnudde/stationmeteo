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
	recupDonner = RecupDonnerMeteo::getInstance();
	dataNotifier = new MeteoDataNotifier();
	recupDonner->addNotifier(dataNotifier);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	try
	{
		while(true)
		{
			tabDonnerCapteur capData = dataNotifier->get();
			this->LabelAnemo->Caption = UnicodeString((int)capData.vitesseVent)+"km/h";
			this->LabelGirouette->Caption = UnicodeString((int)capData.direction);
			this->Labelbarom->Caption = UnicodeString((int)capData.pressionAtmospherique)+"hPa";
			this->LabelTherm->Caption =  UnicodeString((int)capData.temperature)+"°C";
			this->LabelHumid->Caption = UnicodeString((int)capData.hummiditeRelative)+"%";
			this->LabelSola->Caption =  UnicodeString((int)capData.luminosite)+"Lux";
			this->LabelJour->Caption =  UnicodeString((int)capData.jour);
			this->LabelPlui->Caption =   UnicodeString((int)capData.pluie);
			this->LabelPluiviometre->Caption = UnicodeString((int)capData.surfaceDePluie);
        }
	}
	catch(std::string error)
	{

    }
}
//---------------------------------------------------------------------------



