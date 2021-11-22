//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FSEARCH.h"
#include "F_DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Edit1Change(TObject *Sender)
{
AnsiString s;
s="SELECT E.*,E.NAME AS ENTITIES,PS.*,P.*,P.NAME AS PROJECT,S.*,S.NAME AS SOLUTION,C.*, C.COMPANY_NAME AS COMPANY,C.COMPANY_REPRESENTATIVE AS REPRESENTATIVE,C.PHONE AS PHONE,C.EMAIL AS EMAIL,I.*,I.COMPANY_NAME AS INTERMEDIARY,I.COMPANY_REPRESENTATIVE AS I_REPRESENTATIVE,I.PHONE AS I_PHONE,I.EMAIL AS I_EMAIL,";
s=s+" PM.*,PM.PROJECT_START_DATE AS START , PM.PROJECT_END_DATE AS FINISH";
s=s+" FROM SOLUTION S INNER JOIN PROJECT_MANAGEMENT PM ON S.SOLUTION_ID=PM.SOLUTION_ID";
				s=s+" INNER JOIN PROJECT_STATUS PS ON PS.PROJECT_STATUS_ID=PM.PROJECT_STATUS_ID";
				s=s+" INNER JOIN PROJECT P ON P.PROJECT_ID=PM.PROJECT_ID";
				s=s+" INNER JOIN CLIENT C ON C.CLIENT_ID=PM.CLIENT_ID";
				s=s+" INNER JOIN INTERMEDIARY I ON I.INTERMEDIARY_ID=PM.INTERMEDIARY_ID";
				s=s+" INNER JOIN ENTITIES E ON E.ENTITIES_ID=I.ENTITIES_ID where";
				 s=s+" P.NAME LIKE '"+Edit1->Text+"%'  ";
				 s=s+" ORDER BY PROJECT";
DM->QPM->Close();
DM->QPM->SQL->Clear();
DM->QPM->SQL->Add(s);
DM->QPM->Open();
}

//---------------------------------------------------------------------------
