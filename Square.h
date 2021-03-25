//---------------------------------------------------------------------------

#ifndef SquareH
#define SquareH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>
#include <Rectangle.h>

class Squar:public Rectang{
protected:
int side;

public: Squar(int x, int y, int side ):Rectang(x,y,side,side){
  this->side=side;}
	float InfoS();

	~Squar(){};
};