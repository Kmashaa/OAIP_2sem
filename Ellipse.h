//---------------------------------------------------------------------------

#ifndef EllipseH
#define EllipseH
//---------------------------------------------------------------------------
#endif
 #include <vcl.h>
#include <Figure.h>

class Ellips:public Figure{
protected:
	int x2, y2,r1,r2;
public: Ellips(int x, int y, int x2n, int y2n):Figure(x,y)
	{
		x2=x2n;
		y2=y2n;
		r1=abs((x2-x1)/2.0);
		r2=abs((y2-y1)/2.0);
	}
	void Show(TCanvas* Canvas);
	void Hide(TCanvas* Canvas);

	float Perimetr();

	float Area();

	float CenterOfMassX();

	float CenterOfMassY();

	void MoveC(TCanvas *Canvas, int x, int y);

	void Change(TCanvas *Canvas, int t1, int t2);

	void Movement(TCanvas *Canvas, int x, int y);

	void Increase(TCanvas *Canvas);

	void Decrease(TCanvas *Canvas);

	float Infor1();
    float Infor2();
	~Ellips(){};
};