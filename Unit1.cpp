//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "FTASK.h"
#include "FTEAMS.h"
#include "fRECEPETION.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "FACC.h"
#include "FDEP.h"
#include "FFUN.h"
#include "FP_T.h"
#include "FSEARCH.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMAIN *FMAIN;
TDateTime DT;
//---------------------------------------------------------------------------
__fastcall TFMAIN::TFMAIN(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMAIN::SpeedButton5Click(TObject *Sender)
{
  DM->QTEAMS->Close();
  DM->QTEAMS->Open();
  TASK->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::SpeedButton6Click(TObject *Sender)
{
DM->QDEP->Close();
DM->QDEP->Open();
DM->QFUN->Close();
DM->QFUN->Open();
DM->QACC->Close();
DM->QACC->Open();
DM->QTEAMS->Close();
DM->QTEAMS->Open();
F_TEAMS->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::S1Click(TObject *Sender)
{
  DM->QDEP->Close();
DM->QDEP->Open();
DM->QFUN->Close();
DM->QFUN->Open();
DM->QACC->Close();
DM->QACC->Open();
DM->QTEAMS->Close();
DM->QTEAMS->Open();
F_TEAMS->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::FormShow(TObject *Sender)
{
DM->QPM->Close();
DM->QPM->Open();
Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::SpeedButton12Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::SpeedButton1Click(TObject *Sender)
{
   Form10->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::SpeedButton2Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::SpeedButton3Click(TObject *Sender)
{
Form3->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMAIN::Timer1Timer(TObject *Sender)
{
Label8->Caption = DT.CurrentTime();
Label9->Caption = DT.CurrentDate();
}
//---------------------------------------------------------------------------

