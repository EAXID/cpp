#include<iostream>
using namespace std;
#include"people.h"
#ifndef ROOM_H
#define ROOM_H

class room 
{
	friend istream& operator>>(istream &cin,room &);
	friend ostream& operator<<(ostream &cout,room &);
public:
	room(); 
	room(int ,string ,bool);
	room(const room &);
	~room();
	
	void setroom(int ,string ,bool);
	
	void setmoney(int);
	int getmoney();
	
	void seta(string);
	string geta();
	
	void setroom(bool);
	bool getpeople();
	
	
	
	people p;	
	
		
private:

	int money;//房间单价 
	string a;//房间号 
	bool people;//判断有无人 
};
#endif

