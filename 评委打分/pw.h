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
void createPeople(vector<people>& v);//���ѡ����Ϣ
void setSpace(vector<people>& v);//�õ�����
void showScore(vector<people>& v);

