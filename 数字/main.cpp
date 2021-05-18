#include <iostream>
using namespace std;
#include"num.h"


int main(int argc, char** argv)
{
	int e;
	do
	{
		Cd();
	    cin>>e;
	    system("cls");
	    switch(e)
		{
			case 1 : case1();break;
			case 2 : case2();break;
			case 3 : case3();break;	
			case 0 : break;
		} 
	}while(e);

	
	return 0;
}
