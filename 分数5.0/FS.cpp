#include<iostream>
using namespace std;
#include"FS.h" 
Fraction::Fraction()
{
	
}
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
Fraction& Fraction::operator+(Fraction& f2)//������
{
	Fraction f(1,1,true);
	if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator&&getpos()!=f2.positive)
	{
		cout<<"0"<<endl;
		Fraction f1(0,0,true);
		return f1;
	}
	else if(getpos()==f2.positive)
	{
		if(getpos())
		{
			f=Js1(f2);
	        if(f.denominator==f.numerator)
	        {
	        	cout<<"1"<<endl;
	        	return f;
			}
			else
			{
	            cout<<f<<endl;
				return f;	
			}   
		}
		else
		{
			f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"-1"<<endl;
	        	return f;
			}
			else
			{
	            f.positive=false;
			    cout<<f<<endl;
				return f;	
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
    			cout<<f<<endl;
    			return f;
			}
			else
			{
				f=Js3(f2);
				f.positive=false;
			    cout<<f<<endl;
				return f;
			}
		}
		else
		{
			if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				f.positive=false;
			    cout<<f<<endl;
				return f;
			}
			else
			{
				f=Js3(f2);
				cout<<f<<endl;
				return f;
			}
		}
	}
}
Fraction& Fraction::operator-(Fraction& f2)//��������
{
    Fraction f(1,1,true);
    if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator&&getpos()==f2.positive)
	{
		Fraction f1(0,0,true);
		cout<<"0"<<endl;
		return f1;
	}
	else if(getpos()==f2.positive)
	{
		if(getpos())
		{
		
			if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				cout<<f<<endl;
				return f;
			}
			else
			{
				f=Js3(f2);
				f.positive=false;
			    cout<<f<<endl;
				return f;
			}	
		}
		else
		{	
		    if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				f.positive=false;
			    cout<<f<<endl;
				return f;
			}
			else
			{
				f=Js3(f2);
			    cout<<f<<endl;
				return f;
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
	        	Fraction f1(1,1,true);
				return f1;
			}
			else
			{
			    cout<<f<<endl;
				return f;	
			}
		}
		else
		{
		    f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"-1"<<endl;
	        	Fraction f1(1,1,false);
				return f1;
			}
			else
			{
	            f.positive=false;
			    cout<<f<<endl;
				return f;
			}
		}
	}	
}
Fraction& Fraction::operator*(Fraction& f2)//�����˷�
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.denominator;//�����ĸ
	f.numerator=getnumerator()*f2.numerator;//�������
	f=f.HuJ(f.numerator,f.denominator);
	if(getpos()==f2.positive)
	{
		if(f.denominator==f.numerator)
		{
			cout<<"1"<<endl;
			return f;
		}
		else
		{
			cout<<f<<endl;
			return f;
		}	
	}
	else
	{
		if(f.denominator==f.numerator)
		{
			cout<<"-1"<<endl;
			Fraction f1(1,1,false);
			return f1;
		}
		else
		{
			f.positive=false;
			cout<<f<<endl;
			return f;
		}	
	}	
}
Fraction&  Fraction::operator/(Fraction& f2)//��������
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
			return f;
		}
		else
		{
			cout<<f<<endl;
			return f;
		}	
	}
	else
	{
		if(f.denominator==f.numerator)
		{
			cout<<"-1"<<endl;
			Fraction f1(1,1,false);
			return f1;
		}
		else
		{
			f.positive=false;
			cout<<f<<endl;
			return f;
		}	
	}			
}
int Fraction::greatestCommonDivisor(int data1,int data2 )
{
	int m,n,i;
	int r,multiple;
	m=data1,n=data2;
	if(m>n)
	{
		
	}
	else
	{
		i=m;
		m=n;
		n=i;
	}
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
    cout<<"5.+="<<endl;
    cout<<"6.*="<<endl;
    cout<<"7.++"<<endl;
    cout<<"8.--"<<endl;
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
bool Fraction::operator>(Fraction f2)//�жϴ���
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<">"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<">"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
				return false;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
		 		
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<">"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	} 
} 
bool Fraction::operator<(Fraction f2)//�ж�С�� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"<"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	} 
}
bool Fraction::operator>=(Fraction f2)//�жϴ���� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�R"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
	} 
}
bool Fraction::operator<=(Fraction f2)//�ж�С���� 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
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
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"�Q"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
	}  
}
bool Fraction::operator==(Fraction f2)//�жϵ���
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
		
	}
	else
	{
		 if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"="<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"="<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	}
}	
bool Fraction::operator!=(Fraction f2)//�жϲ�����
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		}
		
	}
	else
	{
		 if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"="<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"="<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"��"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
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
Fraction& Fraction::operator+=(Fraction &f2) //�ӵ�
{
	Fraction f(1,1,true);
	if(getdenominator()==0)
	{
	    this->denominator=f2.denominator;
	    this->numerator=f2.numerator;
	    this->positive=f2.positive;
	    if(positive)
	    {
	    	cout<<numerator<<"/"<<denominator<<endl;
		}
		else
		{
			cout<<"-"<<numerator<<"/"<<denominator<<endl;
		}
	    
	    return *this;
	}
	else if((double)getnumerator()/getdenominator()==(double)f2.numerator/f2.denominator&&getpos()!=f2.positive)
	{
		cout<<"0"<<endl;
		this->denominator=0;
		this->numerator=0;
		this->positive=true;
		return *this;
	}
	else if(getpos()==f2.positive)
	{
		if(getpos())
		{
			f=Js1(f2);
	        if(f.denominator==f.numerator)
	        {
	        	cout<<"1"<<endl;
	        	this->denominator=1;
		        this->numerator=1;
		        this->positive=true;
		        return *this;
			}
			else
			{
	            cout<<f.numerator<<"/"<<f.denominator<<endl;
	            this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=true;
		        return *this;		
			}   
		}
		else
		{
			f=Js1(f2);
			if(f.denominator==f.numerator)
	        {
	        	cout<<"-1"<<endl;
	        	this->denominator=1;
		        this->numerator=1;
		        this->positive=false;
		        return *this;
			}
			else
			{
	            cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
	            this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=false;
		        return *this;	
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
    			this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=true;
		        return *this;
			}
			else
			{
				f=Js3(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
				this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=false;
		        return *this;
			}
		}
		else
		{
			if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
    		{
    			f=Js2(f2);
				cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
				this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=false;
		        return *this;
			}
			else
			{
				f=Js3(f2);
				cout<<f.numerator<<"/"<<f.denominator<<endl;
				this->denominator=f.denominator;
		        this->numerator=f.numerator;
		        this->positive=true;
		        return *this;
			}
		}
	}
}	
Fraction& Fraction::operator*=(Fraction &f2)
{
	Fraction f(1,1,true);
	f.denominator=denominator*f2.denominator;//�����ĸ
	f.numerator=numerator*f2.numerator;//�������
	f=f.HuJ(f.numerator,f.denominator);
	if(getpos()==f2.positive)
	{
		if(f.denominator==f.numerator)
		{
			cout<<"1"<<endl;
			this->denominator=1;
			this->numerator=1;
			this->positive=true;
	        return *this;
		}
		else
		{
			cout<<f.numerator<<"/"<<f.denominator<<endl;
			this->denominator=f.denominator;
		    this->numerator=f.numerator;
		    this->positive=true;
		    return *this;
		}	
	}
	else
	{
		if(f.denominator==f.numerator)
		{
			cout<<"-1"<<endl;
			this->denominator=1;
			this->numerator=1;
			this->positive=false;
	        return *this;
		}
		else
		{
			cout<<"-"<<f.numerator<<"/"<<f.denominator<<endl;
			this->denominator=f.denominator;
		    this->numerator=f.numerator;
		    this->positive=false;
		    return *this;
		}	
	}	
}	
Fraction& Fraction::operator++()
{
	if(getpos())
	{
		this->numerator=numerator+denominator;
		cout<<*this<<endl;
		return *this;
	}
	else
	{
		this->numerator=denominator-numerator;
		if(numerator>0)
		{
			this->positive=true;
			cout<<*this<<endl;
		}
		else
		{
			this->positive=false;
			cout<<*this<<endl;
		}
		
		return *this;
	}
}	
Fraction Fraction::operator--(int)
{
	Fraction f=*this;
	if(!getpos())
	{
		this->numerator=numerator+denominator;
		cout<<f<<endl;
		return f;
	}
	else
	{
		this->numerator=numerator-denominator;
		if(numerator>0)
		{
			cout<<f<<endl;
		}
		else
		{
			
			cout<<f<<endl;
		}
		
		return f;
	}
}	
ostream& operator<<(ostream& cout,Fraction& f)
{
	if(f.positive)
	{
		cout<<f.numerator<<"/"<<f.denominator;
		return cout;
	}
	else
	{
		cout<<"-"<<f.numerator<<"/"<<f.denominator;
		return cout;
	}
}	
istream& operator>>(istream& cin,Fraction&  f)
{
	char a;
	cout<<"�������������"<<endl;
    cin>>a; 
    f.positive=setpos(a);
    cout<<"����������ķ���"<<endl;
    cin>>f.numerator; 
    cout<<"����������ķ�ĸ"<<endl;
    cin>>f.denominator;
    return cin;
}
	
	
	













