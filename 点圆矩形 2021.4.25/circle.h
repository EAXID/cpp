#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle:public point//Բ�� 
{
	public:
		circle(double x1,double y1,double r1);
		circle(const circle & c);
		~circle();
		void setR(int r1);//���ð뾶 
		int getR();//��ȡ�뾶 
		
		void PdGx(point &p);
		void Pdly(circle &c); 
		
		virtual  void display( );
        virtual  double area ( );
        virtual  double perimeter ( );
	private:
		int r;//�뾶 
} ;
