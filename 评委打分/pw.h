#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<deque>
#include<algorithm>

class people
{
public:
	people(string, int);

	void setName(string);
	void setSpace(int);

	string getName();
	int getSpace();

private:
	string m_Name;
	int m_Space;
};
void createPeople(vector<people>& v);//存放选手信息
void setSpace(vector<people>& v);//得到分数
void showScore(vector<people>& v);

