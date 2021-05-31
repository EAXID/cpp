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
Fraction& Fraction::operator+(Fraction& f2)//分数加
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
Fraction& Fraction::operator-(Fraction& f2)//分数减法
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
Fraction& Fraction::operator*(Fraction& f2)//分数乘法
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.denominator;//算出分母
	f.numerator=getnumerator()*f2.numerator;//算出分子
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
Fraction&  Fraction::operator/(Fraction& f2)//分数除法
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.numerator;//算出分母
	f.numerator=getnumerator()*f2.denominator;//算出分子
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
	max=greatestCommonDivisor(data1,data2);//算出最大公约数
	data1=data1/max;
	data2=data2/max;
	f.setFraction(data1,data2,true);
	return f;
}

void Cd()
{
	cout<<"1.两数相加"<<endl;
	cout<<"2.两数相减"<<endl;
    cout<<"3.两数相乘"<<endl;
    cout<<"4.两数相除"<<endl; 
    cout<<"5.+="<<endl;
    cout<<"6.*="<<endl;
    cout<<"7.++"<<endl;
    cout<<"8.--"<<endl;
    cout<<"0.退出"<<endl;
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
Fraction Fraction::Js1(Fraction f2)//两个相加 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//算出分母
	f.numerator=f.denominator/getdenominator()*getnumerator()+f.denominator/f2.denominator*f2.numerator;//算出分子
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
Fraction Fraction::Js2(Fraction f2)//前减后 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//算出分母
	f.numerator=f.denominator/getdenominator()*getnumerator()-f.denominator/f2.denominator*f2.numerator;//算出分子
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
Fraction Fraction::Js3(Fraction f2)//后减前 
{
	Fraction f(1,1,true);
	f.denominator=leaseCommonMultiple(getdenominator(),f2.denominator);//算出分母
	f.numerator=f.denominator/f2.denominator*f2.numerator-f.denominator/getdenominator()*getnumerator();//算出分子
	f=f.HuJ(f.numerator,f.denominator);
	return f;
}
bool Fraction::operator>(Fraction f2)//判断大于
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
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
				return false;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	} 
} 
bool Fraction::operator<(Fraction f2)//判断小于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	} 
}
bool Fraction::operator>=(Fraction f2)//判断大等于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
	} 
}
bool Fraction::operator<=(Fraction f2)//判断小等于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
	}  
}
bool Fraction::operator==(Fraction f2)//判断等于
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return false;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return false;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return false;
			}
		 }
	}
}	
bool Fraction::operator!=(Fraction f2)//判断不等于
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			return true;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		 		return true;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
				return true;
			}
		 }
	}
}
void Fraction::antiFration()//分数取非 
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
void Fraction::absFration()//绝对值 
{
	cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<endl;
}
void Cd2()
{
	cout<<"1.分数计算"<<endl;
	cout<<"2.分数比较"<<endl;
	cout<<"3.分数取非"<<endl;
	cout<<"4.分数绝对值"<<endl;
}
void Cd3()
{
	cout<<"1.判断大于"<<endl;
	cout<<"2.判断小于"<<endl;
	cout<<"3.判断大于等于"<<endl;
	cout<<"4.判断小于等于"<<endl;
	cout<<"5.判断等于"<<endl;
	cout<<"6.判断不等于"<<endl; 
}	
Fraction& Fraction::operator+=(Fraction &f2) //加等
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
	f.denominator=denominator*f2.denominator;//算出分母
	f.numerator=numerator*f2.numerator;//算出分子
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
	cout<<"请输分数的正负"<<endl;
    cin>>a; 
    f.positive=setpos(a);
    cout<<"请输入分数的分子"<<endl;
    cin>>f.numerator; 
    cout<<"请输入分数的分母"<<endl;
    cin>>f.denominator;
    return cin;
}
	
	
	













