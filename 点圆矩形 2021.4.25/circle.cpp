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
void circle::Pdly(circle &p)
{
	double DpF=//两点的平方 
	(getx()-p.getx())*(getx()-p.getx())+
	(gety()-p.gety())*(gety()-p.gety());
	double BjF=//半径的平方
	(getR()+p.getR())*(getR()+p.getR());
	
	if(DpF==BjF)
	{
		cout<<"两圆外切"<<endl; 
	}
	else if(DpF==(getR()-p.getR())*(getR()-p.getR()))  
	{
		cout<<"两圆内切"<<endl; 
	}
	else if(DpF<BjF)
	{
		cout<<"两圆相交"<<endl;
	}
	else if(DpF>BjF)
	{
		cout<<"两圆相离"<<endl;
	} 
}
 void circle::display( )
 {
 	cout<<"圆心：（"<<getx()<<","<<gety()<<")"<<endl;
	cout<<"圆的半径：" <<r<<endl;
	cout<<"圆的面积是："<<area()<<endl;
	cout<<"圆的周长是："<<perimeter()<<endl;
 }
double circle::area ( )
{
	double area;
	area=PI*r*r;
	
	return area;
}
double circle::perimeter ( )
{
	double perimeter;
	perimeter=2*PI*r;
	
	return perimeter;
}
























