//wl2002 2031053231 wxd
#include <iostream>
using namespace std;
#include<stdlib.h>
#include"point.h"
#include"circle.h"

int main()
{
	int a=0;
	cout<<"����Բ������x,y��Բ�İ뾶"<<endl;
	double x,y,r;
	cin>>x>>y>>r;
	circle c(x,y,r);
	
	do
	{
		system("cls");
		cout<<"1.�жϵ����Բλ��"<<endl<<"2.��Բ�ܳ������"<<endl<<"3.��Բλ��"<<endl<<"0.�˳�"<<endl;
		cin>>a;
		switch(a)
	{
		case 1 :
			{
				double a,b;
	            cout<<"�����"<<endl; 
	            cin>>a>>b;
	            point p(a,b);
	            c.PdGx(p); 
	            break;
			}
		case 2 :
			{
				c.areaCircle();
	            c.perimeterCircle();
	            break;
			}
		case 3 :
			{
				cout<<"����ڶ���Բ������x,y��Բ�İ뾶"<<endl;
	            cin>>x>>y>>r;
	            circle c1(x,y,r);
	            c.Pdly(c1);
	            break;
			}
		case 0 :cout<<"ллʹ��"<<endl;break;	
	}
	system("pause");
	}while(a);
	
	
	


	return 0;
}

