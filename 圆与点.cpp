#include<iostream>
using namespace std;
class point//圆心类
{
	public:
		void setx(int X)//设置x 
		{
			x=X;
		}
		int getx()//获取x 
		{
			return x;
		}
		void sety(int Y)//设置y 
		{
			y=Y;
		}
		int gety()//获取y 
		{
			return y;
		}

	private:
	   int x;
	   int y; 
} ; 
class circle//圆类 
{
	public:
		void setR(int r)//设置半径 
		{
			R=r;
		}
		int getR()//获取半径 
		{
			return R;
		}
		void setYx(point yx)//设置圆心 
		{
			Yx=yx;
		}
		point getYx()//获取圆心 
		{
			return Yx;
		}
	private:
		int R;//半径 
		point Yx;//圆心 
} ;
void PdGx(circle &c,point &p)
{
	int DpF=//两点的平方 
	(c.getYx().getx()-p.getx())*(c.getYx().getx()-p.getx())+
	(c.getYx().gety()-p.gety())*(c.getYx().gety()-p.gety());
	int BjF=//半径的平方
	c.getR()*c.getR();
	if(DpF==BjF)
	{
		cout<<"点在圆上"<<endl; 
	}
	else if(DpF>BjF)
	{
		cout<<"点在圆内"<<endl;
	}
	else if(DpF<BjF)
	{
		cout<<"点在圆外"<<endl;
	} 
}
int main()
{
	circle c;
	c.setR(10);
	point Yx;
	Yx.setx(0);
	Yx.sety(0);
	c.setYx(Yx);
	point p;
	p.setx(10);
	p.sety(0);
	PdGx(c,p); 
	return 0;
}














