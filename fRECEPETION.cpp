//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fRECEPETION.h"
#include "FP_DETAILS.h"
#include "F_DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SpeedButton5Click(TObject *Sender)
{
 DM->QSTATUS->Close();
 DM->QSTATUS->Open();
 DM->QINTERMEDIARY->Close();
 DM->QINTERMEDIARY->Open();
 DM->QDENTITIES->Close();
 DM->QDENTITIES->Open();
 DM->QSOLUTION->Close();
 DM->QSOLUTION->Open();


Form12->ShowModal();
}
//---------------------------------------------------------------------------




void __fastcall TForm3::SpeedButton2Click(TObject *Sender)
{
Edit1->Clear();
 Edit2->Clear();
 Edit3->Clear();


 Edit9->Clear();
 Edit10->Clear();
  Edit11->Clear();
 Edit12->Clear();
 Edit14->Clear();
 Edit15->Clear();
  Edit16->Clear();

  Edit31->Clear();
 Edit27->Clear();
 Edit30->Clear();
   Edit23->Clear();
 Edit26->Clear();
 Edit22->Clear();

   Edit32->Clear();
 Edit28->Clear();
 Edit29->Clear();

}
//---------------------------------------------------------------------------

