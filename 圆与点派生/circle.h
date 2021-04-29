#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle:public point//‘≤¿‡ 
{
	public:
		circle(double x1,double y1,double r1);
		circle(const circle & c);
		~circle();
		void setR(int r1);//…Ë÷√∞Îæ∂ 
		int getR();//ªÒ»°∞Îæ∂ 
		double areaCircle();
		double perimeterCircle();
		
		void displayCircle();
		void PdGx(point &p);
	private:
		int r;//∞Îæ∂ 
} ;
