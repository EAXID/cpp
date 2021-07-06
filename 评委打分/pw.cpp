#include"pw.h"

people::people(string name, int Space)
{
	this->m_Name = name;
	this->m_Space = Space;
}

void people::setName(string name)
{
	this->m_Name = name;
}

void people::setSpace(int space)
{
	this->m_Space = space;
}

string people::getName()
{
	return m_Name;
}

int people::getSpace()
{
	return m_Space;
}

void createPeople(vector<people>& v)
{
	string s1 = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string s = "选手";
		s += s1[i];
		int space = 0;
		people p(s, space);
		v.push_back(p);
	}
}

void setSpace(vector<people>& v)
{
	for (vector<people>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int a = 0;
		for (deque<int>::iterator dit=d.begin(); dit!=d.end(); dit++)
		{
			a += *dit;
		}
		a /= 8;
		it->setSpace(a);
	}
}

void showScore(vector<people>& v)
{
	for (vector<people>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名   " << it->getName() << "    平均分：" << it->getSpace() << endl;
	}
}
