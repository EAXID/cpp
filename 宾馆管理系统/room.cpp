#include"room.h"
room::room()
{
}
room::room(int m,string a1,bool p)
{
	setroom(m,a1,p);
}
room::room(const room &r)
{
	money=r.money;
	a=r.a;
	people=r.people;
}
room::~room()
{
}
	
void room::setroom(int m,string a1,bool p)
{
	money=m;
	a=a1;
	people=p;
}
int room::getmoney()
{
	return money;
}
string room::geta()
{
	return a;	
}
bool room::getpeople()
{
	return people;
}
istream& operator>>(istream &cin,room &r)
{
	cout<<"输入房间单价"<<endl;
	cin>> r.money;
	cout<<"输入房间号"<<endl;
	cin>>r.a;
	r.people=false; 
}
ostream& operator<<(ostream &cout,room &r)
{
	cout<<"房间号"<<r.a<<"  ";
	if(r.people)
	{
		cout<<"有人"<<endl; 
	}
	else
	{
		cout<<"没人"<<endl;
	}
}
void room::setroom(bool p)
{
	people=p;
}	
void room::seta(string a1)
{
	a=a1;
}	
void room::setmoney(int a1)
{
	money=a1;
}		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
