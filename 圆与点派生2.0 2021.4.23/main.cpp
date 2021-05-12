//wl2002 2031053231 wxd
#include <iostream>
using namespace std;
#include<stdlib.h>
#include"point.h"
#include"circle.h"

int main()
{
	int a=0;
	cout<<"输入圆心坐标x,y和圆的半径"<<endl;
	double x,y,r;
	cin>>x>>y>>r;
	circle c(x,y,r);
	
	do
	{
		system("cls");
		cout<<"1.判断点与该圆位置"<<endl<<"2.该圆周长与面积"<<endl<<"3.两圆位置"<<endl<<"0.退出"<<endl;
		cin>>a;
		switch(a)
	{
		case 1 :
			{
				double a,b;
	            cout<<"输入点"<<endl; 
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
				cout<<"输入第二个圆心坐标x,y和圆的半径"<<endl;
	            cin>>x>>y>>r;
	            circle c1(x,y,r);
	            c.Pdly(c1);
	            break;
			}
		case 0 :cout<<"谢谢使用"<<endl;break;	
	}
	system("pause");
	}while(a);
	
	
	


	return 0;
}

