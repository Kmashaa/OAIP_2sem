//---------------------------------------------------------------------------

#pragma hdrstop

#include "Rectangle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Rectang::Show(TCanvas* Canvas)
{
	Canvas->Pen->Color=clRed;
	Canvas->Rectangle(x1,y1,x1+width,y1+height);
}

void Rectang::Hide(TCanvas* Canvas)
{
	Canvas->Pen->Color=clWhite;
	Canvas->Rectangle(x1,y1,x1+width,y1+height);
}

float Rectang::Perimetr()
{
	P=(height+width)*2;
	return P;
}

float Rectang::Area()
{
	S=height*width;
	return S;
}

float Rectang::CenterOfMassX()
{
	xc = (x1+x1+width) / 2.0;
	return xc;
}

 float Rectang::CenterOfMassY()
 {
	yc = (y1+y1+height) / 2.0;
	return yc;
 }

 void Rectang::MoveC(TCanvas *Canvas, int x, int y)
 {
	Hide(Canvas);
	float difx = x - xc;
	float dify = y - yc;
	x1 += difx;
	y1 += dify;
	Show(Canvas);
	xc = x;
	yc = y;
 }

void Rectang::Change(TCanvas *Canvas, int t1, int t2)
{
	Hide(Canvas);
	height += t1;
	width += t2;
	Show(Canvas);
}

void Rectang::Movement(TCanvas *Canvas, int x, int y)
{

	Hide(Canvas);
	x1 += x;
	y1 += y;
	Show(Canvas);

}

void Rectang::Decrease(TCanvas *Canvas)
{


	if(height>80&&width>80)
	{ Hide(Canvas);
	height *= 0.9;
	width *=0.9;
	Show(Canvas);
	}

}

void Rectang::Increase(TCanvas *Canvas)
{
	if(height<500&&width<500)
	{
	Hide(Canvas);
	height *= 1.2;
	width *= 1.2;
	Show(Canvas);
	}

}

float Rectang::Infow(){
float wid=width;
return wid;
}

float Rectang::Infoh(){
float hei=height;
return hei;
}
