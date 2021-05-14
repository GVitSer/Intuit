//---------------------------------------------------------------------------

#include <vcl.h>
#include <SysUtils.hpp>
#include <math.h>
#include <stdlib.h>
#pragma hdrstop

#include "OsnUnit.h"
#include "GrUnit.h"
#include "VHelpUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float z=0, proc=0, vsego=0, procuv=0, vsuver=0;
int Lb=0, Rb=1, uverv=0, uvern=0;
int t=0, t01=0, r=0, verno=0, podr=0, podn=0, rez=0, sto=0;
TTimeStamp p;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
randomize();
p=DateTimeToTimeStamp(Time());
t=p.Time;
r=rand();
t01=t+r;
z=t01%2;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BtnLMouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
if (z==Lb)
    {
     Image1->Picture->LoadFromFile("0.bmp");
     verno++;
      if (podn>1) Grafik->Series3->AddXY(vsego,-podn);
     podn=0;
     podr++;
      if (Shift.Contains(ssCtrl))
      uverv++, vsuver++;
     Label8->Caption=podr;
     rez++;
    }
   else
    {
     Image1->Picture->LoadFromFile("1.bmp");
      if (podr>1) Grafik->Series3->AddXY(vsego,podr);
     podr=0;
     podn++;
      if (Shift.Contains(ssCtrl))
      uvern++, vsuver++;
     Label10->Caption=podn;
     rez--;
    }
  vsego++;
  p=DateTimeToTimeStamp(Time());
  t=p.Time;
  r=rand();
  t01=t+r;
  z=t01%2;
  Label1->Caption=verno;
  Label2->Caption=vsego;
  proc=verno*100/vsego;
  Label3->Caption=FloatToStrF(proc,ffFixed,7,2);
   if ((vsego>10)&&(Label3->Caption>Label14->Caption))
   Label14->Caption=Label3->Caption;
   if ((vsego>100)&&(Label3->Caption>Label23->Caption))
   Label23->Caption=Label3->Caption;
  Label17->Caption=uverv;
  Label18->Caption=vsuver;
   if (vsuver>0)
  procuv=uverv*100/vsuver;
  Label20->Caption=FloatToStrF(procuv,ffFixed,7,2);
  Grafik->Series1->AddXY(vsego,rez);
  Grafik->Series4->AddXY(vsego,proc-50);
 if (vsego>150) {Grafik->HorzScrollBar->Position=-690+vsego*4.6;
              /*Grafik->Chart1->LeftAxis->PositionPercent=-7.5+vsego*0.0493;*/}
 else {Grafik->HorzScrollBar->Position=0;
       /*Grafik->Chart1->LeftAxis->PositionPercent=0;*/}
 sto=vsego;
 if (sto%10==0)
 Grafik->Series5->AddXY(vsego,FloatToStrF(proc,ffFixed,7,2)-50);
if (rez>25)
   {
   Grafik->Chart1->LeftAxis->Maximum=rez+5;
   Grafik->Chart1->LeftAxis->Minimum=-rez-5;
   }
if (rez<-25)
   {
   Grafik->Chart1->LeftAxis->Maximum=-rez+5;
   Grafik->Chart1->LeftAxis->Minimum=rez-5;
   }
