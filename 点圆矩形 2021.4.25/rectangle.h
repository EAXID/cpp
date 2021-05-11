#include<iostream>
using namespace std;
#include"point.h"
class rectangle :public point 
{
	public:
		rectangle(point p1,point p2,point p3);
		rectangle(double,double,double,double,double,double);
		rectangle(const rectangle &r);
		~rectangle();
		void setrectangle(point p1,point p2,point p3);
		point getpoint1();
		point getpoint2();
		point getpoint3();
		
	    double distanc(point &,point &);	//	友元函数实现求两点之间的距离165	53	
	    double distanc(point *,point *);
	    
	    virtual  void display( );
        virtual  double area ( );
        virtual  double perimeter ( );
 
    private:
        point P1;
		point P2;
		point P3;	
}; 
void Cd();
