//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FTYPE.h"
#include "F_DM.h"
#include "FTASK.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::SpeedButton2Click(TObject *Sender)
{
  TASK->Edit21->Text=DM->QTYPE->FieldByName("TASK_TYPE")->AsString;
 TASK->Edit26->Text=DM->QTYPE->FieldByName("TASK_TYPE")->AsString;

 Form11->Close();
}
//---------------------------------------------------------------------------
