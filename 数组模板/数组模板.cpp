#include<iostream>
using namespace std;
#include"MyArray.hpp"
void printfPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_name << "  ���䣺" << arr[i].age << endl;
	}
}
int main()
{
	MyArray<Person>arr1(5);
	Person p1("����", 11);
	Person p2("����", 11);
	Person p3("����", 11);
	Person p4("����", 11);

    arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);
	arr1.Push_Back(p4);
	
	printfPersonArray(arr1);
	

}