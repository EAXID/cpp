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
void Fraction::addFraction(Fraction f2)//分数加
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
void Fraction::subFraction(Fraction f2)//分数减法
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
void Fraction::mulFraction(Fraction f2)//分数乘法
{
    Fraction f(1,1,true);
	f.denominator=getdenominator()*f2.denominator;//算出分母
	f.numerator=getnumerator()*f2.numerator;//算出分子
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
void Fraction::divFraction(Fraction f2)//分数除法
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
void Fraction::greatFraction(Fraction f2)//判断大于
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<">"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
} 
void Fraction::lessFraction(Fraction f2)//判断小于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
}
void Fraction::greatThanFraction(Fraction f2)//判断大等于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		} 
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
	}
	else
	{
		 if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;	
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()<(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≯"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≧"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	} 
}
void Fraction::lessThanFraction(Fraction f2)//判断小等于 
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 	
		 }
		 else if((double)getnumerator()/getdenominator()>(double)f2.numerator/f2.denominator)
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≮"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
		 else
		 {
		 	if(getpos())
		 	{
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≦"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	}  
}
void Fraction::equalFraction(Fraction f2)//判断等于
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
		 }
	}
}	
void Fraction::notequalFraction(Fraction f2)//判断不等于
{
	if(getpos()!=f2.positive)
	{
		if(getpos())
		{
			cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
		}
		else
		{
			cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
		 		cout<<"+"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"+"<<f2.numerator<<"/"<<f2.denominator<<endl;
			}
			else
			{
				cout<<"-"<<getnumerator()<<"/"<<getdenominator()<<"≠"<<"-"<<f2.numerator<<"/"<<f2.denominator<<endl;
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
	
	
	
	
	
	
	
	













