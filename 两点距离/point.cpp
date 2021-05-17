#include<iostream>
using namespace std;
#include"point.h"
#include<math.h>
point::point(double x1,double y1)
{
	setpoint(x1,y1);
}
point::~point()
{
	;
}
point::point(const point &p1)
{
	x=p1.x;
	y=p1.y;
}
void point::setpoint(double x1,double y1)
{
	x=x1;
	y=y1;
}
double point::getx()
{
	return x;
}
double point::gety()
{
	return y;
}
void point::Ps(point p2)
{
	double s;
	s=(getx()-p2.x)*(getx()-p2.x)+(gety()-p2.y)*(gety()-p2.y);
	cout<<"两点距离"<<sqrt(s)<<endl;
}
void ps(double x1,double x2,double y1,double y2)
{
	double s;
	s=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	cout<<"两点距离"<<sqrt(s)<<endl;
}











