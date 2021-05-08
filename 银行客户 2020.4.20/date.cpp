#include<iostream>
using namespace std;
#include"date.h"
Date::Date(int y,int m,int d)
{
	setDate(y,m,d);
}
Date::Date(const Date & d)
{
	year=d.year;
	month=d.month;
	day=d.day;
}
Date::~Date()
{
    ;	
}
void Date::setDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
void Date::Pdate()
{
	int a=0;
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(1)
	{
		if(year>=1900)
	    {
		    if(year%400==0||(year%4==0&&year%100!=0))
		    {
			    a=1;
			    break;
		    }
		    else
		    {
			    a=2;
			    break;
		    }
	    }
	    cout<<"年输入错误，重新输入"<<endl;
		cin>>year; 
	}
	while(1)
	{
		if(month<1||month>12)
		{
			cout<<"月输入错误，重新输入"<<endl;
			cin>>month; 
		}
		else
		{
			break;
		}
	}
	while(1) 
	{
		
		if(a==1)
	    {
		    b[2]=29;
		    if(day>=1&&day<=b[month])
	    	{
		    	break;
		    }
		    else
		    {
			    cout<<"日输入错误，重新输入"<<endl;
			    cin>>day; 
		    }
	    }
	    else if(a==2)
	    {
		    if(day>=1&&day<=b[month])
		    {
		    	break;
		    }
		    else
		    {
		    	cout<<"日输入错误，重新输入"<<endl;
			    cin>>day; 
		    } 
	}
	
	
	}
	
}
void Date::dispaly()
{
    cout<<getYear()<<"."<<getMonth()<<"."<<getDay()<<endl;
}

