if ((rez>=-25)&&(rez<=25))
   {
   Grafik->Chart1->LeftAxis->Maximum=30;
   Grafik->Chart1->LeftAxis->Minimum=-30;
   }
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BtnRMouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
if (z==Rb)
     {
     Image1->Picture->LoadFromFile("0.bmp");
     verno++;
      if (podn>1) Grafik->Series3->AddXY(vsego,-podn);
     podn=0;
     podr++;
      if (Shift.Contains(ssCtrl))
      uverv++, vsuver++;
     Label8->Caption=podr;
     rez++;
     }
    else
     {
     Image1->Picture->LoadFromFile("1.bmp");
      if (podr>1) Grafik->Series3->AddXY(vsego,podr);
     podr=0;
     podn++;
      if (Shift.Contains(ssCtrl))
      uvern++, vsuver++;
     Label10->Caption=podn;
     rez--;
     }
    vsego++;
    p=DateTimeToTimeStamp(Time());
    t=p.Time;
    r=rand();
    t01=t+r;
    z=t01%2;
    Label1->Caption=verno;
    Label2->Caption=vsego;
    proc=verno*100/vsego;
    Label3->Caption=FloatToStrF(proc,ffFixed,7,2);
     if ((vsego>10)&&(Label3->Caption>Label14->Caption))
     Label14->Caption=Label3->Caption;
     if ((vsego>100)&&(Label3->Caption>Label23->Caption))
     Label23->Caption=Label3->Caption;
    Label17->Caption=uverv;
    Label18->Caption=vsuver;
     if (vsuver>0)
    procuv=uverv*100/vsuver;
    Label20->Caption=FloatToStrF(procuv,ffFixed,7,2);
    Grafik->Series1->AddXY(vsego,rez);
    Grafik->Series4->AddXY(vsego,proc-50);
 if (vsego>150) {Grafik->HorzScrollBar->Position=-690+vsego*4.6;
              /*Grafik->Chart1->LeftAxis->PositionPercent=-7.5+vsego*0.0493;*/}
 else {Grafik->HorzScrollBar->Position=0;
       /*Grafik->Chart1->LeftAxis->PositionPercent=0;*/}
 sto=vsego;
 if (sto%10==0)
 Grafik->Series5->AddXY(vsego,FloatToStrF(proc,ffFixed,7,2)-50);
if (rez>25)
   {
   Grafik->Chart1->LeftAxis->Maximum=rez+5;
   Grafik->Chart1->LeftAxis->Minimum=-rez-5;
   }
if (rez<-25)
   {
   Grafik->Chart1->LeftAxis->Maximum=-rez+5;
   Grafik->Chart1->LeftAxis->Minimum=rez-5;
   }
