#include<iostream>
using namespace std;
#include"point.h"
#include<math.h>
Point::Point(double x1,double y1)
{
	setPoint(x1,y1);
}
Point::Point(const Point & p)
{
	x=p.x;
	y=p.y;
}//注意 ，此处形参添加了const 
Point::~Point()
{
	;
}//只需要cout。。。 
void Point::setPoint(double x1,double y1)
{
	x=x1;
	y=y1;
}
double Point::getX()
{
	return x;
}
       

double Point::getY()
{
	return y;
}
void Point::displayPoint()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
void Point::movePoint(double up,double down,double left,double right)//点的平移操作
{
	Point p;
	p.x=getX()+right-left;
	p.y=getY()+up-down;
	cout<<"-----正在平移-----"<<endl;
	cout<<"向上平移"<<up<<"个坐标"<<endl; 
	cout<<"向下平移"<<down<<"个坐标"<<endl; 
	cout<<"向左平移"<<left<<"个坐标"<<endl; 
	cout<<"向右平移"<<right<<"个坐标"<<endl; 
	cout<<"-----平移完成-----"<<endl;
	cout<<"平移后的坐标为("<<p.x<<","<<p.y<<")"<<endl;
}
//重载求距离函数，形参类型不同
double Point::distance(Point & p)	//	成员函数实现 求两点之间的距离
{
	static double distance;
	distance=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
	return distance; 
}
double Point::distance(Point *p)	//	成员函数实现 求两点之间的距离
{
	static double distance;
	distance=sqrt((x-p->x)*(x-p->x)+(y-p->y)*(y-p->y));
	return distance;
}

