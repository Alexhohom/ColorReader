//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TuMainForm *uMainForm;

//---------------------------------------------------------------------------
__fastcall TuMainForm::TuMainForm(TComponent* Owner)
	: TForm(Owner)
{
  GetColor();
  appCtrl.iOntopState = 0;
  appCtrl.iLarge = 4;
}
//---------------------------------------------------------------------------
void __fastcall TuMainForm::BtnPauseClick(TObject *Sender)
{
  if (Timer1->Enabled == true)
  {
    Timer1->Enabled = false;
    BtnPause->Caption = L"»Ö¸´";
  }
  else
  {
    Timer1->Enabled = true;
    BtnPause->Caption = L"ÔÝÍ£";
  }

}
//---------------------------------------------------------------------------
void __fastcall TuMainForm::Timer1Timer(TObject *Sender)
{
  HDC hDC = GetWindowDC(NULL); //»ñÈ¡ÆÁÄ»DC

  TPoint Pos = Mouse->CursorPos;
  COLORREF nColor = GetPixel(hDC, Pos.x, Pos.y);
  ReleaseDC(NULL, hDC);

  BYTE R = GetRValue(nColor);
  BYTE G = GetGValue(nColor);
  BYTE B = GetBValue(nColor);
  String sRGB;
  sRGB.sprintf(L"R:%d, G:%d, B:%d", R, G, B);
  ColorOutput->Text = sRGB;

  Image2->Canvas->Brush->Color = TColor(RGB(R,G,B));
  Image2->Canvas->FillRect((Rect)(0,0,Image2->Width,Image2->Height));

  int x,y;

  if(Pos.x >Screen->Width - (Image2->Width/appCtrl.iLarge))
    x=Screen->Width - (Image2->Width/appCtrl.iLarge);
  else if(Pos.x <(Image2->Width/appCtrl.iLarge/2))
    x=0;
  else
    x=Pos.x-(Image2->Width/appCtrl.iLarge/2);
  if(Pos.y >Screen->Height-(Image2->Height/appCtrl.iLarge))
    y=Screen->Height-(Image2->Height/appCtrl.iLarge);
  else if(Pos.y <(Image2->Height/appCtrl.iLarge/2))
    y=0;
  else
    y=Pos.y-(Image2->Height/appCtrl.iLarge/2);

  Image1->Canvas->FillRect((Rect)(0,0,Image1->Width,Image1->Height));
  
  StretchBlt(Image1->Canvas->Handle, 0, 0,Image1->Width,Image1->Height, GetDC(0), x, y, (Image2->Width/appCtrl.iLarge), (Image2->Height/appCtrl.iLarge), SRCCOPY);
  Image1->Canvas->Pen->Color = clRed;
  Image1->Canvas->MoveTo(0,(Image1->Height)/2);
  Image1->Canvas->LineTo(Image1->Width,(Image1->Height)/2);
  Image1->Canvas->MoveTo((Image1->Width)/2,0);
  Image1->Canvas->LineTo((Image1->Width)/2,Image1->Height);
}
//---------------------------------------------------------------------------





void __fastcall TuMainForm::GetColor()
{
  int R,G,B, iWidth, iHeigth;
  iWidth = Image3->Width;
  iHeigth = Image3->Height;
  R = ScrollBar1->Position;
  G = ScrollBar2->Position;
  B = ScrollBar3->Position;
  Label1->Caption = L"R: "+ IntToStr(R);
  Label2->Caption = L"G: "+ IntToStr(G);
  Label3->Caption = L"B: "+ IntToStr(B);
  TColor cImage3 = TColor(RGB(R,G,B));;
  Image3->Canvas->Brush->Color = cImage3;
  Image3->Canvas->FillRect((Rect)(0,0,iWidth,iHeigth));
}

void __fastcall TuMainForm::ScrollBar1Change(TObject *Sender)
{
  GetColor();
}
//---------------------------------------------------------------------------

void __fastcall TuMainForm::FormResize(TObject *Sender)
{
//  uMainForm->Width =  400;
//  uMainForm->Height = 350;
//PopupMenu1->Popup(Mouse->CursorPos.x,Mouse->CursorPos.y);
  return;
}
//---------------------------------------------------------------------------











void __fastcall TuMainForm::N5Click(TObject *Sender)
{
  if (appCtrl.iOntopState == 0)
  {
    uMainForm->FormStyle = fsStayOnTop;
    N5->Checked = true;
    appCtrl.iOntopState = 1;
  }
  else
  {
    uMainForm->FormStyle = fsNormal;
    N5->Checked = false;
    appCtrl.iOntopState = 0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TuMainForm::Btn1LargeClick(TObject *Sender)
{
  Btn1Large->Checked = true;
  Btn4Large->Checked = false;
  Btn2Large->Checked = false;
  appCtrl.iLarge = 1;
}
//---------------------------------------------------------------------------


void __fastcall TuMainForm::Btn2LargeClick(TObject *Sender)
{
  Btn2Large->Checked = true;
  Btn4Large->Checked = false;
  Btn1Large->Checked = false;
  appCtrl.iLarge = 2;
}
//---------------------------------------------------------------------------

void __fastcall TuMainForm::Btn4LargeClick(TObject *Sender)
{
  Btn4Large->Checked = true;
  Btn1Large->Checked = false;
  Btn2Large->Checked = false;
  appCtrl.iLarge = 4;
}
//---------------------------------------------------------------------------


void __fastcall TuMainForm::N8Click(TObject *Sender)
{
  ShowMessage("v1.0");
}
//---------------------------------------------------------------------------

void __fastcall TuMainForm::N9Click(TObject *Sender)
{
  if (uDonateForm == NULL)
    Application->CreateForm(__classid(TuDonateForm), &uDonateForm);


  uDonateForm->ShowModal();
}
//---------------------------------------------------------------------------

