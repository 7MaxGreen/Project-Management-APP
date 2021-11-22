//---------------------------------------------------------------------------

#ifndef FTASKH
#define FTASKH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TTASK : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel2;
	TLabel *Label1;
	TLabel *Label2;
	TImage *Image8;
	TPanel *Panel1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPanel *Panel3;
	TPanel *Panel4;
	TEdit *Edit11;
	TEdit *Edit8;
	TEdit *Edit10;
	TEdit *Edit7;
	TEdit *Edit9;
	TEdit *Edit6;
	TEdit *Edit5;
	TEdit *Edit4;
	TImage *Image3;
	TSpeedButton *SpeedButton1;
	TDateTimePicker *DateTimePicker2;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit2;
	TEdit *Edit1;
	TLabel *Label6;
	TPanel *Panel5;
	TImage *Image1;
	TSpeedButton *SpeedButton2;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label10;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TEdit *Edit19;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TEdit *Edit20;
	TEdit *Edit21;
	TEdit *Edit22;
	TPanel *Panel6;
	TPanel *Panel7;
	TPanel *Panel8;
	TDBGrid *DBGrid1;
	TImage *Image2;
	TPanel *Panel9;
	TPanel *Panel10;
	TPanel *Panel11;
	TDBGrid *DBGrid2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TImage *Image4;
	TImage *Image5;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TEdit *Edit23;
	TImage *Image6;
	TEdit *Edit24;
	TPanel *Panel12;
	TSpeedButton *SpeedButton7;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TSpeedButton *SpeedButton9;
	TEdit *Edit35;
	TEdit *Edit36;
	TSpeedButton *SpeedButton8;
	TDBGrid *DBGrid3;
	TSpeedButton *SpeedButton10;
	TEdit *Edit25;
	TSpeedButton *SpeedButton11;
	TEdit *Edit3;
	TSpeedButton *SpeedButton13;
	TEdit *Edit26;
	TSpeedButton *SpeedButton14;
	TTimer *Timer1;
	TLabel *Label5;
	TLabel *Label9;
	TImage *Image7;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTASK(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTASK *TASK;
//---------------------------------------------------------------------------
#endif
