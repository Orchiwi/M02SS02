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
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
		 monDMXTCP.ModifierCanal(1,255-ScrollBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
		monDMXTCP.ModifierCanal(1,255-ScrollBar2->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar3->Position);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar5Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar5->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar4->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar6Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar6->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar7Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar7->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar8Change(TObject *Sender)
{
monDMXTCP.ModifierCanal(1,255-ScrollBar8->Position);
}
//---------------------------------------------------------------------------

