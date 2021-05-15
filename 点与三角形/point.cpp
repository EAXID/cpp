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
}//ע�� ���˴��β������const 
Point::~Point()
{
	;
}//ֻ��Ҫcout������ 
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
void Point::movePoint(double up,double down,double left,double right)//���ƽ�Ʋ���
{
	Point p;
	p.x=getX()+right-left;
	p.y=getY()+up-down;
	cout<<"-----����ƽ��-----"<<endl;
	cout<<"����ƽ��"<<up<<"������"<<endl; 
	cout<<"����ƽ��"<<down<<"������"<<endl; 
	cout<<"����ƽ��"<<left<<"������"<<endl; 
	cout<<"����ƽ��"<<right<<"������"<<endl; 
	cout<<"-----ƽ�����-----"<<endl;
	cout<<"ƽ�ƺ������Ϊ("<<p.x<<","<<p.y<<")"<<endl;
}
//��������뺯�����β����Ͳ�ͬ
double Point::distance(Point & p)	//	��Ա����ʵ�� ������֮��ľ���
{
	static double distance;
	distance=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
	return distance; 
}
double Point::distance(Point *p)	//	��Ա����ʵ�� ������֮��ľ���
{
	static double distance;
	distance=sqrt((x-p->x)*(x-p->x)+(y-p->y)*(y-p->y));
	return distance;
}

