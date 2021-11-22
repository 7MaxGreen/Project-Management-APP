//---------------------------------------------------------------------------

#ifndef F_DMH
#define F_DMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MSSQL.hpp>
#include <FireDAC.Phys.MSSQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *FDConnection1;
	TFDQuery *QEDIT;
	TDataSource *DSQEDIT;
	TFDQuery *QTEAMS;
	TDataSource *DSQTEAMS;
	TFDQuery *QPM;
	TDataSource *DSQPM;
	TFDQuery *QP_T;
	TDataSource *DSQP_T;
	TFDQuery *QLIBER;
	TFDQuery *QTASK;
	TDataSource *DSQTASK;
	TFDQuery *FDQuery1;
	TFDQuery *QDEP;
	TDataSource *DSQDEP;
	TFDQuery *QFUN;
	TDataSource *DSQFUN;
	TFDQuery *QACC;
	TDataSource *DSQACC;
	TFDQuery *QPRIOR;
	TFDQuery *QTYPE;
	TDataSource *DSQPRIOR;
	TDataSource *DSQTYPE;
	TFDQuery *QSTATUS;
	TFDQuery *QINTERMEDIARY;
	TFDQuery *QDENTITIES;
	TFDQuery *QSOLUTION;
	TDataSource *DSQSTATUS;
	TDataSource *DSINTERMEDIARY;
	TDataSource *DSENTITIES;
	TDataSource *DSSOLUTION;
	TfrxReport *frxReport1;
	TfrxDBDataset *frxDBDataset1;
private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
