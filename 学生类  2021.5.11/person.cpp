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
		type="ѧ��"; 
	}
	else
	{
		type="��ʦ"; 
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
	cout<<"ѧ���ţ�"<<getid()<<endl;
	cout<<"������    "<<getname()<<endl;
	cout<<"��ݣ�    "<<gettype()<<endl;
	cout<<"���᣺    "<<getnativeplace()<<endl;
	birthday.Pdate();
	cout<<"����:     "; 
	birthday.Date::dispaly();
}
ostream& operator<<(ostream& cout,person& p)
{
	cout<<"ѧ���ţ�"<<p.getid()<<endl;
	cout<<"������    "<<p.getname()<<endl;
	cout<<"��ݣ�    "<<p.gettype()<<endl;
	cout<<"���᣺    "<<p.getnativeplace()<<endl;
	p.birthday.Pdate();
	cout<<"����:     "; 
	p.birthday.Date::dispaly();
	return cout;
}
bool person::operator>(person & p)//Person���ճ������ڽ��д�С�ıȽ� 
{
	if (this->birthday > p.birthday)
	{
		cout << this->name << "�������" << p.name << "��" << endl;
		return true;
	}
	else
	{
		cout << this->name << "�������" << p.name << "С" << endl;
		return false;
	}
}
















