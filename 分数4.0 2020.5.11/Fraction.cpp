#include <iostream>
using namespace std;

#include "Fraction.h"

Fraction::Fraction(int data1,int data2) 
{
	setFraction(data1,data2);
}

void Fraction::setFraction(int data1,int data2)
{
	numerator=data1;
	denominator=data2;
}

Fraction Fraction::transformation(int data1,int data2)		//转换成最简分数 
{
	int i;
	Fraction f(data1,data2);
	int max=greatestCommonDivisor(data1,data2);
	while((data1%max==0&&data2%max==0)&&i<100)
	{
		data1/=max;
		data2/=max;
		i++;
	}
	f.setFraction(data1,data2);
	return f;
}	


int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}
		
		//分数的加减乘除 
Fraction &Fraction::operator+(Fraction &f2)
{
	static Fraction f(0,0);	//定义一个新的分数 来存储相加减  相乘除后的分数 
	cout<<"两数相加为：" ; 
	//让最简分数的分母先等于最小公倍数
	f.denominator=leaseCommonMultiple(getDenominator(),f2.denominator);
	//通分后的分子等于  （最小公倍数/原来的分母）* 原来的分子 
	f.numerator=((leaseCommonMultiple(getDenominator(),f2.denominator)/getDenominator())*getNumerator())
	+((leaseCommonMultiple(getDenominator(),f2.denominator)/f2.denominator)*f2.numerator);
	//化简开始 
	f=f.transformation(f.numerator,f.denominator);
	cout<<f.numerator<<"/"<<f.denominator<<endl;
	return f;
}

double Fraction::operator-(Fraction &f2)
{
	Fraction f(0,0);
	cout<<"两数相减为：" ; 
	//让最简分数的分母先等于最小公倍数
	f.denominator=leaseCommonMultiple(getDenominator(),f2.denominator);
	//通分后的分子等于  （最小公倍数/原来的分母）* 原来的分子 
	f.numerator=((leaseCommonMultiple(getDenominator(),f2.denominator)/getDenominator())*getNumerator())
	-((leaseCommonMultiple(getDenominator(),f2.denominator)/f2.denominator)*f2.numerator);
	//化简开始 
	f=f.transformation(f.numerator,f.denominator) ;
	if(f.denominator<0)
		cout<<(f.numerator-2*f.numerator)<<"/"<<(f.denominator-2*f.denominator)<<endl<<endl;
	else
		cout<<f.numerator<<"/"<<f.denominator<<endl<<endl;
	double sub=(1.0*f.numerator/f.denominator);
	return sub;
}
Fraction &Fraction::operator*(Fraction &f2)
{
	
	cout<<"两数相乘为：" ; 
	static Fraction f(0,0);
	if((getNumerator()==f2.denominator)&&(getDenominator()==f2.numerator))
	{
		cout<<1<<endl;
		f.numerator=f.denominator=1;
		return f;
	}
		
	else
	{
		f.numerator=getNumerator()*f2.numerator;		//分子	 
		f.denominator=getDenominator()*f2.denominator;	//分母
		f=f.transformation(f.numerator,f.denominator) ;
		cout<<f.numerator<<"/"<<f.denominator<<endl;
		return f;
	}
		
}
Fraction &Fraction::operator/(Fraction &f2)
{
	cout<<"两数相除为：" ; 
	
	static Fraction f(0,0);
	if((getNumerator()==f2.numerator)&&(getDenominator()==f2.denominator))
	{
		cout<<1<<endl;
		f.numerator=f.denominator=1;
		return f;
	}	
	else
	{
		f.numerator=getNumerator()*f2.denominator;		//分子	 
		f.denominator=getDenominator()*f2.numerator;	//分母
		//除于一个数等于 乘以那个数的倒数
		f=f.transformation(f.numerator,f.denominator);
		cout<<f.numerator<<"/"<<f.denominator<<endl;
		return f;
	}
	//cout<<getNumerator()*f2.denominator<<"/"<<getDenominator()*f2.numerator<<endl;
}

int Fraction::greatestCommonDivisor(int data1,int data2 )//求最大公约数 
{
	int r,q,mul,temp;
	r=data1%data2;mul=data1*data2;
	while(r!=0)
	{
		data1=data2;data2=r;r=data1%data2;
	 } 
	 temp=data2;
	return temp;
}
int Fraction::leaseCommonMultiple(int data1,int data2) //求最小公倍数 
{
	int r,q,mul;
	r=data1%data2;mul=data1*data2;
	while(r!=0)
	{
		data1=data2;data2=r;r=data1%data2;
	 } 
	 q=mul/data2;
	return q;
}


void Fraction::antiFraction()					//取非 
{
	Fraction f;
	f.numerator=(getNumerator()-2*getNumerator());
	f.denominator=getDenominator();
	cout<<"取非后的结果是："<<endl;
	cout<<f.numerator<<"/"<<f.denominator<<endl;
} 
bool Fraction::operator>(Fraction &f2)		//大于 
{
	if(*this-f2>0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"大于"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不大于"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator<(Fraction &f2)			//小于 
{
	if(*this-f2<0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"小于"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不小于"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator==(Fraction &f2)			//等于 
{
	if(*this-f2==0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"等于 "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不等于 "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator!=(Fraction &f2)			//不等于 
{
	if(*this-f2==0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"等于 "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不等于 "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
}
 
bool Fraction::operator>=(Fraction &f2)			//大于等于 
{
	if(*this-f2>=0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"大于等于  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不大于等于  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}



bool Fraction::operator<=(Fraction &f2)			//小于等于 
{
	if(*this-f2<=0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"小于等于  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"不小于等于  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


void Fraction::absFraction()						//绝对值 
{
	Fraction f;
	if(getNumerator()<0)
	{
		f.numerator=(getNumerator()-2*getNumerator());
		f.denominator=getDenominator();
	}
	else
	{
		f.numerator=getNumerator();
		f.denominator=getDenominator();
	}
	cout<<"取绝对值后的结果是："<<endl;
	cout<<f.numerator<<"/"<<f.denominator<<endl;
		
}
