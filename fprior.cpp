//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fprior.h"
#include "F_DM.h"
#include "FTASK.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::SpeedButton1Click(TObject *Sender)
{

 TASK->Edit25->Text=DM->QPRIOR->FieldByName("NAME")->AsString;
 TASK->Edit3->Text=DM->QPRIOR->FieldByName("NAME")->AsString;
   TASK->Edit21->Text=DM->QTYPE->FieldByName("TASK_TYPE")->AsString;
 TASK->Edit26->Text=DM->QTYPE->FieldByName("TASK_TYPE")->AsString;
 Form9->Close();
}
//---------------------------------------------------------------------------

