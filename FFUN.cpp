//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FFUN.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "FDEP.h"
#include "FP_T.h"
#include "fRECEPETION.h"
#include "FTASK.h"
#include "FTEAMS.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SELECTClick(TObject *Sender)
{
 DM->QTEAMS->Close();
 DM->QTEAMS->Open();

 F_TEAMS->Edit15->Text=DM->QFUN->FieldByName("NAME")->AsString;
 F_TEAMS->Edit25->Text=DM->QFUN->FieldByName("NAME")->AsString;
 F_TEAMS->Edit19->Text=DM->QACC->FieldByName("ACCESS_TYPE")->AsString;
 F_TEAMS->Edit29->Text=DM->QACC->FieldByName("ACCESS_TYPE")->AsString;
 F_TEAMS->Edit17->Text=DM->QDEP->FieldByName("NAME")->AsString;
 F_TEAMS->Edit27->Text=DM->QDEP->FieldByName("NAME")->AsString;
 Form7->Close();
}
//---------------------------------------------------------------------------

