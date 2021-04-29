#include"circle.h"//圆类 
#define PI 3.14
circle::circle(double x1,double y1,double r1):point(x1,y1)
{
	setR(r1);
}
circle::circle(const circle & c):point(c)
{
	r=c.r;
}
circle::~circle()
{
	;
}
void circle::setR(int r1)//设置半径 
{
	r=r1;
}
int circle::getR()//获取半径 
{
	return r;
}
double circle::areaCircle()
{
	double area;
	area=PI*r*r;
	cout<<"圆的面积是："<<area<<endl;
	return area;
}

double circle::perimeterCircle()
{
	double perimeter;
	perimeter=2*PI*r;
	cout<<"圆的周长是："<<perimeter<<endl;
	return perimeter;
}

void  circle::displayCircle()
{
	cout<<"圆心：（"<<getx()<<","<<gety()<<")"<<endl;
	cout<<"圆的半径：" <<r<<endl;
}
void circle::PdGx(point &p)
{
	double DpF=//两点的平方 
	(getx()-p.getx())*(getx()-p.getx())+
	(gety()-p.gety())*(gety()-p.gety());
	double BjF=//半径的平方
	getR()*getR();
	
	if(DpF==BjF)
	{
		cout<<"点在圆上"<<endl; 
	}
	else if(DpF<BjF)
	{
		cout<<"点在圆内"<<endl;
	}
	else if(DpF>BjF)
	{
		cout<<"点在圆外"<<endl;
	} 
}
























