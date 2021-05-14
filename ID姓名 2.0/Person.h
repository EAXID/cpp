#include <string> 

using namespace std;

#include "Date.h"

#ifndef PERSON_H
#define PERSON_H

class Person{
	public:
		Person(char *,char*,string ,Date&) ;// ID和name需要深拷贝 ,使用new 
		Person();
		Person(const Person &);// ID和name需要深拷贝 ,使用new 
		~ Person();//delete释放内存 
		
		void setPerson(char *,char*,string ,Date&); // ID和name需要深拷贝,使用new 
		void setID(char *);
		void setName(char *);
		void setNative(string );
				 
		const char* getID()const;
		const char* getID();
		
		const char* getName()const;
		const char* getName();
		
		string getNativePlace()const;
		string getNativePlace();
		
	    Date getBirthday() const;
	    Date getBirthday();
	    
	    void displayPerson() const;	
		void displayPerson();	
		
	private:
		char* ID;//身份证号码
		char* name;
		string nativePlace;//籍贯 ,和name等对比，理解char*和string处理的区别 
		const Date birthday;//常数据成员 , 或者： Date birthday;
		
};
	
	
#endif
