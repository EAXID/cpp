#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle//圆类 
{
	public:
		void setR(int r);//设置半径 
		int getR();//获取半径 
		void setYx(point yx);//设置圆心 
		point getYx();//获取圆心 
		
	private:
		int R;//半径 
		point Yx;//圆心 
} ;
