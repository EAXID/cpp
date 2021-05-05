#include<iostream>
using namespace std;
#include"point.h"
#include"rectangle.h"
#include<cmath>
rectangle::rectangle(Point p1,Point p2,Point p3)
{
	setrectangle(p1,p2,p3);
}
rectangle::~rectangle()
{
	;
}
rectangle::rectangle(const rectangle &r)
{
	P1=r.P1;
	P2=r.P2;
	P3=r.P3;
}
void rectangle::setrectangle(Point p1,Point p2,Point p3)
{
	P1=p1;
	P2=p2;
	P3=p3;
}
Point rectangle::getpoint1()
{
	return P1;
}
Point rectangle::getpoint2()
{
	return P2;
}
Point rectangle::getpoint3()
{
	return P3;
}
double rectangle::distanc(Point &p,Point &p4)	//	友元函数实现求两点之间的距离
{
	static double distance;
	distance=sqrt((p4.getX()-p.getX())*(p4.getX()-p.getX())+(p4.getY()-p.getY())*(p4.getY()-p.getY()));
	return distance; 
}
double rectangle::distanc(Point *p,Point *p4)
{
	static double distance;
	distance=sqrt((p4->getX()-p->getX())*(p4->getX()-p->getX())+(p4->getY()-p->getY())*(p4->getY()-p->getY()));
	return distance;
}
void rectangle::Mj()//面积
{
	if((P1.getX()==P2.getX()&&P1.getY()==P3.getY())||(P1.getX()==P3.getX()&&P1.getY()==P2.getY()))
	{
		cout<<"面积是："<<distanc(P1,P2)*distanc(P1,P3)<<endl; 
	}
	else if((P2.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P2.getY()==P3.getY()))
	{
		cout<<"面积是："<<distanc(P1,P2)*distanc(P2,P3)<<endl; 
	}
	else if((P3.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P1.getY()==P3.getY()))
	{
		cout<<"面积是："<<distanc(P1,P3)*distanc(P2,P3)<<endl; 
	}
	
	
}
void rectangle::Zc()//周长
{
	if((P1.getX()==P2.getX()&&P1.getY()==P3.getY())||(P1.getX()==P3.getX()&&P1.getY()==P2.getY()))
	{
		cout<<"周长是："<<(distanc(P1,P2)+distanc(P1,P3))*2<<endl; 
	}
	else if((P2.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P2.getY()==P3.getY()))
	{
		cout<<"周长是："<<distanc(P1,P2)*2+2*distanc(P2,P3)<<endl; 
	}
	else if((P3.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P1.getY()==P3.getY()))
	{
		cout<<"周长是："<<distanc(P1,P3)*2+2*distanc(P2,P3)<<endl; 
	}
}

void Cd()
{
	cout<<"1.两点距离"<<endl;
	cout<<"2.面积和周长"<<endl;
	cout<<"3.平移点"<<endl;
	cout<<"0.退出"<<endl;
}













