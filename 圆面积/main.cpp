#include<iostream>
using namespace std;
#include"circle.h"
int main()
{
	float r;
	circle c;
	cout<<"������Բ�İ뾶"<<endl;
	cin>>r;
	if(c.Pd(r))
	{
		cout<<"Բ���ܳ��ǣ�"<<c.Zc(r)<<endl;
	    cout<<"Բ������ǣ�"<<c.Mj(r)<<endl;
	}
	else
	{
		cout<<"�뾶�������"<<endl; 
	}
	
	 
}
