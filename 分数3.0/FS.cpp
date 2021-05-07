#include<iostream>
using namespace std;
#include"FS.h" 
Fraction::Fraction(int data1,int data2,bool pos1) 
{
	setFraction(data1,data2,pos1);
}
void Fraction::setFraction(int num1,int num2,bool pos1)
{
	numerator=num1;
	denominator=num2;
	positive=pos1;
}
int Fraction::getnumerator()
{
	return numerator;
}
int Fraction::getdenominator()
{
	return denominator;
}
bool Fraction::getpos()
{
	return positive;
}
void Fraction::addFraction(Fraction f2)//������
{
	Fraction f(1,1,true);
	if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator&&getpos()!=f2.positive)
	{
		cout<<"0"<<endl;
	}
	else if(getpos()==f2.positive)
	{
		if(getpos())
		{
			f=Js1(f2);
	        if(f.denominator==f.numerator)
	        {
	        	cout<<"1"<<endl;
			}
			else
			{
	            cout<<f.numerator<<"/"<<f.denominator<<endl;	
			}   
		}
		else
		{
			f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"1"<<endl;
			}
			else
			{
	            cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;	
			}   
		}	
    }
    else
    {
    	if(getpos())
    	{
    		if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
    			cout<<f.numerator<<"/"<<f.denominator<<endl;
			}
			else
			{
				f=Js3(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
			}
		}
		else
		{
			if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
			}
			else
			{
				f=Js3(f2);
				cout<<f.numerator<<"/"<<f.denominator<<endl;
			}
		}
	}
}
void Fraction::subFraction(Fraction f2)//��������
{
    Fraction f(1,1,true);
    if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator&&getpos()==f2.positive)
	{
		cout<<"0"<<endl;
	}
	else if(getpos()==f2.positive)
	{
		if(getpos())
		{
		
			if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				cout<<f.numerator<<"/"<<f.denominator<<endl;
			}
			else
			{
				f=Js3(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
			}	
		}
		else
		{	
		    if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
			}
			else
			{
				f=Js3(f2);
				cout<<f.numerator<<"/"<<f.denominator<<endl;
			}
			   
		}	
    }
    else
    {
    	if(getpos())
    	{
    	    f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"1"<<endl;
			}
			else
			{
	            cout<<f.numerator<<"/"<<f.denominator<<endl;	
			}
		}
		else
		{
		    f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"-1"<<endl;
			}
			else
			{
	            cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;	
			}
		}
	}	
}
void Fraction::mulFraction(Fraction f2)//�����˷�
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.denominator;//�����ĸ
	f.numerator=getnumerator()*f2.numerator;//�������
	f=f.HuJ(f.denominator,f.numerator);
	if(getpos()==f2.positive)
	{
		if(f.denominator==f.numerator)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<f.denominator<<"/"<<f.numerator<<endl;
		}	
	}
	else
	{
		if(f.denominator==f.numerator)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<"-"<<f.denominator<<"/"<<f.numerator<<endl;
		}	
	}	
}
void Fraction::divFraction(Fraction f2)//��������
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.numerator;//�����ĸ
	f.numerator=getnumerator()*f2.denominator;//�������
	f=f.HuJ(f.denominator,f.numerator);
	if(getpos()==f2.positive)
	{
		if(f.denominator==f.numerator)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<f.denominator<<"/"<<f.numerator<<endl;
		}	
	}
	else
	{
		if(f.denominator==f.numerator)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<"-"<<f.denominator<<"/"<<f.numerator<<endl;
		}	
	}			
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
	Fraction f(data1,data2,true);
	max=greatestCommonDivisor(data1,data2);//������Լ��
	data1=data1/max;
	data2=data2/max;
	f.setFraction(data1,data2,true);
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
bool setpos(char h)
{
	if(h=='+')
	{
		return true;
	}
	else
	{
		return false;
	}
}
Fraction Fraction::Js1(Fraction f2)//������� 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//�����ĸ
	f.numerator=f.denominator/getdenominator()*getnumerator()+f.denominator/f2.denominator*f2.numerator;//�������
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
Fraction Fraction::Js2(Fraction f2)//ǰ���� 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//�����ĸ
	f.numerator=f.denominator/getdenominator()*getnumerator()-f.denominator/f2.denominator*f2.numerator;//�������
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
Fraction Fraction::Js3(Fraction f2)//���ǰ 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//�����ĸ
	f.numerator=f.denominator/f2.denominator*f2.numerator-f.denominator/getdenominator()*getnumerator();//�������
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
void Fraction::greatFraction(Fraction f2)//�жϴ���
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<">"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<">"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<">"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
} 
void Fraction::lessFraction(Fraction f2)//�ж�С�� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
}
void Fraction::greatThanFraction(Fraction f2)//�жϴ���� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
}
void Fraction::lessThanFraction(Fraction f2)//�ж�С���� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	}  
}
void Fraction::equalFraction(Fraction f2)//�жϵ���
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		
	}
	else
	{
		 if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"="<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"="<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	}
}	
void Fraction::notequalFraction(Fraction f2)//�жϲ�����
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		
	}
	else
	{
		 if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"="<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"="<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	}
}
void Fraction::antiFration()//����ȡ�� 
{
	if(getpos())
	{
		cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<endl;
	} 
	else
	{
		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<endl;
	}
}
void Fraction::absFration()//����ֵ 
{
	cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<endl;
}
void Cd2()
{
	cout<<"1.��������"<<endl;
	cout<<"2.�����Ƚ�"<<endl;
	cout<<"3.����ȡ��"<<endl;
	cout<<"4.��������ֵ"<<endl;
}
void Cd3()
{
	cout<<"1.�жϴ���"<<endl;
	cout<<"2.�ж�С��"<<endl;
	cout<<"3.�жϴ��ڵ���"<<endl;
	cout<<"4.�ж�С�ڵ���"<<endl;
	cout<<"5.�жϵ���"<<endl;
	cout<<"6.�жϲ�����"<<endl; 
}	
	
	
	
	
	
	
	
	













