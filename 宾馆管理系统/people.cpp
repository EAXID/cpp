#include"people.h"
#include"room.h"
people::people()
{
}
people::people(string id,string Name,string Gender,int year,int month,int day)
{
	setpeople(id,Name,Gender,year,month,day);
}
people::~people()  
{
}
void people::setpeople(string id,string Name,string Gender,int year,int month,int day)
{
	ID=id;
	name=Name;
	gender=Gender; 
	inday.setDate(year,month,day);
		
}
string people::getID()
{
	return ID;
}
string people::getname()
{
	return name;
}
string people::getgender()
{
	return gender;
}
Date people::getinday()
{
	return inday;
}
ostream& operator<<(ostream& cout, people& p1)
{
	Date t=p1.getinday();
	cout<<"����"<<":"<<p1.getname()<<endl;
	cout<<"���֤��"<<":"<<p1.getID()<<endl;
	cout<<"�Ա�"<<":"<<p1.getgender()<<endl;
	cout<<"��סʱ��"<<":"<<t<<endl;
	return cout;
}
istream& operator>>(istream& cin,people& p1)
{
	cout<<"�������֤��"<<endl; 
	cin>>p1.ID;
	cout<<"��������"<<endl;
	cin>>p1.name;
	cout<<"�����Ա�"<<endl;
	cin>>p1.gender;
	cout<<"������סʱ��"<<endl;
	fflush(stdin);//��ջ�����
	cin>>p1.inday;
}	
people::people(const people& p)
{
	ID=p.ID;//
	name=p.name;
	gender=p.gender;
	inday=p.inday;
}	



















