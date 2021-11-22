//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FP_DETAILS.h"
#include "F_DM.h"
#include "fRECEPETION.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm12::SpeedButton1Click(TObject *Sender)
{
 Form3->Edit3->Text=DM->QSTATUS->FieldByName("STATUS_TYPE")->AsString;
 Form3->Edit31->Text=DM->QINTERMEDIARY->FieldByName("COMPANY_NAME")->AsString;
 Form3->Edit30->Text=DM->QINTERMEDIARY->FieldByName("COMPANY_REPRESENTATIVE")->AsString;
 Form3->Edit26->Text=DM->QINTERMEDIARY->FieldByName("EMAIL")->AsString;
 Form3->Edit23->Text=DM->QINTERMEDIARY->FieldByName("IDNO")->AsString;
 Form3->Edit27->Text=DM->QINTERMEDIARY->FieldByName("PHONE")->AsString;
 Form3->Edit22->Text=DM->QDENTITIES->FieldByName("NAME")->AsString;
 Form3->Edit32->Text=DM->QSOLUTION->FieldByName("NAME")->AsString;
 Form3->Edit29->Text=DM->QSOLUTION->FieldByName("SOLUTION_TYPE")->AsString;

 Form12->Close();
}
//---------------------------------------------------------------------------
