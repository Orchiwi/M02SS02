//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	monDMXTCP.Envoyer(AnsiString(Edit1->Text).c_str(),4123);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
		 monDMXTCP.ModifierCanal(1,255-ScrollBar1->Position);
}
//---------------------------------------------------------------------------



