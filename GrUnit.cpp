//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GrUnit.h"
#include "OsnUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGrafik *Grafik;
//---------------------------------------------------------------------------
__fastcall TGrafik::TGrafik(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGrafik::FormCreate(TObject *Sender)
{
Series2->AddXY(0,0);
Series2->AddXY(2000,0);
}
//---------------------------------------------------------------------------
