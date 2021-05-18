#include"num.h"
int* Px(int k[],int num)
{
	int i,j,n;
	for(i=1;i<num;i++)
	{
		n=k[i];
		for(j=i;j>=0&&n<k[j-1];j--)
		{
			k[j]=k[j-1];
		}
		k[j]=n;
	}
	return k;
}
int Cz(int k[],int num,int n)
{
	int i;
	for(i=0;i<num;i++)
	{
		if(k[i]==n)
		{
			return i;
		}
	}
	return -1;
}
void Cc(int k[],int num,int n)
{
	int* p=0; 
    int a[num+1],i,j;
	for(i=0;i<num;i++)
	{
		a[i]=k[i];
	}
	a[i]=n;
	p=Px(a,num+1);
	for(i=0;i<num+1;i++,p++)
	    {
		    cout<<*p<<"  ";
	    } 
}
void Cd()
{
	cout<<"1）将若干个整型数据排序"<<endl;
	cout<<"2）从若干已知有序整型数据中查找某一个元素"<<endl;
	cout<<"3）在已知某有序数组中查找某元素，如果没有那么插入该元素，要求插入后仍保持有序"<<endl;
	cout<<"0) 退出"<<endl;
}
void case1()
{
	int num,i;
	int* p;
	cout<<"请输入元素个数"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"请输入第"<<i+1<<"个元素"<<endl; 
		cin>>a[i];
	}
	p=Px(a,num);		
	for(i=0;i<num;i++,p++)
	{
		cout<<*p<<"  ";
	}
	cout<<endl;
}
void case2()
{
	int num,i,n;
	cout<<"请输入元素个数"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"请输入第"<<i+1<<"个元素"<<endl; 
		cin>>a[i];
	}
	cout<<"请输入要查找的数字"<<endl;
	cin>>n;		
	if(Cz(a,num,n)!=-1)
	{
		cout<<"找到了下标为"<<Cz(a,num,n)<<endl;
	}
	else
	{
		cout<<"未找到"<<endl; 
	}
}
void case3()
{
	int num,i,n;
	int* p;
	cout<<"请输入元素个数"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"请输入第"<<i+1<<"个元素"<<endl; 
		cin>>a[i];
	}
	cout<<"请输入要查找的数字"<<endl;
	cin>>n;		
	if(Cz(a,num,n)!=-1)
	{
		cout<<"找到了下标为"<<Cz(a,num,n)<<endl;
	}
	else
	{
		cout<<"没找到"<<endl; 
		Cc(a,num,n);
	}
}















