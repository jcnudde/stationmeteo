//---------------------------------------------------------------------------

#pragma hdrstop

#include "Girouette.h"
#define SEUIL 10
//---------------------------------------------------------------------------
#pragma package(smart_init)
Girouette::Girouette(int channel):Capteur(channel)
{

}

double Girouette::readValue()
{
    this->PhysicalValue=0;
	double S = 2.25*100,
		   SSO = 2.54*100,
		   SO = 2.85*100,
		   OSO = 3.14*100,
		   O = 3.42*100,
		   ONO = 3.72*100,
		   NO = 4.00*100,
		   NNO = 4.31*100,
		   N = 4.46*100,
		   NNE = 4.16*100,
		   NE = 3.87*100,
		   ENE = 3.57*100,
		   E = 3.29*100,
		   ESE = 3.00*100,
		   SE = 2.69*100,
		   SSE = 2.40*100;

		   double voltage=this->carte->readVoltage(this->channel);
		   voltage*=100;

		   //SUD
		   if(((int)voltage)-SEUIL <= ((int)S) &&  ((int)voltage)+SEUIL >= ((int)S))
		   {
			   this->PhysicalValue=180;
		   }
		   //SUD SUD OUEST
		   if(((int)voltage)-SEUIL <= ((int)SSO) && ((int)voltage)+SEUIL >= ((int)SSO))
		   {
			   this->PhysicalValue=202.5;
		   }
		   //SUD OUEST
		   if(((int)voltage)-SEUIL <= ((int)SO) && ((int)voltage)+SEUIL >= ((int)SO))
		   {
			   this->PhysicalValue=225;
		   }
		   //OUEST SUD OUEST
		   if(((int)voltage)-SEUIL <= ((int)OSO) && ((int)voltage)+SEUIL >= ((int)OSO))
		   {
			   this->PhysicalValue=247.5;
		   }
		   //OUEST
		   if(((int)voltage)-SEUIL <=((int)O) && ((int)voltage)+SEUIL >=((int)O) )
		   {
			   this->PhysicalValue=270;
		   }
		   //ouest nord ouest
		   if(((int)voltage)-SEUIL <= ((int)ONO) && ((int)voltage)+SEUIL >= ((int)ONO) )
		   {
			   this->PhysicalValue=292.5;
		   }
		   //nord ouest
		   if(((int)voltage)-SEUIL <= ((int)NO) && ((int)voltage)+SEUIL >= ((int)NO) )
		   {
			   this->PhysicalValue=315;
		   }
		   //nord nord ouest
		   if(((int)voltage)-SEUIL <= ((int)NNO) && ((int)voltage)+SEUIL >= ((int)NNO))
		   {
			   this->PhysicalValue=337;
		   }
		   //nord
		   if(((int)voltage)-SEUIL <= ((int)N) && ((int)voltage)+SEUIL >= ((int)N) )
		   {
			   this->PhysicalValue=360;
		   }
		   //nord nord est
		   if(((int)voltage)-SEUIL <= ((int)NNE) && ((int)voltage)+SEUIL >= ((int)NNE) )
		   {
			   this->PhysicalValue=22.5;
		   }
		   //nord est
		   if(((int)voltage)-SEUIL <= ((int)NE) && ((int)voltage)+SEUIL >= ((int)NE) )
		   {
			   this->PhysicalValue=45;
		   }
		   //est nord est
		   if(((int)voltage)-SEUIL <= ((int)ENE) && ((int)voltage)+SEUIL >= ((int)ENE))
		   {
			   this->PhysicalValue=67.5;
		   }
		   //est
		   if(((int)voltage)-SEUIL <= ((int)E) &&  ((int)voltage)+SEUIL >= ((int)E))
		   {
			   this->PhysicalValue=90;
		   }
		   //EST SUD EST
		   if(((int)voltage)-SEUIL <= ((int)ESE) && ((int)voltage)+SEUIL >= ((int)ESE))
		   {
			   this->PhysicalValue=112.5;
		   }
		   //SUD EST
		   if(((int)voltage)-SEUIL <= ((int)SE) && ((int)voltage)+SEUIL >= ((int)SE))
		   {
			   this->PhysicalValue=135;
		   }
		   //SUD SUD EST
		   if(((int)voltage)-SEUIL <= ((int)SSE) && ((int)voltage)+SEUIL >= ((int)SSE))
		   {
			   this->PhysicalValue=157.5;
		   }



	return this->PhysicalValue;
}
string Girouette::getUnit()
{
	return "°";
}
