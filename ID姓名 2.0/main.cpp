//wl2002 2031053231 wxd 
#include <iostream>
using namespace std;
#include"Person.h"
#include"Date.h"

int main() 
{
	char id[19];
	char name[4];
	char native[10];
	cout<<"input id:";
	cin>>id;
	cout<<"input name:";
	cin>>name;
	cout<<"input nativePlace:";
	cin>>native;
	int y,m,d;
	cout<<"input birthday:(年-月-日)";
	cin>>y>>m>>d;
	Date bir(y,m,d);

	Person *p1=new Person(id,name,native,bir);
	Person *p2=new Person(*p1);
	cout<<"原来的数据："<<endl;
	p1->displayPerson();
	cout<<"复制后的数据："<<endl;
	p2->displayPerson();
	
	delete p1;
	p1=0;
	
	delete p2;
	p2=0;
	return 0;
}
