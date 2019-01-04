//---------------------------------------------------------------------------

#ifndef uDonateH
#define uDonateH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

//---------------------------------------------------------------------------
class TuDonateForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLinkLabel *LinkLabel1;
	TGroupBox *GroupBox1;
private:	// User declarations
public:		// User declarations
	__fastcall TuDonateForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TuDonateForm *uDonateForm;
//---------------------------------------------------------------------------
#endif
