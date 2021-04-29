#pragma once
#include<iostream>
using namespace std;
class point//圆心类
{
	public:
		point(double,double);
		point(const point &p);
		~point(); 
		void setxy(double ,double );//设置x 
		double getx();//获取x 
		double gety();//获取y 

	private:
	   double x;
	   double y; 
} ; 
