#pragma once
#include<iostream>
using namespace std;
class point//Բ����
{
	public:
		point(double,double);
		point(const point &p);
		~point(); 
		void setxy(double ,double );//����x 
		double getx();//��ȡx 
		double gety();//��ȡy 

	private:
	   double x;
	   double y; 
} ; 
