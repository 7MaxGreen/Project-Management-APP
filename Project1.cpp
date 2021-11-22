//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("FTEAMS.cpp", F_TEAMS);
USEFORM("FTASK.cpp", TASK);
USEFORM("FSEARCH.cpp", Form10);
USEFORM("F_DM.cpp", DM); /* TDataModule: File Type */
USEFORM("Unit1.cpp", FMAIN);
USEFORM("FRECEPTION.cpp", Form2);
USEFORM("FDEP.cpp", Form6);
USEFORM("FAUTHENTIFICATION.cpp", Form4);
USEFORM("FACC.cpp", Form8);
USEFORM("FFUN.cpp", Form7);
USEFORM("fRECEPETION.cpp", Form3);
USEFORM("FP_T.cpp", Form5);
USEFORM("fprior.cpp", Form9);
USEFORM("FTYPE.cpp", Form11);
USEFORM("FP_DETAILS.cpp", Form12);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFMAIN), &FMAIN);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(TTASK), &TASK);
		Application->CreateForm(__classid(TF_TEAMS), &F_TEAMS);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->CreateForm(__classid(TForm12), &Form12);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
