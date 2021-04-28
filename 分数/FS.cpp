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
void Fraction::addFraction(Fraction f2)//分数加
{
	Fraction f(1,1);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//算出分母
	f.numerator=f.denominator/f2.denominator*getnumerator()+f.denominator/getdenominator()*f2.numerator;//算出分子
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;
}
void Fraction::subFraction(Fraction f2)//分数减法
{
    Fraction f(1,1);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//算出分母
	if((getnumerator()/getdenominator())>0&&(f2.numerator/f2.denominator)<0)
	{
		f.numerator=f.denominator/getdenominator()*f2.numerator+f.denominator/f2.denominator*getnumerator();
	}
	else
	{
		f.numerator=f.denominator/getdenominator()*f2.numerator-f.denominator/f2.denominator*getnumerator();//算出分子
	} 
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;	
}
void Fraction::mulFraction(Fraction f2)//分数乘法
{
    Fraction f(1,1);
	f.denominator=getdenominator()*f2.denominator;//算出分母
	f.numerator=getnumerator()*f2.numerator;//算出分子
	f=f.HuJ(f.denominator,f.numerator);
	cout<<f.denominator<<"/"<<f.numerator<<endl;	
}
void Fraction::divFraction(Fraction f2)//分数除法
{
    Fraction f(1,1);
	f.denominator=getdenominator()*f2.numerator;//算出分母
	f.numerator=getnumerator()*f2.denominator;//算出分子
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
	max=greatestCommonDivisor(data1,data2);//算出最大公约数
	data1=data1/max;
	data2=data2/max;
	f.setFraction(data1,data2);
	return f;
}
void Cd()
{
	cout<<"1.两数相加"<<endl;
	cout<<"2.两数相减"<<endl;
    cout<<"3.两数相乘"<<endl;
    cout<<"4.两数相除"<<endl; 
    cout<<"0.退出"<<endl;
}
















