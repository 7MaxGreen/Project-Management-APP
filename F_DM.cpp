//---------------------------------------------------------------------------


#pragma hdrstop

#include "F_DM.h"
#include "FTASK.h"
#include "FAUTHENTIFICATION.h"
#include "fRECEPETION.h"
#include "FTEAMS.h"
#include "Unit1.h"
#include "FACC.h"
#include "FDEP.h"
#include "FFUN.h"
#include "FP_T.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TDM *DM;
//---------------------------------------------------------------------------
__fastcall TDM::TDM(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------


