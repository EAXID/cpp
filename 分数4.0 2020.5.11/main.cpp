//wl2002 2031053231 wxd 
#include <iostream>
using namespace std;

#include "Fraction.h"

int main(int argc, char** argv)
{
	int sel;
	int f1n,f1d;
	int f2n,f2d;
	//开始为分数输入值： 
	cout<<"请为第一个分数输入分子：";
	cin>>f1n;
	cout<<"请为第一个分数输入分母：";
	cin>>f1d;
	cout<<"请为第二个分数输入分子：";
	cin>>f2n;
	cout<<"请为第二个分数输入分母：";
	cin>>f2d;
	//定义分数类 
	Fraction f1(f1n,f1d),f2(f2n,f2d);
	
	while(1)
	{
		cout<<"-----1.两数相加-----"<<endl; 
		cout<<"-----2.两数相减-----"<<endl; 
		cout<<"-----3.两数相乘-----"<<endl; 
		cout<<"-----4.两数相除-----"<<endl; 
		cout<<"-----5.大于-----"<<endl; 
		cout<<"-----6.小于-----"<<endl; 
		cout<<"-----7.等于-----"<<endl; 
		cout<<"-----8.不等于 -----"<<endl; 
		cout<<"-----9.大于等于-----"<<endl; 
		cout<<"-----10.小于等于-----"<<endl; 
		cout<<"-----11.取非 -----"<<endl; 
		cout<<"-----12.绝对值-----"<<endl; 
		cout<<"-----0.退出-----"<<endl; 
		cout<<endl;
		cout<<"     请输入您的选择：";
		cin>>sel;
		
		system("cls");
		cout<<endl<<"第一个分数为:"<<f1n<<"/"<<f1d<<endl;
		cout<<endl<<"第二个分数为:"<<f2n<<"/"<<f2d<<endl<<endl;
		switch (sel)
		{
			case 1: //加法 
				f1+f2; break;
			case 2: //减法 
				f1-f2; break;
			case 3:	//乘法 
				f1*f2;	break;
			case 4:	//除法 
				f1/f2;	break;
			case 5:
				f1>f2;break;
			case 6:
				f1<f2;break;
			case 7:
				f1==f2;break;
			case 8:
				f1!=f2;break;
			case 9:
				f1>=f2;break;
			case 10:
				f1<=f2;break;
			case 11:
				f1.antiFraction();break;
			case 12:
				f1.absFraction();break;
				
			case 0:
				break;
		}
		if(sel==0)
			break;
	}
	return 0;
}
