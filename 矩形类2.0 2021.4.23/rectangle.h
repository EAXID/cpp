#include<iostream>
using namespace std;
#include"point.h"
class rectangle :public Point 
{
	public:
		rectangle(Point p1,Point p2,Point p3);
		rectangle(double,double,double,double,double,double);
		rectangle(const rectangle &r);
		~rectangle();
		void setrectangle(Point p1,Point p2,Point p3);
		Point getpoint1();
		Point getpoint2();
		Point getpoint3();
		void Mj();//面积
		void Zc();//周长 
	    double distanc(Point &,Point &);	//	友元函数实现求两点之间的距离165	53	
	    double distanc(Point *,Point *);
 Point P1;
    private:
       
		Point P2;
		Point P3;	
}; 
void Cd();
