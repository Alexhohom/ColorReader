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

  Label1->Caption = L"������������ϵ����,Alexhohom";
  Label2->Caption = L"����: ";
  LinkLabel1->Caption = L"alexhohom@gmail.com";
}
//---------------------------------------------------------------------------

