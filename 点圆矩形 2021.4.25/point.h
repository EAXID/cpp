#pragma once
#include<iostream>
using namespace std;
class point//圆心类
{
	public:
		point();
		point(double,double);
		point(const point &p);
		~point(); 
		void setxy(double ,double );//设置x 
		double getx();//获取x 
		double gety();//获取y 
		
		
		virtual void move(double up,double down,double left,double right);//点的移动
        virtual  void display( );
        virtual  double area ( );
        virtual  double perimeter ( );

	private:
	   double x;
	   double y; 
} ; 
