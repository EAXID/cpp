#include <iostream>
using namespace std;
#include"point.h"

int main(int argc, char** argv)
{
	double x1,x2,y1,y2;
	cout<<"�����һ����ĺ�����"<<endl;
	cin>>x1; 
	cout<<"�����һ�����������"<<endl;
	cin>>y1; 
	cout<<"����ڶ�����ĺ�����"<<endl;
	cin>>x2; 
	cout<<"����ڶ������������"<<endl;
	cin>>y2; 
	point p1(x1,y1),p2(x2,y2);
	p1.Ps(p2);
	point p3(p2); 
	p1.Ps(p3); //�������캯��
	ps(x1,x2,y1,y2);//��ͨ���� 
	return 0;
}
