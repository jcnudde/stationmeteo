//---------------------------------------------------------------------------

#ifndef CarteE_SH
#define CarteE_SH

class CarteE_S
{
    private:

    public:
       virtual int  readAnalog(double channel)=0;
       virtual bool readTOR(double channel)=0;
	   virtual void writeAnalog(double channel)=0;
	   virtual double readVoltage(double channel)=0;
};
//---------------------------------------------------------------------------
#endif
