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
bool Date::operator==(Date& d1)//运算符重载,2个日期判等
{
	if ((this->year == d1.year) && (this->month == d1.month) && (this->day == d1.day))
	{
		
		return true;
	}
	else
	{
		return false;
	}
} 
bool Date::operator!=(Date & d1)
{
	if ((this->year == d1.year) && (this->month == d1.month) && (this->day == d1.day))
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool Date::operator>(Date &d1) 
{
if (this->year > d1.year)
	{
		return true;
	}
	else if(this->year ==d1.year&&this->month > d1.month)
	{
		
		return true;
	}
	else if (this->year ==d1.year&&this->month == d1.month&&this->day > d1.day)
	{
		
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::operator<(Date & d1)
{
	if (this->year < d1.year)
	{
		return true;
	}
	else if (this->year==d1.year&&month < d1.month)
	{
		return true;
	}
	else if (this->year==d1.year&&month==d1.month&&this->day < d1.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
ostream& operator<<(ostream& cout, Date& d1)
{
	cout<<d1.getYear()<<"/"<<d1.getMonth()<<"/"<<d1.getDay()<<endl;
	return cout;
}
istream& operator>>(istream& cin, Date& d)
{
	int y,m,r;
	cin>>y>>m>>r;
	d.setDate(y,m,r);
}
int Date::operator-(Date& d)
{
	Date t=d;
	int day=0;
	while(*this!=t) 
	{
		t.day++;
	    if(t.year%400==0||(t.year%4==0&&t.year%100!=0))
	    {
		    if(t.month==2&&t.day==30)
		    {
		    	t.day=1;
			    t.month++;
		    }
	    }
	    else
	    {
		    if(t.month==2&&t.day==29)
		    {
			    t.day=1;
			    t.month++;
		    }
	    }
	    if(t.day>31)
	    {
		    if(t.month==12)
		    {
			    t.day=1;
			    t.month=1;
			    t.year++;
		    }
		    else
		    {
			    t.day=1;
		    	t.month++;
		    }
	   }
	   else if(t.day==31)
	    {
		    if(t.month==4||t.month==6||t.month==9||t.month==11) 
		    {
			    t.day=1;
			    t.month++;
		    }
	   }
	   day++;
	}
	return day;
	
	
	
}























