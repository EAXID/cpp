#include <iostream>
using namespace std;
#include"SjX.h"
int main()
{
	float a,b,c;
	SjX T;
	cout<<"请输入三角形三边"<<endl; 
	cin>>a>>b>>c;
	T.sett0(a);
	T.sett1(b);
	T.sett2(c);
	if(T.s())
	{
	    cout<<"三角形的周长"<<T.Zc()<<endl;
	    cout<<"三角形的面积"<<T.Mj()<<endl;
	    T.Lx();
	}
	else
	{
		cout<<"该三边不能构成三角形"<<endl;
	} 
	
	
	return 0;
}
