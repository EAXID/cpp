#pragma once
#include<iostream>
using namespace std;
class point//Բ����
{
	public:
		point();
		point(double,double);
		point(const point &p);
		~point(); 
		void setxy(double ,double );//����x 
		double getx();//��ȡx 
		double gety();//��ȡy 
		
		
		virtual void move(double up,double down,double left,double right);//����ƶ�
        virtual  void display( );
        virtual  double area ( );
        virtual  double perimeter ( );

	private:
	   double x;
	   double y; 
} ; 
