//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Stack.h"
#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Stack st;
HashTable ht;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	srand(time(nullptr));
	for(int i = 0; i < 20; i++)
	{
		ht.add(rand()%100, rand()%100);
    }

	ht.count.clear();
	for(int i = 0; i < ht.size; i++)
	{
		String temp = IntToStr(i) + " : " + ht.show(i);
		Memo1->Lines->Add(temp);
	}

	Memo1->Lines->Add("");
	Memo1->Lines->Add(ht.task());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ht.count.clear();
	Memo1->Clear();
	ht.add(StrToInt(Edit1->Text), StrToInt(Edit2->Text));

	for(int i = 0; i < ht.size; i++)
	{
		String temp = IntToStr(i) + " : " + ht.show(i);
		Memo1->Lines->Add(temp);
	}

	Memo1->Lines->Add("");
	Memo1->Lines->Add(ht.task());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ht.count.clear();
	Memo1->Clear();
	ht.remove(StrToInt(Edit1->Text));

	for(int i = 0; i < ht.size; i++)
	{
		String temp = IntToStr(i) + " : " + ht.show(i);
		Memo1->Lines->Add(temp);
	}

	Memo1->Lines->Add("");
	Memo1->Lines->Add(ht.task());
}
//---------------------------------------------------------------------------
