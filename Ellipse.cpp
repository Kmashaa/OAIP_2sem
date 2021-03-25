//---------------------------------------------------------------------------

#pragma hdrstop

#include "Ellipse.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
 void Ellips::Show(TCanvas* Canvas)
{
Canvas->Pen->Color=clRed;
Canvas->Ellipse(x1,y1,x1+r1+r1,y1+r2+r2);
}

void Ellips::Hide(TCanvas* Canvas){
Canvas->Pen->Color=clWhite;
Canvas->Ellipse(x1,y1,x1+r1+r1,y1+r2+r2);
}

float Ellips::Perimetr(){
P=abs(4*((3.14*r1*r2+((r1-r2)*(r1-r2)))/(r1+r2)));
return P;
}

float Ellips::Area(){
S=abs(3.14*r1*r2);
return S;
}

float Ellips::CenterOfMassX()
{
	xc = (x1+x1+r1)/2.0;
	return xc;
}

 float Ellips::CenterOfMassY()
 {
	yc = (y1+y1+r2)/2.0;
	return yc;
 }

 void Ellips::MoveC(TCanvas *Canvas, int x, int y)
 {
	Hide(Canvas);
	float difx = x - xc;
	float dify = y - yc;
	x1 += difx;
	x2+=difx;
	y1 += dify;
	y2+=difx;
	Show(Canvas);

 }

void Ellips::Change(TCanvas *Canvas, int t1, int t2)
{
	Hide(Canvas);
	r2 += t1;
	r1 += t2;
	Show(Canvas);
}

void Ellips::Movement(TCanvas *Canvas, int x, int y)
{

	Hide(Canvas);
	x1 += x;
	x2 += x;
	y1 += y;
	y2 += y;
	Show(Canvas);

}

void Ellips::Decrease(TCanvas *Canvas)
{
	if(r1>30&&r2>30)
	{ Hide(Canvas);
	r1 *= 0.9;
	r2 *=0.9;
	Show(Canvas);  }

}

void Ellips::Increase(TCanvas *Canvas)
{
	if(r1<200&&r2<220)
	{
	Hide(Canvas);
	r1 *= 1.1;
	r2 *= 1.1;
	Show(Canvas); }

}

float Ellips::Infor1(){
return r1;
}

 float Ellips::Infor2(){
return r2;
}

