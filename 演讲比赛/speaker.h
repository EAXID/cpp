#pragma once
#include<iostream>
using namespace std;

class Speaker
{
public:
	string m_Name;//姓名
	double m_Score[2];//分数 最多两轮
};

class Myprintf
{
public:
	void operator ()(int val)
	{
		cout << val << "  ";
	}
	
};

