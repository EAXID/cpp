#include"person.h"
#include"date.h"
#include<iostream>
using namespace std;
person::person(string id,string name,string password,char type,string nativeplace,int year,int month,int day):birthday(year,month,day)
{
	setperson(id,name,password,type,nativeplace);
}
person::~person()
{
	;
}
person::person(const person &p )
{
	ID=p.ID;
	name=p.name;
	type=p.type;
	nativePlace=p.nativePlace;
	birthday=p.birthday;
	
}
void person::setperson(string id,string name1,string password,char type1,string nativeplace)
{
	ID=id;
	name=name1;
	if(type1=='1')
	{
		type="学生"; 
	}
	else
	{
		type="教师"; 
	}
	nativePlace=nativeplace;
}
string person::getid()
{
	return ID;
}
string person::getname()
{
	return name;
}
string person::gettype()
{
	
	return type;
}
string person::getnativeplace()
{
	return nativePlace;
}

void person::display()
{
	cout<<"学工号："<<getid()<<endl;
	cout<<"姓名：    "<<getname()<<endl;
	cout<<"身份：    "<<gettype()<<endl;
	cout<<"籍贯：    "<<getnativeplace()<<endl;
	birthday.Pdate();
	cout<<"生日:     "; 
	birthday.Date::dispaly();
}


















