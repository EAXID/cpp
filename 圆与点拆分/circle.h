#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle//Բ�� 
{
	public:
		void setR(int r);//���ð뾶 
		int getR();//��ȡ�뾶 
		void setYx(point yx);//����Բ�� 
		point getYx();//��ȡԲ�� 
		
	private:
		int R;//�뾶 
		point Yx;//Բ�� 
} ;
