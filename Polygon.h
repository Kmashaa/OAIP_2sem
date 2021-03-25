//---------------------------------------------------------------------------

#ifndef PolygonH
#define PolygonH
//---------------------------------------------------------------------------
#endif
  #include <vcl.h>
#include "Figure.h"

class Polyg : public Figure
{ private:
	  
  public:  int x2, x3, x4, x5;
	  int y2, y3, y4, y5;
	 Polyg(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3, int xt4,
				 int yt4, int xt5, int yt5) : Figure(xt1, yt1)
	 {
		  x2 = xt2;
		  y2 = yt2;
		  x3 = xt3;
		  y3 = yt3;
		  x4 = xt4;
		  y4 = yt4;
		  x5 = xt5;
		  y5 = yt5;
	 }

	 void Show(TCanvas *Canvas);

	 void Hide(TCanvas *Canvas);

	 float Sides(int x1, int y1, int x2, int y2);

	 float Perimetr();

	 float Area();

	 float CenterOfMassX();

	 float CenterOfMassY();

	 void MoveC(TCanvas *Canvas, int x, int y);

	 void Change(TCanvas *Canvas, int t1, int t2, int t3, int t4, int t5);

	 void Movement(TCanvas *Canvas, int x, int y);

	 void Increase(TCanvas *Canvas);

	 void Decrease(TCanvas *Canvas);
};