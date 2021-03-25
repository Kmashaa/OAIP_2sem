//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Circle.h"
#include "Square.h"
#include "Polygon.h"
TForm1 *Form1;
Rectang Rec(100,100,50,60);
Ellips El(50,50,200,100);
Circl Circ(50,50,50);
Squar Sq(100,100,50);
Polyg P(100,100,200,100,500,200,300,400,100,300);
int choise;
bool move = false;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Rec.Show(Canvas);
 choise=1;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
switch (choise){
	case 1: Rec.Hide(Canvas);
		break;
	case 2: El.Hide(Canvas);
		break;
	case 3: Circ.Hide(Canvas);
		break;
	case 4: Sq.Hide(Canvas);
		break;
	case 5: P.Hide(Canvas);
		break;
}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
switch (choise){
	case 1:
	Label1->Caption="P="+String(Rec.Perimetr())+
					"\nS="+String(Rec.Area())+
					"\n1-st side="+String(Rec.Infoh())+
					"\n2-d side="+String(Rec.Infow()); break;
	case 2:
	Label1->Caption="P="+String(El.Perimetr())+
					"\nS="+String(El.Area())+
					"\nr1="+String(El.Infor1())+
					"\nr2="+String(El.Infor2()); break;
	case 3:
	Label1->Caption="P="+String(Circ.Perimetr())+
					"\nS="+String(Circ.Area())+
					"\nr="+String(Circ.Infor1()); break;
	case 4:
	Label1->Caption="P="+String(Sq.Perimetr())+
					"\nS="+String(Sq.Area())+
					"\nside="+String(Sq.InfoS()); break;
	case 5:
	Label1->Caption="P="+String(P.Perimetr())+
					"\nS="+String(P.Area()); break;
 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
switch (choise)
{
	case 1:
	Rec.MoveC(Canvas,10,10); break;
	case 2:
	El.MoveC(Canvas,10,10); break;
	case 3:
	Circ.MoveC(Canvas,10,10); break;
	case 4:
	Sq.MoveC(Canvas,10,10); break;
	case 5:
	P.MoveC(Canvas,10,10); break;   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
switch (choise)
{
	case 1:
	Rec.Change(Canvas,20,15); break;
	case 2:
	El.Change(Canvas,20,5);break;
	case 3:
	Circ.Change(Canvas,10,10);break;
	case 4:
	Sq.Change(Canvas,15,15); break;
	case 5:
	P.Change(Canvas,15,20,45,10,5); break;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
switch (choise)
{
	case 1:
	Rec.Movement(Canvas,15,15); break;
	case 2:
	El.Movement(Canvas,15,15);break;
	case 3:
	Circ.Movement(Canvas,15,15);break;
	case 4:
	Sq.Movement(Canvas,15,15); break;
	case 5:
	P.Movement(Canvas,15,15); break;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Timer1->Enabled=false;
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
Timer2->Enabled=false;
Timer1->Enabled=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
switch (choise){
	case 1:
	Rec.Decrease(Canvas); break;
	case 2:
	El.Decrease(Canvas); break;
	case 3:
	Circ.Decrease(Canvas); break;
	case 4:
	Sq.Decrease(Canvas); break;
	case 5:
	P.Decrease(Canvas); break;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
Timer1->Enabled=false;
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
switch (choise){
	case 1:
	Rec.Increase(Canvas);break;
	case 2:
	El.Increase(Canvas);break;
	case 3:
	Circ.Increase(Canvas);break;
	case 4:
	Sq.Increase(Canvas);break;
	case 5:
	P.Increase(Canvas);break;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
El.Show(Canvas);
choise=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
   Circ.Show(Canvas);
   choise=3;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button12Click(TObject *Sender)
{
Sq.Show(Canvas);
choise=4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
  P.Show(Canvas);
  choise=5;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
    move = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
    move = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	if(move==true)
	{ if(choise==1)
		{
		Rec.Hide(Canvas);
		Rec.x1 = X;
		Rec.y1 = Y;
		Rec.Show(Canvas);
		}

	else if(choise==2)
	{   El.Hide(Canvas);
		El.x1 = X;
		El.y1 = Y;
		El.Show(Canvas);
	}
	else if(choise==3)
	{
	Circ.Hide(Canvas);
		Circ.x1 = X;
		Circ.y1 = Y;
		Circ.Show(Canvas);
	}
	else if(choise==4)
	{
		Sq.Hide(Canvas);
		Sq.x1 = X;
		Sq.y1 = Y;
		Sq.Show(Canvas);
	}
	else if (choise==5)
	{
		P.Hide(Canvas);
		float difx=X-P.x1;
		float dify=Y-P.y1;
		P.x1 = X;
		P.y1 = Y;
		P.x2 += difx;
		P.y2 += dify;
		P.x3 += difx;
		P.y3 += dify;
		P.x4 += difx;
		P.y4 += dify;
		P.x5 += difx;
		P.y5 += dify;
		P.Show(Canvas);
	}
}
}
//---------------------------------------------------------------------------

