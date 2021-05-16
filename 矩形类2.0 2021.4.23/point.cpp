#include<iostream>
using namespace std;
#include"point.h"
#include<cmath>
Point::Point(double x1,double y1)
{
	setPoint(x1,y1);
}
Point::Point(const Point &p)
{
	x=p.x;
	y=p.y;
}
Point::~Point()
{
	;
}
void Point::setPoint(double x1,double y1)
{
	x=x1;
	y=y1;
}
inline double Point::getX() const
{
	return x;
}
inline double Point::getY() const
{
	return y;
}

void Point::displayPoint() const
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
void Point::movePoint()//点的平移操作
{
	Point p1(1,1); 
	double u,d,l,r;
	cout<<"向上平移"<<endl;
	cin>>u; 
	cout<<"向下平移"<<endl; 
	cin>>d;
	cout<<"向左平移"<<endl; 
	cin>>l;
	cout<<"向右平移"<<endl; 
    cin>>r;
	p1.x=getX()+r-l;
	p1.y=getY()+u-d;
	p1.displayPoint();
}
        //重载求距离函数，形参类型不同
double Point::distance(Point &p)	//	成员函数实现 求两点之间的距离
{
	static double distance;
	distance=sqrt((getX()-p.x)*(getX()-p.x)+(getY()-p.y)*(getY()-p.y));
	return distance; 
}
double Point::distance(Point *p)	//	成员函数实现 求两点之间的距离
{
	static double distance;
	distance=sqrt((getX()-p->x)*(getX()-p->x)+(getY()-p->y)*(getY()-p->y));
	return distance;
}
        















        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
