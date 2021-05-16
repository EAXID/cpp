#include <iostream>
using namespace std;
#include"point.h"
#include"rectangle.h"
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int e;
	double x1,x2,x3;
	double y1,y2,y3;
	do
	{
		Cd();
		cin>>e;
		system("cls");
		switch(e)
		{
			case 1 :
			{
				cout<<"输入第一个点"<<endl; 
				cin>>x1>>y1;
				cout<<"输入第二个点"<<endl; 
				cin>>x2>>y2;
				Point P1(x1,y1);
				Point P2(x2,y2);
				cout<<P1.distance(P2)<<endl;
				break;
			}
			case 2 :
			{
				cout<<"请任意输入该矩形的三个点"<<endl;
				cout<<"输入第一个点"<<endl; 
				cin>>x1>>y1;
				cout<<"输入第二个点"<<endl;
				cin>>x2>>y2;
				cout<<"输入第三个点"<<endl;
				cin>>x3>>y3;
				//Point P1(x1,y1);
				//Point P2(x2,y2);
				//Point P3(x3,y3);
				rectangle r(x1,y1,x2,y2,x3,y3);
				
				r.Mj();
				r.Zc(); 
				break;
			}
			case 3 :
			{
				cout<<"输入点"<<endl; 
				cin>>x1>>y1;
				Point P1(x1,y1);
				P1.movePoint();
				break;
			} 
		} 
		system("pause");
		system("cls");
	}while(e);
	
	return 0;
}
