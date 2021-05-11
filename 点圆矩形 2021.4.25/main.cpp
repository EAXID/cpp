#include <iostream>
using namespace std;
#include"circle.h"
#include"rectangle.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	circle c1(1,1,2);
	rectangle r(1,1,1,2,2,1);
	c1.display();
	r.display();
	return 0;
}
