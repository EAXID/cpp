#include"circle.h"//Բ�� 
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
void circle::setR(int r1)//���ð뾶 
{
	r=r1;
}
int circle::getR()//��ȡ�뾶 
{
	return r;
}
double circle::areaCircle()
{
	double area;
	area=PI*r*r;
	cout<<"Բ������ǣ�"<<area<<endl;
	return area;
}

double circle::perimeterCircle()
{
	double perimeter;
	perimeter=2*PI*r;
	cout<<"Բ���ܳ��ǣ�"<<perimeter<<endl;
	return perimeter;
}

void  circle::displayCircle()
{
	cout<<"Բ�ģ���"<<getx()<<","<<gety()<<")"<<endl;
	cout<<"Բ�İ뾶��" <<r<<endl;
}
void circle::PdGx(point &p)
{
	double DpF=//�����ƽ�� 
	(getx()-p.getx())*(getx()-p.getx())+
	(gety()-p.gety())*(gety()-p.gety());
	double BjF=//�뾶��ƽ��
	getR()*getR();
	
	if(DpF==BjF)
	{
		cout<<"����Բ��"<<endl; 
	}
	else if(DpF<BjF)
	{
		cout<<"����Բ��"<<endl;
	}
	else if(DpF>BjF)
	{
		cout<<"����Բ��"<<endl;
	} 
}
void circle::Pdly(circle &p)
{
	double DpF=//�����ƽ�� 
	(getx()-p.getx())*(getx()-p.getx())+
	(gety()-p.gety())*(gety()-p.gety());
	double BjF=//�뾶��ƽ��
	(getR()+p.getR())*(getR()+p.getR());
	
	if(DpF==BjF)
	{
		cout<<"��Բ����"<<endl; 
	}
	else if(DpF==(getR()-p.getR())*(getR()-p.getR()))  
	{
		cout<<"��Բ����"<<endl; 
	}
	else if(DpF<BjF)
	{
		cout<<"��Բ�ཻ"<<endl;
	}
	else if(DpF>BjF)
	{
		cout<<"��Բ����"<<endl;
	} 
}
























