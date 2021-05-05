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
void Point::movePoint()//���ƽ�Ʋ���
{
	Point p1(1,1); 
	double u,d,l,r;
	cout<<"����ƽ��"<<endl;
	cin>>u; 
	cout<<"����ƽ��"<<endl; 
	cin>>d;
	cout<<"����ƽ��"<<endl; 
	cin>>l;
	cout<<"����ƽ��"<<endl; 
    cin>>r;
	p1.x=getX()+r-l;
	p1.y=getY()+u-d;
	p1.displayPoint();
}
        //��������뺯�����β����Ͳ�ͬ
double Point::distance(Point &p)	//	��Ա����ʵ�� ������֮��ľ���
{
	static double distance;
	distance=sqrt((getX()-p.x)*(getX()-p.x)+(getY()-p.y)*(getY()-p.y));
	return distance; 
}
double Point::distance(Point *p)	//	��Ա����ʵ�� ������֮��ľ���
{
	static double distance;
	distance=sqrt((getX()-p->x)*(getX()-p->x)+(getY()-p->y)*(getY()-p->y));
	return distance;
}
        















        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
