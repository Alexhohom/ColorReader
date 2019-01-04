//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uDonate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TuDonateForm *uDonateForm;
//---------------------------------------------------------------------------
__fastcall TuDonateForm::TuDonateForm(TComponent* Owner)
	: TForm(Owner)
{

  Label1->Caption = L"如有问题请联系作者,Alexhohom";
  Label2->Caption = L"邮箱: ";
  LinkLabel1->Caption = L"alexhohom@gmail.com";
}
//---------------------------------------------------------------------------

