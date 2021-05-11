#include"point.h"//圆心类
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
void point::setxy(double X,double Y)//设置x 
{
	x=X;
	y=Y;
}
double point::getx()//获取x 
{
	return x;
}
double point::gety()//获取y 
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
	cout<<"-----平移的过程-----"<<endl;
	cout<<"向上平移"<<up<<"个坐标"<<endl; 
	cout<<"向下平移"<<down<<"个坐标"<<endl; 
	cout<<"向左平移"<<left<<"个坐标"<<endl; 
	cout<<"向右平移"<<right<<"个坐标"<<endl; 
	cout<<"-----平移的结果-----"<<endl;
	cout<<"平移后的坐标为("<<this->x<<","<<this->y<<")"<<endl;
}

