//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FACC.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "FDEP.h"
#include "FFUN.h"
#include "FP_T.h"
#include "fRECEPETION.h"
#include "FTASK.h"
#include "FTEAMS.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::SpeedButton1Click(TObject *Sender)
{
 DM->QTEAMS->Close();
 DM->QTEAMS->Open();

 F_TEAMS->Edit19->Text=DM->QACC->FieldByName("ACCESS_TYPE")->AsString;
 F_TEAMS->Edit29->Text=DM->QACC->FieldByName("ACCESS_TYPE")->AsString;
 Form8->Close();
}
//---------------------------------------------------------------------------
