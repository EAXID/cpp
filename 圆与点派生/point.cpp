#include"point.h"//Բ����
point::point(double X,double Y)
{
	setxy(X,Y);
}
point::point(const point &p)
{
	x=p.x;
	y=p.y;
}
point::~point()
{
	;
} 
void point::setxy(double X,double Y)//����x 
{
	x=X;
	y=Y;
}
double point::getx()//��ȡx 
{
	return x;
}
double point::gety()//��ȡy 
{
	return y;
}

