#pragma once
#include<iostream>
using namespace std;

class Speaker
{
public:
	string m_Name;//����
	double m_Score[2];//���� �������
};

class Myprintf
{
public:
	void operator ()(int val)
	{
		cout << val << "  ";
	}
	
};

