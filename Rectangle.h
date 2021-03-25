//---------------------------------------------------------------------------

#ifndef RectangleH
#define RectangleH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
#include <Figure.h>

class Rectang:public Figure{
protected:
	int height, width;
public: Rectang(int x, int y, int h, int w):Figure(x,y)
	{
	height=h;
	width=w;
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

	float Infow ();

	float Infoh();

	~Rectang(){};
};
