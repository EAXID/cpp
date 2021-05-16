#include<iostream>
using namespace std;
#include"point.h"
#include"rectangle.h"
#include<cmath>
rectangle::rectangle(Point p1,Point p2,Point p3)
{
	setrectangle(p1,p2,p3);
}
rectangle::rectangle(double x1,double y1,double x2,double y2,double x3,double y3):P1(x1,y1),P2(x2,y2),P3(x3,y3)
{
 ;
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
double rectangle::distanc(Point &p,Point &p4)	//	��Ԫ����ʵ��������֮��ľ���
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
void rectangle::Mj()//���
{
	if((P1.getX()==P2.getX()&&P1.getY()==P3.getY())||(P1.getX()==P3.getX()&&P1.getY()==P2.getY()))
	{
		cout<<"����ǣ�"<<P1.distance(P2)*P1.distance(P3)<<endl; 
	}
	else if((P2.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P2.getY()==P3.getY()))
	{
		cout<<"����ǣ�"<<P2.distance(P1)*P2.distance(P3)<<endl; 
	}
	else if((P3.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P1.getY()==P3.getY()))
	{
		cout<<"����ǣ�"<<P3.distance(P2)*P3.distance(P1)<<endl; 
	}
	else 
	{
		cout<<"���Ǿ���"<<endl;
	}
	
	
}
void rectangle::Zc()//�ܳ�
{
	if((P1.getX()==P2.getX()&&P1.getY()==P3.getY())||(P1.getX()==P3.getX()&&P1.getY()==P2.getY()))
	{
		cout<<"�ܳ��ǣ�"<<(rectangle::distanc(P1,P2)+rectangle::distanc(P1,P3))*2<<endl; 
	}
	else if((P2.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P2.getY()==P3.getY()))
	{
		cout<<"�ܳ��ǣ�"<<rectangle::distanc(P1,P2)*2+2*rectangle::distanc(P2,P3)<<endl; 
	}
	else if((P3.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P1.getY()==P3.getY()))
	{
		cout<<"�ܳ��ǣ�"<<rectangle::distanc(P1,P3)*2+2*rectangle::distanc(P2,P3)<<endl; 
	}
}

void Cd()
{
	cout<<"1.�������"<<endl;
	cout<<"2.������ܳ�"<<endl;
	cout<<"3.ƽ�Ƶ�"<<endl;
	cout<<"0.�˳�"<<endl;
}













