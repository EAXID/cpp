#include"date.h"
#ifndef PEOPLE_H
#define PEOPLE_H

class people 
{	
    friend ostream& operator<<(ostream& cout, people& p1);
    friend istream& operator>>(istream& cin,people& p1);
    
public:
	people();
	people(string,string,string,int ,int ,int );
	people(const people&);
	~people();
	
	void setpeople(string ,string ,string ,int ,int ,int);
	string getID();
	string getname();
	string getgender();
	Date getinday();
	
	
	

private:
    string ID;//
	string name;
	string gender;
	Date inday;	
};
#endif
