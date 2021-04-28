#include <iostream>
using namespace std;

#include"FS.h"

int main()
{
	int a,b;
	int c,d;
	int e;
	cout<<"请输入第一个分数的分母"<<endl;
	cin>>a; 
	cout<<"请输入第一个分数的分子"<<endl;
	cin>>b;
	cout<<"请输入第二个分数的分母"<<endl;
	cin>>c;
	cout<<"请输入第二个分数的分子"<<endl;
    cin>>d;
	Fraction f1(b,a),f2(d,c);
	
	do
	{
		Cd();
	    cin>>e;
	    system("cls");
	    switch(e)
	    {
		    case 1 : f1.addFraction(f2);break;
	  	    case 2 : f1.subFraction(f2);break;
		    case 3 : f1.mulFraction(f2);break;
		    case 4 : f1.divFraction(f2);break;
		    case 0 : break;
	    }
	}while(e);
	
	
	
	
	return 0;
}
