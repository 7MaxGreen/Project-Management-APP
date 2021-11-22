//---------------------------------------------------------------------------

#ifndef FTEAMSH
#define FTEAMSH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TF_TEAMS : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *NEW;
	TTabSheet *EDIT;
	TPanel *Panel3;
	TLabel *Label4;
	TImage *Image3;
	TImage *Image4;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TEdit *Edit19;
	TEdit *Edit20;
	TDBGrid *DBGrid2;
	TPanel *Panel4;
	TImage *Image5;
	TPanel *Panel5;
	TLabel *Label9;
	TImage *Image6;
	TImage *Image7;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TEdit *Edit21;
	TEdit *Edit22;
	TEdit *Edit23;
	TEdit *Edit24;
	TEdit *Edit25;
	TEdit *Edit26;
	TEdit *Edit27;
	TEdit *Edit28;
	TEdit *Edit29;
	TEdit *Edit30;
	TDBGrid *DBGrid3;
	TPanel *Panel6;
	TImage *Image9;
	TSpeedButton *S;
	TLabel *Label1;
	TImage *Image1;
	TSpeedButton *SpeedButton1;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SClick(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TF_TEAMS(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TF_TEAMS *F_TEAMS;
//---------------------------------------------------------------------------
#endif
