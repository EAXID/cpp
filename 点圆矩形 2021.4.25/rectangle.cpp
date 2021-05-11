#include<iostream>
using namespace std;
#include"point.h"
#include"rectangle.h"
#include<cmath>
rectangle::rectangle(point p1,point p2,point p3)
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
void rectangle::setrectangle(point p1,point p2,point p3)
{
	P1=p1;
	P2=p2;
	P3=p3;
}
point rectangle::getpoint1()
{
	return P1;
}
point rectangle::getpoint2()
{
	return P2;
}
point rectangle::getpoint3()
{
	return P3;
}
double rectangle::distanc(point &p,point &p4)	//	友元函数实现求两点之间的距离
{
	static double distance;
	distance=sqrt((p4.getx()-p.getx())*(p4.getx()-p.getx())+(p4.gety()-p.gety())*(p4.gety()-p.gety()));
	return distance; 
}
double rectangle::distanc(point *p,point *p4)
{
	static double distance;
	distance=sqrt((p4->getx()-p->getx())*(p4->getx()-p->getx())+(p4->gety()-p->gety())*(p4->gety()-p->gety()));
	return distance;
}
/*void rectangle::Mj()//面积
{
	
	
	
}*/ 
/*void rectangle::Zc()//周长
{
	if((P1.getX()==P2.getX()&&P1.getY()==P3.getY())||(P1.getX()==P3.getX()&&P1.getY()==P2.getY()))
	{
		cout<<"周长是："<<(rectangle::distanc(P1,P2)+rectangle::distanc(P1,P3))*2<<endl; 
	}
	else if((P2.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P2.getY()==P3.getY()))
	{
		cout<<"周长是："<<rectangle::distanc(P1,P2)*2+2*rectangle::distanc(P2,P3)<<endl; 
	}
	else if((P3.getX()==P1.getX()&&P2.getY()==P3.getY())||(P2.getX()==P3.getX()&&P1.getY()==P3.getY()))
	{
		 
	}
}*/
void rectangle::display( )
{
	cout<<"面积是："<<area()<<endl;
	cout<<"周长是："<<perimeter()<<endl;
}
double rectangle::area ( )
{
	if((P1.getx()==P2.getx()&&P1.gety()==P3.gety())||(P1.getx()==P3.getx()&&P1.gety()==P2.gety()))
	{
		return distanc(P1,P2)*distanc(P1,P3);
	}
	else if((P2.getx()==P1.getx()&&P2.gety()==P3.gety())||(P2.getx()==P3.getx()&&P2.gety()==P3.gety()))
	{
		return distanc(P1,P2)*distanc(P2,P3);
	}
	else if((P3.getx()==P1.getx()&&P2.gety()==P3.gety())||(P2.getx()==P3.getx()&&P1.gety()==P3.gety()))
	{
		return distanc(P3,P2)*distanc(P1,P3); 
	}

}
double rectangle::perimeter ( )
{
	if((P1.getx()==P2.getx()&&P1.gety()==P3.gety())||(P1.getx()==P3.getx()&&P1.gety()==P2.gety()))
	{
		return distanc(P1,P2)*2+2*distanc(P1,P3);
	}
	else if((P2.getx()==P1.getx()&&P2.gety()==P3.gety())||(P2.getx()==P3.getx()&&P2.gety()==P3.gety()))
	{
		return distanc(P1,P2)*2+2*distanc(P2,P3);
	}
	else if((P3.getx()==P1.getx()&&P2.gety()==P3.gety())||(P2.getx()==P3.getx()&&P1.gety()==P3.gety()))
	{
		return distanc(P3,P2)*2+2*distanc(P1,P3); 
	}
}

void Cd()
{
	cout<<"1.两点距离"<<endl;
	cout<<"2.面积和周长"<<endl;
	cout<<"3.平移点"<<endl;
	cout<<"0.退出"<<endl;
}













