//---------------------------------------------------------------------------

#ifndef GrUnitH
#define GrUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeeFunci.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TGrafik : public TForm
{
__published:	// IDE-managed Components
        TChart *Chart1;
        TLineSeries *Series1;
        TAddTeeFunction *TeeFunction1;
        TLineSeries *Series2;
        TBarSeries *Series3;
        TLineSeries *Series4;
        TBarSeries *Series5;
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGrafik(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGrafik *Grafik;
//---------------------------------------------------------------------------
#endif
