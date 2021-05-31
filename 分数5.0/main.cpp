//wl2002 2031053231 wxd 
#include <iostream>
using namespace std;

#include"FS.h"

int main()
{
	int a,b;
	int d,c;
	char g,h;
	int e;
	Cd2();
	cin>>e;
	system("cls");
	if(e==1)
	{
		Fraction f1,f2;
		cin>>f1;
		cin>>f2;
		
        do
	{
		Cd();
	    cin>>e;
	    system("cls");
	    switch(e)
	    {
	    	case 1 : cout<<f1<<"+"<<"("<<f2<<")=";break;
	  	    case 2 : cout<<f1<<"-"<<"("<<f2<<")=";break;
		    case 3 : cout<<f1<<"x"<<"("<<f2<<")=";break;
		    case 4 : cout<<f1<<"÷"<<"("<<f2<<")=";break;
		    case 0 : break;
		}
	    switch(e)
	    {
		    case 1 : f1+f2;break;
	  	    case 2 : f1-f2;break;
		    case 3 : f1*f2;break;
		    case 4 : f1/f2;break;
		    case 5 : f1+=f2;break;
		    case 6 : f1*=f2;break;
		    case 7 : ++f1;break;
		    case 8 : f1--;break;
		    case 0 : break;
	    }
	}while(e);
	}
	else if(e==2)
	{
		cout<<"请输入第一个分数的正负"<<endl;
	    cin>>g; 
	    cout<<"请输入第一个分数的分子"<<endl;
	    cin>>a; 
	    cout<<"请输入第一个分数的分母"<<endl;
        cin>>b;
	    cout<<"请输入第二个分数的正负"<<endl;
	    cin>>h; 
	    cout<<"请输入第二个分数的分子"<<endl;
	    cin>>c;
	    cout<<"请输入第二个分数的分母"<<endl;
        cin>>d;
        Fraction f1(a,b,setpos(g)),f2(c,d,setpos(h));
        do
        {
        	Cd3();
        	cin>>e;
        	system("cls");
        	switch(e)
        	{
        		case 1 :f1>f2;break;//判断大于 
        		case 2 :f1<f2;break;//判断小于
				case 3 :f1>=f2;break;//判断大等于 
				case 4 :f1<=f2;break;//判断小等于
				case 5 :f1==f2;break;//判断等于
				case 6 :f1!=f2;break;//判断不等于
				case 0 :break;
			}
		}while(e);	
	}
	else if(e==3)
	{
		cout<<"请输入分数的正负"<<endl;
        cin>>g; 
        cout<<"请输入分数的分子"<<endl;
        cin>>a; 
        cout<<"请输入分数的分母"<<endl;
        cin>>b;
        Fraction f1(a,b,setpos(g));
        f1.antiFration();
	}
	else if(e==4)
	{
		cout<<"请输入分数的正负"<<endl;
        cin>>g; 
        cout<<"请输入分数的分子"<<endl;
        cin>>a; 
        cout<<"请输入分数的分母"<<endl;
        cin>>b;
        Fraction f1(a,b,setpos(g));
        f1.absFration();
	}
	return 0;
}
