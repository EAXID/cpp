#include"point.h"//Բ����
point::point()
{
	
}
point::point(double X,double Y)
{
	setxy(X,Y);
}
point::point(const point &p)
{
	x=p.x;
	y=p.y;
}
point::~point()
{
	;
} 
void point::setxy(double X,double Y)//����x 
{
	x=X;
	y=Y;
}
double point::getx()//��ȡx 
{
	return x;
}
double point::gety()//��ȡy 
{
	return y;
}
void point::display( )
{
	cout<<"("<<getx()<<","<<gety()<<")"<<endl;
}
double point::area ( )
{
	return 0;
}
double point::perimeter ( )
{
	return 0;
}
void point::move(double up,double down,double left,double right)
{
	this->x=this->x+right-left;
	this->y=this->y+up-down;
	cout<<"-----ƽ�ƵĹ���-----"<<endl;
	cout<<"����ƽ��"<<up<<"������"<<endl; 
	cout<<"����ƽ��"<<down<<"������"<<endl; 
	cout<<"����ƽ��"<<left<<"������"<<endl; 
	cout<<"����ƽ��"<<right<<"������"<<endl; 
	cout<<"-----ƽ�ƵĽ��-----"<<endl;
	cout<<"ƽ�ƺ������Ϊ("<<this->x<<","<<this->y<<")"<<endl;
}

