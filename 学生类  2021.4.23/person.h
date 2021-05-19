#include<iostream>
using namespace std;
#include"date.h"


#ifndef PERSON_H
#define PERSON_H
class person
{
	friend class student;
public:
	person(string ,string ,string ,char ,string ,int ,int ,int);
	~person();
	person(const person & );
	void setperson(string ,string ,string ,char ,string );
	
	string getid();
	string getname();
	string gettype();
	string getnativeplace();
	
	
	void display();
	 
private:
	string ID;
	string name;	
	string passWord;
	string type;
	string nativePlace;
	Date birthday;
};
#endif
