#include<iostream>
using namespace std;
#include<vector>
#include"pw.h"
#include<ctime>
int main()
{
     srand((unsigned int)time(NULL));
	vector<people>v;
	createPeople(v);
	setSpace(v);
	showScore(v);

}