#include <iostream>
using namespace std;
#include <cstring>

#include"Person.h"
#include "Date.h" 


Person::Person(char * id1,char* name1,string native,Date& bir):birthday(bir){

	ID=new char[strlen(id1)+1];
	strcpy(ID,id1);
	//此处下面的代码请补充
	name=new char[strlen(name1)+1];
	strcpy(name,name1);
	
	nativePlace=native;	
}

Person::Person(){//空函数体 
}

Person::Person(const Person & per):birthday(per.birthday)// ID和name需要深拷贝 ,使用new 
{
	ID=new char[strlen(per.ID)+1];
	strcpy(ID,per.ID);
	//此处下面的代码请补充 
	name=new char[strlen(per.name)+1];
	strcpy(name,per.name);
	
	nativePlace=per.nativePlace;	
	
}

Person::~ Person()//使用delete 
{
	delete [] ID;
	delete [] name;
}
		
void Person::setPerson(char * id1,char* name1,string native,Date& bir)//亦需要用到new
{
    ID=new char[strlen(id1)+1];
	strcpy(ID,id1);
	//此处下面的代码请补充
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
	cout<<"籍贯"<<nativePlace<<endl;
	birthday. displayDate();
}
void Person::displayPerson()
{
	cout<<"ID:"<<ID<<endl;
	cout<<"name"<<name<<endl;
	cout<<"籍贯"<<nativePlace<<endl;
	birthday. displayDate();
	}	



	
