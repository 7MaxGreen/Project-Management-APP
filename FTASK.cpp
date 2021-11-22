//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FTASK.h"
#include "F_DM.h"
#include "FAUTHENTIFICATION.h"
#include "fRECEPETION.h"
#include "FTEAMS.h"
#include "Unit1.h"
#include "FP_T.h"
#include "fprior.h"
#include "FTYPE.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTASK *TASK;
TDateTime DT;
//---------------------------------------------------------------------------
__fastcall TTASK::TTASK(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TTASK::SpeedButton1Click(TObject *Sender)
{

  DM->QP_T->Close();
  DM->QP_T->Open();
  Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTASK::FormShow(TObject *Sender)
{
 DM->QTEAMS->Close();
 DM->QTEAMS->Open();

}
//---------------------------------------------------------------------------

void __fastcall TTASK::SpeedButton3Click(TObject *Sender)
{
 F_TEAMS->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTASK::SpeedButton5Click(TObject *Sender)
{
Edit19->Text=DM->QTEAMS->FieldByName("NAME")->AsString;
Edit18->Text=DM->QTEAMS->FieldByName("SURNAME")->AsString;
Edit17->Text=DM->QTEAMS->FieldByName("USERNAME")->AsString;
Edit16->Text=DM->QTEAMS->FieldByName("EMAIL")->AsString;
Edit15->Text=DM->QTEAMS->FieldByName("FUNCTIE")->AsString;
Edit14->Text=DM->QTEAMS->FieldByName("PHONE")->AsString;
Edit13->Text=DM->QTEAMS->FieldByName("DEPARTMENT")->AsString;
Edit12->Text=DM->QTEAMS->FieldByName("IDNP")->AsString;

}
//---------------------------------------------------------------------------

void __fastcall TTASK::SpeedButton10Click(TObject *Sender)
{
 DM->QLIBER->SQL->Clear();
 DM->QLIBER->SQL->Add("INSERT INTO TASK(EMPLOYEE_ID,PROJECT_MANAGEMENT_ID,TASK_STATUS_ID,TASK_PRIORITY_ID,NAME,DATE_START,DATE_FINISH,COMMENTS)");

DM->QLIBER->ParamByName("EMPLOYEE_ID")->AsInteger=DM->QTASK->FieldByName("EMPLOYEE_ID")->AsInteger;
DM->QLIBER->ParamByName("PROJECT_MANAGEMENT_ID")->AsInteger=DM->QTASK->FieldByName("PROJECT_MANAGEMENT_ID")->AsInteger;
DM->QLIBER->ParamByName("TASK_STATUS_ID")->AsInteger=DM->QTASK->FieldByName("TASK_STATUS_ID")->AsInteger;
DM->QLIBER->ParamByName("TASK_PRIORITY_ID")->AsInteger=DM->QTASK->FieldByName("TASK_PRIORITY_ID")->AsInteger;
DM->QLIBER->ExecSQL();
DM->QLIBER->SQL->Clear();



DM->QLIBER->ParamByName("PROJECT")->AsString=Edit23->Text;
DM->QLIBER->ParamByName("TASK")->AsString=Edit22->Text;
DM->QLIBER->ParamByName("TASK_TYPE")->AsString=Edit21->Text;
DM->QLIBER->ParamByName("COMMENTS")->AsString=Edit20->Text;
DM->QLIBER->ParamByName("NAME")->AsString=Edit19->Text;
DM->QLIBER->ParamByName("SURNAME")->AsString=Edit18->Text;

DM->QLIBER->ExecSQL();
DM->QLIBER->SQL->Clear();
//Edit13->Text=DM->QTASK->FieldByName("DEPARTMENT")->AsString;

}
//---------------------------------------------------------------------------

void __fastcall TTASK::Timer1Timer(TObject *Sender)
{
Label5->Caption = DT.CurrentTime();
Label9->Caption = DT.CurrentDate();
}
//---------------------------------------------------------------------------



void __fastcall TTASK::SpeedButton11Click(TObject *Sender)
{
 DM->QPRIOR->Close();
 DM->QPRIOR->Open();
  DM->QTYPE->Close();
 DM->QTYPE->Open();
Form9->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTASK::SpeedButton12Click(TObject *Sender)
{
 DM->QTYPE->Close();
 DM->QTYPE->Open();
Form11->ShowModal();
}
//---------------------------------------------------------------------------

