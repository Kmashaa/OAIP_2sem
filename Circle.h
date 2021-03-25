//---------------------------------------------------------------------------

#ifndef CircleH
#define CircleH
//---------------------------------------------------------------------------
#endif
  #include <vcl.h>
#include <Ellipse.h>

class Circl:public Ellips{
public: Circl(int x, int y, int r):Ellips(x,y,x+r+r,y+r+r) {}


	~Circl(){};
};