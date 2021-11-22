//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FDEP.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "FFUN.h"
#include "FP_T.h"
#include "fRECEPETION.h"
#include "FRECEPTION.h"
#include "FTASK.h"
#include "FTEAMS.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::SpeedButton1Click(TObject *Sender)
{
 DM->QTEAMS->Close();
 DM->QTEAMS->Open();

 F_TEAMS->Edit17->Text=DM->QDEP->FieldByName("NAME")->AsString;
 F_TEAMS->Edit27->Text=DM->QDEP->FieldByName("NAME")->AsString;
 Form6->Close();
}
//---------------------------------------------------------------------------

