//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FTEAMS.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "FDEP.h"
#include "FFUN.h"
#include "FP_T.h"
#include "fRECEPETION.h"
#include "FTASK.h"
#include "Unit1.h"
#include "FACC.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TF_TEAMS *F_TEAMS;
int DEP,FUN,EMP;

//---------------------------------------------------------------------------
__fastcall TF_TEAMS::TF_TEAMS(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TF_TEAMS::SpeedButton1Click(TObject *Sender)
{
   DM->QTEAMS->Close();
   DM->QTEAMS->Open();

   if((Edit21->Text!="")&&(Edit22->Text!="")&&(Edit23->Text!="")&&(Edit24->Text!="")&&(Edit25->Text!="")&&(Edit26->Text!="")&&(Edit27->Text!="")&&(Edit28->Text!="")&&(Edit29->Text!="")&&(Edit30->Text!=""))
   {

	 DM->QLIBER->Close();
	 DM->QLIBER->SQL->Clear();
	 DM->QLIBER->SQL->Add("INSERT INTO EMPLOYMENT(NAME,SURNAME,EMAIL,ACCESS_TYPE,USERNAME,PASS,PHONE,IDNP) VALUES(:NAME,:SURNAME,:EMAIL,:ACCESS_TYPE,:USERNAME,:PASS,:PHONE,:IDNP)");

	 DM->QLIBER->ParamByName("NAME")->AsString=Edit21->Text;
	 DM->QLIBER->ParamByName("SURNAME")->AsString=Edit23->Text;

	 DM->QLIBER->ParamByName("EMAIL")->AsString=Edit24->Text;
	 DM->QLIBER->ParamByName("PHONE")->AsString=Edit26->Text;
	 DM->QLIBER->ParamByName("ACCESS_TYPE")->AsInteger=Edit29->Text.ToInt();
	 DM->QLIBER->ParamByName("USERNAME")->AsString=Edit22->Text;
	 DM->QLIBER->ParamByName("PASS")->AsString=Edit30->Text;
	 DM->QLIBER->ParamByName("IDNP")->AsString=Edit28->Text;
	 DM->QLIBER->ExecSQL();
	 DM->QLIBER->SQL->Clear();


	 DM->QLIBER->SQL->Add("INSERT INTO DEPARTMENT(NAME) VALUES(:NAME)");

	 DM->QLIBER->ParamByName("NAME")->AsString=Edit27->Text;
	 DM->QLIBER->ExecSQL();
	 DM->QLIBER->SQL->Clear();

	 DM->QLIBER->SQL->Add("INSERT INTO FUNCTIONS(NAME) VALUES(:NAME)");

	 DM->QLIBER->ParamByName("NAME")->AsString=Edit25->Text;
	 DM->QLIBER->ExecSQL();
	  DM->QLIBER->SQL->Clear();

	 DM->QLIBER->SQL->Add("INSERT INTO EMPLOYEE(EMPLOYMENT_ID,FUNCTIONS_ID,DEPARTMENT_ID) VALUES(:EMPLOYMENT_ID,:FUNCTIONS_ID,:DEPARTMENT_ID)");

	 DM->QLIBER->ParamByName("EMPLOYMENT_ID")->AsInteger=DM->QTEAMS->FieldByName("EMPLOYMENT_ID")->AsInteger;
	 DM->QLIBER->ParamByName("FUNCTIONS_ID")->AsInteger=DM->QTEAMS->FieldByName("FUNCTIONS_ID")->AsInteger;
	 DM->QLIBER->ParamByName("DEPARTMENT_ID")->AsInteger=DM->QTEAMS->FieldByName("DEPARTMENT_ID")->AsInteger;
	 DM->QTEAMS->Close();
	 DM->QTEAMS->Open();

	 ShowMessage("Registered successfully");

	 Edit21->Clear();
	 Edit22->Clear();
	 Edit23->Clear();
	 Edit24->Clear();
	 Edit25->Clear();
	 Edit26->Clear();
	 Edit27->Clear();
	 Edit28->Clear();
	 Edit29->Clear();
	 Edit30->Clear();
   }
	  else
	  {
		  ShowMessage("Please, fill the empty spaces");
      }



}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SClick(TObject *Sender)
{
 DM->QFUN->Close();
	DM->QFUN->Open();
	DM->QACC->Close();
	DM->QACC->Open();
	DM->QDEP->Close();
	DM->QDEP->Open();
	  Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SpeedButton7Click(TObject *Sender)
{
Form6->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SpeedButton6Click(TObject *Sender)
{
     Edit21->Clear();
	 Edit22->Clear();
	 Edit23->Clear();
	 Edit24->Clear();
	 Edit25->Clear();
	 Edit26->Clear();
	 Edit27->Clear();
	 Edit28->Clear();
	 Edit29->Clear();
	 Edit30->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SpeedButton4Click(TObject *Sender)
{
Edit11->Clear();
	 Edit12->Clear();
	 Edit13->Clear();
	 Edit14->Clear();
	 Edit15->Clear();
	 Edit16->Clear();
	 Edit17->Clear();
	 Edit18->Clear();
	 Edit19->Clear();
	 Edit20->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SpeedButton8Click(TObject *Sender)
{
Form8->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TF_TEAMS::SpeedButton9Click(TObject *Sender)
{
Form8->ShowModal();
}
//---------------------------------------------------------------------------

