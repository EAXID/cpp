#include <iostream>
using namespace std;
#include"point.h"
#include"circle.h"

int main()
{
	cout<<"����Բ������x,y��Բ�İ뾶"<<endl;
	double x,y,r;
	cin>>x>>y>>r;
	circle c(x,y,r);
	c.areaCircle();
	c.perimeterCircle();
	cout<<"�жϸ�Բ����λ��"<<endl;
	double a,b;
	cout<<"�����"<<endl; 
	cin>>a>>b;
	point p(a,b);
	c.PdGx(p); 

	return 0;
}

