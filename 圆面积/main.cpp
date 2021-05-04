#include<iostream>
using namespace std;
#include"circle.h"
int main()
{
	float r;
	circle c;
	cout<<"请输入圆的半径"<<endl;
	cin>>r;
	if(c.Pd(r))
	{
		cout<<"圆的周长是："<<c.Zc(r)<<endl;
	    cout<<"圆的面积是："<<c.Mj(r)<<endl;
	}
	else
	{
		cout<<"半径输入错误"<<endl; 
	}
	
	 
}
