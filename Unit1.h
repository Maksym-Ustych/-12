//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>

//---------------------------------------------------------------------------

class TForm1 : public TForm
{
__published:	// IDE-managed Components

	// --- Основні вкладки ---
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TTabSheet *TabSheet7; // ✅ Додаткова вкладка

	// --- Зображення ---
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8; // ✅ Для додаткового завдання

	// --- Панелі та елементи керування ---
	TPanel *Panel1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TRadioGroup *RadioGroup1;

	TPanel *Panel2;
	TButton *Button5;
	TButton *Button6;

	TPanel *Panel3;
	TButton *Button7;
	TButton *Button8;

	TPanel *Panel4;
	TButton *Button9;
	TButton *Button10;

	TPanel *Panel5;
	TLabel *LabelPixels;
	TLabel *LabelPen;

	TPanel *Panel6;
	TButton *Button11;
	TButton *Button12;
	TTimer *Timer1;

	// --- Перо і пензель ---
	TPanel *Panel7;
	TButton *Button13;
	TButton *Button14;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TRadioGroup *RadioGroup4;

	// --- Додаткове завдання ---
	TPanel *Panel8;
	TButton *Button15;
	TButton *Button16;

	// --- Події ---
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);

	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);
	void __fastcall RadioGroup1Click(TObject *Sender);

	// --- Перо і пензель ---
	void __fastcall RadioGroup2Click(TObject *Sender);
	void __fastcall RadioGroup3Click(TObject *Sender);
	void __fastcall RadioGroup4Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);

	// --- Додаткове завдання ---
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);

private:	// User declarations

public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
