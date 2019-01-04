//---------------------------------------------------------------------------

#ifndef uMainH
#define uMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.Menus.hpp>
#include "uDonate.h"
//---------------------------------------------------------------------------
class TuMainForm : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnPause;
	TImage *Image1;
	TTimer *Timer1;
	TEdit *ColorOutput;
	TImage *Image2;
	TPanel *Panel1;
	TImage *Image3;
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TPanel *Panel2;
	TLabel *Label4;
	TMainMenu *MainMenu1;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *Btn1Large;
	TMenuItem *Btn2Large;
	TMenuItem *Btn4Large;
	TMenuItem *N8;
	TMenuItem *N9;
	void __fastcall BtnPauseClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall Btn1LargeClick(TObject *Sender);
	void __fastcall Btn2LargeClick(TObject *Sender);
	void __fastcall Btn4LargeClick(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);

    
private:	// User declarations
   void __fastcall GetColor();

public:		// User declarations
	__fastcall TuMainForm(TComponent* Owner);

    typedef struct
    {
      int iOntopState;
      int iLarge;
    } AppCtrl;
   AppCtrl appCtrl;
   
};
//---------------------------------------------------------------------------
extern PACKAGE TuMainForm *uMainForm;
//---------------------------------------------------------------------------
#endif
