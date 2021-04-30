#include <iostream>
using namespace std;
#include"point.h"
#include"circle.h"
void PdGx(circle &c,point &p)
{
	int DpF=//两点的平方 
	(c.getYx().getx()-p.getx())*(c.getYx().getx()-p.getx())+
	(c.getYx().gety()-p.gety())*(c.getYx().gety()-p.gety());
	int BjF=//半径的平方
	c.getR()*c.getR();
	if(DpF==BjF)
	{
		cout<<"点在圆上"<<endl; 
	}
	else if(DpF>BjF)
	{
		cout<<"点在圆内"<<endl;
	}
	else if(DpF<BjF)
	{
		cout<<"点在圆外"<<endl;
	} 
}
int main()
{
	circle c;
	c.setR(10);
	point Yx;
	Yx.setx(0);
	Yx.sety(0);
	c.setYx(Yx);
	point p;
	p.setx(10);
	p.sety(0);
	PdGx(c,p); 
	return 0;
}

