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
	cout<<"1�������ɸ�������������"<<endl;
	cout<<"2����������֪�������������в���ĳһ��Ԫ��"<<endl;
	cout<<"3������֪ĳ���������в���ĳԪ�أ����û����ô�����Ԫ�أ�Ҫ�������Ա�������"<<endl;
	cout<<"0) �˳�"<<endl;
}
void case1()
{
	int num,i;
	int* p;
	cout<<"������Ԫ�ظ���"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"�������"<<i+1<<"��Ԫ��"<<endl; 
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
	cout<<"������Ԫ�ظ���"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"�������"<<i+1<<"��Ԫ��"<<endl; 
		cin>>a[i];
	}
	cout<<"������Ҫ���ҵ�����"<<endl;
	cin>>n;		
	if(Cz(a,num,n)!=-1)
	{
		cout<<"�ҵ����±�Ϊ"<<Cz(a,num,n)<<endl;
	}
	else
	{
		cout<<"δ�ҵ�"<<endl; 
	}
}
void case3()
{
	int num,i,n;
	int* p;
	cout<<"������Ԫ�ظ���"<<endl;
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"�������"<<i+1<<"��Ԫ��"<<endl; 
		cin>>a[i];
	}
	cout<<"������Ҫ���ҵ�����"<<endl;
	cin>>n;		
	if(Cz(a,num,n)!=-1)
	{
		cout<<"�ҵ����±�Ϊ"<<Cz(a,num,n)<<endl;
	}
	else
	{
		cout<<"û�ҵ�"<<endl; 
		Cc(a,num,n);
	}
}















