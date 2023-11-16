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
		monDMXTCP.ModifierCanal(2,255-ScrollBar2->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(3,255-ScrollBar3->Position);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar5Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,255-ScrollBar5->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,255-ScrollBar4->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar6Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(6,255-ScrollBar6->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar7Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(7,255-ScrollBar7->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar8Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(8,255-ScrollBar8->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FullOffClick(TObject *Sender)
{
	monDMXTCP.FullOff();
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar1->Position = 255;
	ScrollBar2->Position = 255;
	ScrollBar3->Position = 255;
	ScrollBar4->Position = 255;
	ScrollBar5->Position = 255;
	ScrollBar6->Position = 255;
	ScrollBar7->Position = 255;
	ScrollBar8->Position = 255;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FullOnClick(TObject *Sender)
{
	monDMXTCP.FullOn();
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar1->Position = 0;
	ScrollBar2->Position = 0;
	ScrollBar3->Position = 0;
	ScrollBar4->Position = 0;
	ScrollBar5->Position = 0;
	ScrollBar6->Position = 0;
	ScrollBar7->Position = 0;
	ScrollBar8->Position = 0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::DemoClick(TObject *Sender)
{
	if (Demo->Caption == "Demo") {

	Demo->Caption = "Stop";
	Timer1->Enabled = false;
		}
	else if (Demo->Caption == "Stop" ) {
	Demo->Caption = "Demo";
	Timer1->Enabled = true;

		 };
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	monDMXTCP.Demonstration();
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
}
//---------------------------------------------------------------------------





void __fastcall TForm1::violetClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,25);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-25;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::rougeClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,15);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-15;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::vertClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,133);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-133;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bleuClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,122);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-122;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blancClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,192);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-192;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PointClick(TObject *Sender)
{
	 monDMXTCP.ModifierCanal(5,6);
	 monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	 ScrollBar5->Position = 255-6;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rondtorsadeClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,18);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-18;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::rondrayeClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,32);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-32;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fleurClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,45);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-45;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::briocheClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,58);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-58;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::doucheClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,71);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-71;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pissenlitClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,84);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-84;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::beachClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,98);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-98;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::badgeClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,110);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-110;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::metalClick(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,123);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-123;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar3Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(3,TrackBar3->Position);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar3->Position = 255-TrackBar3->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar2Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(4,TrackBar2->Position);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar4->Position = 255-TrackBar2->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
	monDMXTCP.ModifierCanal(5,TrackBar1->Position);
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
	ScrollBar5->Position = 255-TrackBar1->Position;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	click = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	if (click == 1) {
		Image1->Left += X - Image1->Width/2;
		Image1->Top += Y - Image1->Height/2;

	if (Image1->Left < Bevel1->Left) {
		Image1->Left = Bevel1->Left;
	};
	if (Image1->Top < Bevel1->Top) {
		Image1->Top = Bevel1->Top;
	};
	if (Image1->Left > Bevel1->Left + Bevel1->Width - Image1->Width) {
		Image1->Left = Bevel1->Left + Bevel1->Width - Image1->Width;
	};
	if (Image1->Top > Bevel1->Top + Bevel1->Height - Image1->Height) {
		Image1->Top = Bevel1->Top + Bevel1->Height - Image1->Height;
	};
	ScrollBar1->Position = 0 - Bevel1->Left + Image1->Left;
	ScrollBar2->Position = 0 - Bevel1->Top + Image1->Top;
	monDMXTCP.Envoyer((AnsiString(Edit1->Text).c_str()),4123);
    };
}
//---------------------------------------------------------------------------

