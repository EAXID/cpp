#include <string> 

using namespace std;

#include "Date.h"

#ifndef PERSON_H
#define PERSON_H

class Person{
	public:
		Person(char *,char*,string ,Date&) ;// ID��name��Ҫ��� ,ʹ��new 
		Person();
		Person(const Person &);// ID��name��Ҫ��� ,ʹ��new 
		~ Person();//delete�ͷ��ڴ� 
		
		void setPerson(char *,char*,string ,Date&); // ID��name��Ҫ���,ʹ��new 
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
		char* ID;//���֤����
		char* name;
		string nativePlace;//���� ,��name�ȶԱȣ����char*��string��������� 
		const Date birthday;//�����ݳ�Ա , ���ߣ� Date birthday;
		
};
	
	
#endif
