//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FAUTHENTIFICATION.h"
#include "F_DM.h"
#include "Unit1.h"
#include "FTASK.h"
#include "FTEAMS.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SpeedButton1Click(TObject *Sender)
{
  if((!Edit1->Text.IsEmpty()) && (!Edit2->Text.IsEmpty()))
  {
		DM->QLIBER->Close();
		DM->QLIBER->SQL->Clear();
		DM->QLIBER->SQL->Add("SELECT * FROM EMPLOYMENT WHERE USERNAME=:USERNAME AND PASS=:PASS");
		DM->QLIBER->ParamByName("USERNAME")->AsString=Edit1->Text;
		DM->QLIBER->ParamByName("PASS")->AsString=Edit2->Text;
		DM->QLIBER->Open();


   if(!DM->QLIBER->IsEmpty())
   {

     FMAIN->Label1->Caption=DM->QLIBER->FieldByName("name")->AsString;
	  FMAIN->Label2->Caption=DM->QLIBER->FieldByName("surname")->AsString;
	  TASK->Label1->Caption=DM->QLIBER->FieldByName("name")->AsString;
      TASK->Label2->Caption=DM->QLIBER->FieldByName("surname")->AsString;
	 // FMAIN->Label8->Caption=DM->QFUN->FieldByName("NAME")->AsString;
	  USER=DM->QLIBER->FieldByName("employment_id")->AsInteger;
   switch(DM->QLIBER->FieldByName("ACCESS_TYPE")->AsInteger)
   {
		case 2:   {
		Close();
		TASK->ShowModal();
					break;


	   }

		case 3:   {  Close();
		F_TEAMS->ShowModal();

				   break;
	   }

	   default:
	   {
        Close();
		FMAIN->AlphaBlend=false;   break;
       }
   }
	}
	else
	{
		ShowMessage(" WRONG CREDENTIALS");
		Edit2->Clear();
	}
  }
  else
  {
	  ShowMessage("FILL THE EMPTY SPACES IN ODER TO LOG IN");
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SpeedButton2Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------

