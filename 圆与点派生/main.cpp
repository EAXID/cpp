#include <iostream>
using namespace std;
#include"point.h"
#include"circle.h"

int main()
{
	cout<<"输入圆心坐标x,y和圆的半径"<<endl;
	double x,y,r;
	cin>>x>>y>>r;
	circle c(x,y,r);
	c.areaCircle();
	c.perimeterCircle();
	cout<<"判断该圆与点的位置"<<endl;
	double a,b;
	cout<<"输入点"<<endl; 
	cin>>a>>b;
	point p(a,b);
	c.PdGx(p); 

	return 0;
}

