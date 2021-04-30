#include"circle.h"//圆类 
void circle::setR(int r)//设置半径 
{
	R=r;
}
int circle::getR()//获取半径 
{
	return R;
}
void circle::setYx(point yx)//设置圆心 
{
	Yx=yx;
}
point circle::getYx()//获取圆心 
{
	return Yx;
}

