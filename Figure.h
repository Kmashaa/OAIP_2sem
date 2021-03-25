//---------------------------------------------------------------------------

#ifndef FigureH
#pragma once
#define FigureH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
class Figure{
protected:
	float P, S, xc, yc;
public:
int x1,y1;
	Figure(int x, int y)
	{
		x1 = x;
		y1 = y;
	}
	~Figure(){};
};
