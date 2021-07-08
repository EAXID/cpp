#include<iostream>
using namespace std;
#include<string>
#include<list>
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;
	int m_age;
	int m_height;

};

ostream& operator<<(ostream& cout, Person& p)
{
	cout << "姓名："<<p.m_name <<" 年龄："<< p.m_age <<" 身高："<< p.m_height << endl;
	return cout;
}

bool sort1(Person &p1, Person &p2)
{
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}
}
int main()
{
	list<Person>L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	L.sort(sort1);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *(it) << endl;
	}
}