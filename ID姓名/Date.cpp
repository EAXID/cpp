#include <iostream>
using namespace std;


#include "Date.h"


Date::Date(int y,int m,int d){
	setDate(y,m,d);
}	

Date::Date(const Date &d){
	year=d.year;
	month=d.month;
	day=d.day; 
}
Date::~Date(){
	
}

void  Date::setDate(int y,int m,int d){
	while(1)//验证年 
	{
		if(y<1900){
			cout<<"please input the year(>=1900) again:"<<endl;
			cin>>y;
		}
		else{
		    year=y;
		    break;
		}
    }
    while(1)//验证月 
    {
    	if(m<1||m>12){
		    	cout<<"please input the month(1=<month<=12) again:"<<endl;
			    cin>>m;
		}
		else{
			month=m;
			break;
		}
	}
	while(1)//验证日期 
	{
	    if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){
	    	if(d<1||d>31){
			    cout<<"please input the day(1=<day<=31) again:"<<endl;
			    cin>>d;
			}
			else{
					day=d;
					break;
			}
	    }
		if((m==4)||(m==6)||(m==9)||(m==11)){
		    if(d<1||d>30){
			    cout<<"please input the day(1=<day<=30) again:"<<endl;
			    cin>>d;
			}
			else{
				day=d;
				break;
			}
		}
		if(m==2){
			if(isLeapYear()){
				if(d<1||d>29){
			        cout<<"please input the day(1=<day<=29) again:"<<endl;
			        cin>>d;
			    }
			    else{
					day=d;
					break;
				}
			}
			else {
		        if(d<1||d>28){
					cout<<"please input the day(1=<day<=29) again:"<<endl;
			        cin>>d;
			    }
			    else{
			        day=d;
			        break;
			    }
		    }
		}
	}
}

 int Date::getYear()const {
	return year;
}

 int Date::getMonth()const{
	return month;
}

 int Date::getDay()const{
	return day;
}
		
		
void Date::displayDate()const{
	cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}

Date& Date::addOneDay(){
	switch(month)
	{
		case 2: 
		    if(isLeapYear()){
			    if(day<29)
				    day++;	
				else{
				    day=1;
				    month++;				    
			    }
		    }
		    else{
			    if(day<28)
				    day++;
				else{
				    day=1;
				    month++;
				}
		    }
		    break;		     
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(day>30){
			    day=1;
			    month++;
			}
		     else
			    day++;
			break;			
		case 4:
		case 6:
		case 9:
		case 11:
			if(day>29){
			        day=1;
			        month++;
			}
		    else
			     day++;
			break;	
		case 12:
			if(day>30){
			day=1;
			month=1;
			year++;
		    }
		    else
		  	    day++;
	        break;
	    default: cout<<"ERROR" <<endl;
    }
	return *this;
}

/*void Date::addOneDay(){//另一种实现的addOneDay函数 
if(month==2){
		if(((year%4 == 0)&&(year%100 != 0)) || (year%400 == 0)){
			if(day<29)
				day++;
			
			else{
				day=1;
				month++;
			}
		}
		else{
			if(day<28)
				day++;
			else{
				day=1;
				month++;
			}
		}
	}
	else{
	   if(month==12){
		  if(day>30){
			day=1;
			month=1;
			year++;
		  }
		  else
		  	day++;
	   }
	   else{	
	      if(month==1||month==3||month==5||month==7||month==8||month==10){
		     if(day>30){
			    day=1;
			    month++;
		     }
		     else
			    day++;
	      }
		  else{
	          if(month==4||month==6||month==9||month==11){
		         if(day>29){
			        day=1;
			        month++;
		         }
		      }
		      else
			     day++;
		  }
	  }
    }
}
*/ 

bool Date::isLeapYear(){
	if((year%4==0&&year%100!=0)||(year%400==0))
	    return true;
	else
	    return false;
}











 
