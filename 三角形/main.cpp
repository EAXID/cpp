#include <iostream>
using namespace std;
#include"SjX.h"
int main()
{
	float a,b,c;
	SjX T;
	cout<<"����������������"<<endl; 
	cin>>a>>b>>c;
	T.sett0(a);
	T.sett1(b);
	T.sett2(c);
	if(T.s())
	{
	    cout<<"�����ε��ܳ�"<<T.Zc()<<endl;
	    cout<<"�����ε����"<<T.Mj()<<endl;
	    T.Lx();
	}
	else
	{
		cout<<"�����߲��ܹ���������"<<endl;
	} 
	
	
	return 0;
}
