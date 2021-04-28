#include<iostream>
using namespace std;
#include"FS.h" 
Fraction::Fraction(int data1,int data2) 
{
	setFraction(data1,data2);
}
void Fraction::setFraction(int num1,	int num2)
{
	numerator=num1;
	denominator=num2;
}
int Fraction::getnumerator()
{
	return numerator;
}
int Fraction::getdenominator()
{
	return denominator;
}
void Fraction::addFraction(Fraction f2)//������
{
	Fraction f(1,1);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//�����ĸ
	f.numerator=f.denominator/f2.denominator*getnumerator()+f.denominator/getdenominator()*f2.numerator;//�������
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;
}
void Fraction::subFraction(Fraction f2)//��������
{
    Fraction f(1,1);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//�����ĸ
	if((getnumerator()/getdenominator())>0&&(f2.numerator/f2.denominator)<0)
	{
		f.numerator=f.denominator/getdenominator()*f2.numerator+f.denominator/f2.denominator*getnumerator();
	}
	else
	{
		f.numerator=f.denominator/getdenominator()*f2.numerator-f.denominator/f2.denominator*getnumerator();//�������
	} 
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;	
}
void Fraction::mulFraction(Fraction f2)//�����˷�
{
    Fraction f(1,1);
	f.denominator=getdenominator()*f2.denominator;//�����ĸ
	f.numerator=getnumerator()*f2.numerator;//�������
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;	
}
void Fraction::divFraction(Fraction f2)//��������
{
    Fraction f(1,1);
	f.denominator=getdenominator()*f2.numerator;//�����ĸ
	f.numerator=getnumerator()*f2.denominator;//�������
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;		
}
int Fraction::greatestCommonDivisor(int data1,int data2 )
{
	int m,n;
	int r,multiple;
	m=data1,n=data2;
	r=m%n;
	while(r!=0)
	{
	   	m=n;
		n=r;
		r=m%n;
	}
	return n;
}
int Fraction::leaseCommonMultiple(int data1,int data2)
{
	int m,n;
	int r,multiple;
	m=data1,n=data2;
	r=m%n;
	while(r!=0)
	{
	   	m=n;
		n=r;
		r=m%n;
	}
	return data1*data2/n;
}
Fraction Fraction::HuJ(int data1,int data2)
{
	int max;
	Fraction f(data1,data2);
	max=greatestCommonDivisor(data1,data2);//������Լ��
	data1=data1/max;
	data2=data2/max;
	f.setFraction(data1,data2);
	return f;
}
void Cd()
{
	cout<<"1.�������"<<endl;
	cout<<"2.�������"<<endl;
    cout<<"3.�������"<<endl;
    cout<<"4.�������"<<endl; 
    cout<<"0.�˳�"<<endl;
}
















