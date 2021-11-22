//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FP_T.h"
#include "F_DM.h"
#include "FTASK.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::SpeedButton1Click(TObject *Sender)
{
 TASK->Edit23->Text=DM->QP_T->FieldByName("PROJECT")->AsString;
 TASK->Edit24->Text=DM->QP_T->FieldByName("PROJECT")->AsString;
 TASK->Edit36->Text=DM->QP_T->FieldByName("PROJECT")->AsString;

 Form5->Close();
}
//---------------------------------------------------------------------------
