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

Fraction Fraction::transformation(int data1,int data2)		//ת���������� 
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
		
		//�����ļӼ��˳� 
Fraction &Fraction::operator+(Fraction &f2)
{
	static Fraction f(0,0);	//����һ���µķ��� ���洢��Ӽ�  ��˳���ķ��� 
	cout<<"�������Ϊ��" ; 
	//���������ķ�ĸ�ȵ�����С������
	f.denominator=leaseCommonMultiple(getDenominator(),f2.denominator);
	//ͨ�ֺ�ķ��ӵ���  ����С������/ԭ���ķ�ĸ��* ԭ���ķ��� 
	f.numerator=((leaseCommonMultiple(getDenominator(),f2.denominator)/getDenominator())*getNumerator())
	+((leaseCommonMultiple(getDenominator(),f2.denominator)/f2.denominator)*f2.numerator);
	//����ʼ 
	f=f.transformation(f.numerator,f.denominator);
	cout<<f.numerator<<"/"<<f.denominator<<endl;
	return f;
}

double Fraction::operator-(Fraction &f2)
{
	Fraction f(0,0);
	cout<<"�������Ϊ��" ; 
	//���������ķ�ĸ�ȵ�����С������
	f.denominator=leaseCommonMultiple(getDenominator(),f2.denominator);
	//ͨ�ֺ�ķ��ӵ���  ����С������/ԭ���ķ�ĸ��* ԭ���ķ��� 
	f.numerator=((leaseCommonMultiple(getDenominator(),f2.denominator)/getDenominator())*getNumerator())
	-((leaseCommonMultiple(getDenominator(),f2.denominator)/f2.denominator)*f2.numerator);
	//����ʼ 
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
	
	cout<<"�������Ϊ��" ; 
	static Fraction f(0,0);
	if((getNumerator()==f2.denominator)&&(getDenominator()==f2.numerator))
	{
		cout<<1<<endl;
		f.numerator=f.denominator=1;
		return f;
	}
		
	else
	{
		f.numerator=getNumerator()*f2.numerator;		//����	 
		f.denominator=getDenominator()*f2.denominator;	//��ĸ
		f=f.transformation(f.numerator,f.denominator) ;
		cout<<f.numerator<<"/"<<f.denominator<<endl;
		return f;
	}
		
}
Fraction &Fraction::operator/(Fraction &f2)
{
	cout<<"�������Ϊ��" ; 
	
	static Fraction f(0,0);
	if((getNumerator()==f2.numerator)&&(getDenominator()==f2.denominator))
	{
		cout<<1<<endl;
		f.numerator=f.denominator=1;
		return f;
	}	
	else
	{
		f.numerator=getNumerator()*f2.denominator;		//����	 
		f.denominator=getDenominator()*f2.numerator;	//��ĸ
		//����һ�������� �����Ǹ����ĵ���
		f=f.transformation(f.numerator,f.denominator);
		cout<<f.numerator<<"/"<<f.denominator<<endl;
		return f;
	}
	//cout<<getNumerator()*f2.denominator<<"/"<<getDenominator()*f2.numerator<<endl;
}

int Fraction::greatestCommonDivisor(int data1,int data2 )//�����Լ�� 
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
int Fraction::leaseCommonMultiple(int data1,int data2) //����С������ 
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


void Fraction::antiFraction()					//ȡ�� 
{
	Fraction f;
	f.numerator=(getNumerator()-2*getNumerator());
	f.denominator=getDenominator();
	cout<<"ȡ�Ǻ�Ľ���ǣ�"<<endl;
	cout<<f.numerator<<"/"<<f.denominator<<endl;
} 
bool Fraction::operator>(Fraction &f2)		//���� 
{
	if(*this-f2>0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"����"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"������"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator<(Fraction &f2)			//С�� 
{
	if(*this-f2<0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"С��"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"��С��"<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator==(Fraction &f2)			//���� 
{
	if(*this-f2==0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"���� "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"������ "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


bool Fraction::operator!=(Fraction &f2)			//������ 
{
	if(*this-f2==0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"���� "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"������ "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
}
 
bool Fraction::operator>=(Fraction &f2)			//���ڵ��� 
{
	if(*this-f2>=0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"���ڵ���  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"�����ڵ���  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}



bool Fraction::operator<=(Fraction &f2)			//С�ڵ��� 
{
	if(*this-f2<=0)
	{
		cout<<this->numerator<<"/"<<this->denominator<<"С�ڵ���  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return true;
	}
	else
	{
		cout<<this->numerator<<"/"<<this->denominator<<"��С�ڵ���  "<<f2.numerator<<"/"<<f2.denominator<<endl;
		return false;
	}
}


void Fraction::absFraction()						//����ֵ 
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
	cout<<"ȡ����ֵ��Ľ���ǣ�"<<endl;
	cout<<f.numerator<<"/"<<f.denominator<<endl;
		
}
