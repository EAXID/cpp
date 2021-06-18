#include<iostream>
using namespace std;
#ifndef DATE_H
#define DATE_H
class Date
{
	friend ostream& operator<<(ostream& , Date& );//��������� 
	friend istream& operator>>(istream& , Date& );
public:
	Date(int =1900,int =1,int =1);
	Date(const Date &);
	~Date();
	
	void setDate(int y,int m,int d);
	int getYear();
	int getMonth();
	int getDay();
	void Pdate();
	void dispaly(); 
	
	int operator-(Date& );
	bool operator==(Date &);//���������,2�������е� 
	bool operator!=(Date &);
	bool operator>(Date &);
	bool operator<(Date &); 
	
	
	
	
private:
	int year;
	int month;
	int day;
}; 
#endif
/*template<typename T>
void px(T d[],int n)//���� 
{
	T y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(d[i]>d[j])
		   {
			   y=d[i];
			   d[i]=d[j];
			   d[j]=y;
		   }
		}	
	}
}
template<typename T>
void sc(T d[],int n)//��� 
{
	Date c(1900,1,1);
	for(int i=0;i<n;i++)
	{
	cout<<d[i]<<endl;
		
	}
}
template<typename T>
void cz(T d[],T y,int n)  
{
	for(int i=0;i<n;i++)
	{
		if(d[i]==y)
		{
			cout<<"�ҵ��ˣ��±�Ϊ"<<i<<endl;
			break;
		}
		if(i==n-1)
		{
			cout<<"û�ҵ�"<<endl;
		}
	}
}  
template<typename T>
void sac(T d[],int n,T m)//ɾ�� 
{
	int i,j;
	Date y[n-1];
	for(j=0,i=0;i<n;i++)
	{
		if(d[i]!=m)
		{
			y[j]=d[i];
			j++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		d[i]=y[i];
	}
	d[i]=NULL;	
}
template<typename T>//���� 
void sr(T d[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"�����"<<i+1<<"��"<<endl;
		cin>>d[i]; 
	}
}*/
    
    
    
    
