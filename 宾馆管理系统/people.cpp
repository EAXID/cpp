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
	cout<<"姓名"<<":"<<p1.getname()<<endl;
	cout<<"身份证号"<<":"<<p1.getID()<<endl;
	cout<<"性别"<<":"<<p1.getgender()<<endl;
	cout<<"入住时间"<<":"<<t<<endl;
	return cout;
}
istream& operator>>(istream& cin,people& p1)
{
	cout<<"输入身份证号"<<endl; 
	cin>>p1.ID;
	cout<<"输入名字"<<endl;
	cin>>p1.name;
	cout<<"输入性别"<<endl;
	cin>>p1.gender;
	cout<<"输入入住时间"<<endl;
	fflush(stdin);//清空缓存区
	cin>>p1.inday;
}	
people::people(const people& p)
{
	ID=p.ID;//
	name=p.name;
	gender=p.gender;
	inday=p.inday;
}	



















