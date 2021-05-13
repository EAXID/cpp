//wl2002 2031053231 wxd 
#include <iostream>
using namespace std;
#include"Person.h"
#include"Date.h"

int main() 
{
	
	Date By(2002,9,2);
	Person *p2=new Person("610428200209023413","WXD","CSXC",By);
	Person *p1=new Person(*p2);
	p2->displayPerson();
		delete p1;
	p1=0;
	
	delete p2;
	p2=0;
	return 0;
}