if ((rez>=-25)&&(rez<=25))
   {
   Grafik->Chart1->LeftAxis->Maximum=30;
   Grafik->Chart1->LeftAxis->Minimum=-30;
   }
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnDaKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
switch(Key)
  {
 case 97:
   {
   if (z==Lb)
    {
     Image1->Picture->LoadFromFile("0.bmp");
     verno++;
      if (podn>1) Grafik->Series3->AddXY(vsego,-podn);
     podn=0;
     podr++;
      if (Shift.Contains(ssCtrl))
      uverv++, vsuver++;
     Label8->Caption=podr;
     rez++;
    }
   else
    {
     Image1->Picture->LoadFromFile("1.bmp");
      if (podr>1) Grafik->Series3->AddXY(vsego,podr);
     podr=0;
     podn++;
      if (Shift.Contains(ssCtrl))
      uvern++, vsuver++;
     Label10->Caption=podn;
     rez--;
    }
  vsego++;
  p=DateTimeToTimeStamp(Time());
  t=p.Time;
  r=rand();
  t01=t+r;
  z=t01%2;
  Label1->Caption=verno;
  Label2->Caption=vsego;
  proc=verno*100/vsego;
  Label3->Caption=FloatToStrF(proc,ffFixed,7,2);
   if ((vsego>10)&&(Label3->Caption>Label14->Caption))
   Label14->Caption=Label3->Caption;
   if ((vsego>100)&&(Label3->Caption>Label23->Caption))
   Label23->Caption=Label3->Caption;
  Label17->Caption=uverv;
  Label18->Caption=vsuver;
   if (vsuver>0)
  procuv=uverv*100/vsuver;
  Label20->Caption=FloatToStrF(procuv,ffFixed,7,2);
  Grafik->Series1->AddXY(vsego,rez);
  Grafik->Series4->AddXY(vsego,proc-50);
  }
 break;
 case 98:
   {
    if (z==Rb)
     {
     Image1->Picture->LoadFromFile("0.bmp");
     verno++;
      if (podn>1) Grafik->Series3->AddXY(vsego,-podn);
     podn=0;
     podr++;
      if (Shift.Contains(ssCtrl))
      uverv++, vsuver++;
     Label8->Caption=podr;
     rez++;
     }
    else
     {
     Image1->Picture->LoadFromFile("1.bmp");
      if (podr>1) Grafik->Series3->AddXY(vsego,podr);
     podr=0;
     podn++;
      if (Shift.Contains(ssCtrl))
      uvern++, vsuver++;
     Label10->Caption=podn;
     rez--;
     }
    vsego++;
    p=DateTimeToTimeStamp(Time());
    t=p.Time;
    r=rand();
    t01=t+r;
    z=t01%2;
    Label1->Caption=verno;
    Label2->Caption=vsego;
    proc=verno*100/vsego;
    Label3->Caption=FloatToStrF(proc,ffFixed,7,2);
     if ((vsego>10)&&(Label3->Caption>Label14->Caption))
     Label14->Caption=Label3->Caption;
     if ((vsego>100)&&(Label3->Caption>Label23->Caption))
     Label23->Caption=Label3->Caption;
    Label17->Caption=uverv;
    Label18->Caption=vsuver;
     if (vsuver>0)
    procuv=uverv*100/vsuver;
    Label20->Caption=FloatToStrF(procuv,ffFixed,7,2);
    Grafik->Series1->AddXY(vsego,rez);
    Grafik->Series4->AddXY(vsego,proc-50);
   }
 break;
 }
 if (vsego>150) {Grafik->HorzScrollBar->Position=-690+vsego*4.6;
              /*Grafik->Chart1->LeftAxis->PositionPercent=-7.5+vsego*0.0493;*/}
 else {Grafik->HorzScrollBar->Position=0;
       /*Grafik->Chart1->LeftAxis->PositionPercent=0;*/}
 sto=vsego;
 if (sto%10==0)
 Grafik->Series5->AddXY(vsego,FloatToStrF(proc,ffFixed,7,2)-50);
if (rez>25)
   {
   Grafik->Chart1->LeftAxis->Maximum=rez+5;
   Grafik->Chart1->LeftAxis->Minimum=-rez-5;
   }
if (rez<-25)
   {
   Grafik->Chart1->LeftAxis->Maximum=-rez+5;
   Grafik->Chart1->LeftAxis->Minimum=rez-5;
   }
if ((rez>=-25)&&(rez<=25))
   {
   Grafik->Chart1->LeftAxis->Maximum=30;
   Grafik->Chart1->LeftAxis->Minimum=-30;
   }
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::GrStatClick(TObject *Sender)
{
if (GrStat->Down==true)
 Grafik->Visible=true;
else
 Grafik->Visible=false;
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SbrosClick(TObject *Sender)
{
verno=0;
Label1->Caption=verno;
vsego=0;
Label2->Caption=vsego;
proc=0;
Label3->Caption=proc;
Label14->Caption=0;
Label23->Caption=0;
podr=0;
Label8->Caption=podr;
podn=0;
Label10->Caption=podn;
uverv=0;
uvern=0;
Label17->Caption=uverv;
vsuver=0;
Label18->Caption=vsuver;
procuv=0;
Label20->Caption=procuv;
rez=0;
Grafik->Series1->Clear();
Grafik->Series3->Clear();
Grafik->Series4->Clear();
Grafik->Series5->Clear();
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::VHelpClick(TObject *Sender)
{
if (FormVHelp->Visible==false)
FormVHelp->Visible=true;
else
FormVHelp->Visible=false;
BtnDa->SetFocus();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BtnDaClick(TObject *Sender)
{
Image1->Picture->LoadFromFile("0.bmp");
}
//---------------------------------------------------------------------------

