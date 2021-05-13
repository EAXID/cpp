#include <iostream>
using namespace std;
#include <cstring>

#include"Person.h"
#include "Date.h" 


Person::Person(char * id1,char* name1,string native,Date& bir):birthday(bir){

	ID=new char[strlen(id1)+1];
	strcpy(ID,id1);
	//�˴�����Ĵ����벹��
	name=new char[strlen(name1)+1];
	strcpy(name,name1);
	
	nativePlace=native;	
}

Person::Person(){//�պ����� 
}

Person::Person(const Person & per):birthday(per.birthday)// ID��name��Ҫ��� ,ʹ��new 
{
	ID=new char[strlen(per.ID)+1];
	strcpy(ID,per.ID);
	//�˴�����Ĵ����벹�� 
	name=new char[strlen(per.name)+1];
	strcpy(name,per.name);
	
	nativePlace=per.nativePlace;	
	
}

Person::~ Person()//ʹ��delete 
{
	delete [] ID;
	delete [] name;
}
		
void Person::setPerson(char * id1,char* name1,string native,Date& bir)//����Ҫ�õ�new
{
    ID=new char[strlen(id1)+1];
	strcpy(ID,id1);
	//�˴�����Ĵ����벹��
	name=new char[strlen(name1)+1];
	strcpy(name,name1);
	
	nativePlace=native;	
	
}
void Person::setID(char *id1)
{
	ID=new char[strlen(id1)+1];
	strcpy(ID,id1);
}
void Person::setName(char *name1)
{
	name=new char[strlen(name1)+1];
	strcpy(name,name1);
}
void Person::setNative(string native)
{
	nativePlace=native;
}
const char* Person::getID()const
{
	return ID;
}
const char* Person::getID()
{
	return ID;
}
const char* Person::getName()const
{
	return name;
}
const char* Person::getName()
{
	return name;
}
		
string Person::getNativePlace()const
{
	return nativePlace;
}
string Person::getNativePlace()
{
	return nativePlace;
}
		
Date Person::getBirthday() const
{
	return birthday;
}
Date Person::getBirthday()
{
	return birthday;
}
	    
void Person::displayPerson() const
{
	cout<<"ID:"<<*ID<<endl;
	cout<<"name"<<*name<<endl;
	cout<<"����"<<nativePlace<<endl;
	birthday. displayDate();
}
void Person::displayPerson()
{
	cout<<"ID:"<<ID<<endl;
	cout<<"name"<<name<<endl;
	cout<<"����"<<nativePlace<<endl;
	birthday. displayDate();
	}	



	
