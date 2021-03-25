//---------------------------------------------------------------------------

#pragma hdrstop

#include "Polygon.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Polyg::Show (TCanvas* Canvas)
 {
	  Canvas->Pen->Color=clRed;
	  Canvas->MoveTo(x1,y1);
	  Canvas->LineTo(x2,y2);
	  Canvas->LineTo(x3,y3);
	  Canvas->LineTo(x4,y4);
	  Canvas->LineTo(x5,y5);
	  Canvas->LineTo(x1,y1);
 }

 void Polyg::Hide(TCanvas *Canvas)
 {
	  Canvas->Pen->Color=clWhite;
      Canvas->MoveTo(x1,y1);
	  Canvas->LineTo(x2,y2);
	  Canvas->LineTo(x3,y3);
	  Canvas->LineTo(x4,y4);
	  Canvas->LineTo(x5,y5);
	  Canvas->LineTo(x1,y1);
 }

 float Polyg::Sides(int x1, int y1, int x2, int y2)
 {   float side = sqrt(pow(abs(x2-x1),2) + pow(abs(y2-y1),2));
	 return side;
 }

 float Polyg::Perimetr()
 {
	  float side1 = Sides(x1, y1, x2, y2);
	  float side2 = Sides(x2, y2, x3, y3);
	  float side3 = Sides(x3, y3, x4, y4);
	  float side4 = Sides(x4, y4, x5, y5);
	  float side5 = Sides(x5, y5, x1, y1);
	  P = side1 + side2 + side3 + side3 + side4 + side5;
	  return P;
 }

 float Polyg::Area()
 {
	  S = 0.5 * abs(x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1
						  - x2*y1 - x3*y2 -x4*y3 - x5*y4 - x1*y5);
      return S;
 }

 float Polyg::CenterOfMassX()
 {
	 xc = (x1+x2+x3+x4+x5) / 5.0;
	 return xc;
 }

 float Polyg::CenterOfMassY()
 {
	 yc = (y1+y2+y3+y4+y5) / 5.0;
	 return yc;
 }

 void Polyg::MoveC(TCanvas *Canvas, int x, int y)
	 {
		  Hide(Canvas);
		  float difx = x - xc;
		  float dify = y - yc;
		  x1 += difx;
		  x2 += difx;
		  x3 += difx;
		  x4 += difx;
		  x5 += difx;
		  y1 += dify;
		  y2 += dify;
		  y3 += dify;
		  y4 += dify;
		  y5 += dify;
		  Show(Canvas);
	 }

void Polyg::Change(TCanvas *Canvas, int t1, int t2, int t3, int t4, int t5)
{
	  Hide(Canvas);
	  x1 += t1;
	  x2 += t2;
	  x3 += t3;
	  x4 += t4;
	  x5 += t5;
	  y1 += t1;
	  y2 += t2;
	  y3 += t3;
	  y4 += t4;
	  y5 += t5;
	  Show(Canvas);
}

void Polyg::Movement(TCanvas *Canvas, int x, int y)
{
	 if(y5 < 700)
	 {
	 Hide(Canvas);
	 x1 += x;
	 x2 += x;
	 x3 += x;
	 x4 += x;
	 x5 += x;
	 y1 += y;
	 y2 += y;
	 y3 += y;
	 y4 += y;
	 y5 += y;
	 Show(Canvas);
	 }
}

void Polyg::Decrease(TCanvas *Canvas)
{
	if(y3>y2+80)
	{
	Hide(Canvas);
	x2 *= 0.9;
	x3 *= 0.9;
	y3 *= 0.9;
	x4 *= 0.9;
	y4 *= 0.9;
	y5 *= 0.9;
	Show(Canvas); }

}

void Polyg::Increase(TCanvas *Canvas)
{
	if(y3<y2+400){
	Hide(Canvas);
	x2 *= 1.1;
	x3 *= 1.1;
	y3 *= 1.1;
	x4 *= 1.1;
	y4 *= 1.1;
	y5 *= 1.1;
	Show(Canvas);}

}