#include"point.h"//圆心类
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
void point::setxy(double X,double Y)//设置x 
{
	x=X;
	y=Y;
}
double point::getx()//获取x 
{
	return x;
}
double point::gety()//获取y 
{
	return y;
}

