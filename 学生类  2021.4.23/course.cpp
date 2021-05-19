#include<iostream>
using namespace std;
#include"course.h"
course::course()
{
	;
}
course::course(string coursename,string courid,int capacity1,double grade1,double glevel)
{
	setcourse(coursename,courid,capacity1,grade1,glevel);
	
}
course::~course()
{
	delete [] students;
	students=0;
}
course::course(const course & c)
{
    
	courseName=c.courseName;
	numberOfStudents=c.numberOfStudents;
	capacity=c.capacity;
	students=new string[capacity];
	courID=c.courID;
	grade=c.grade;
	gLevel=c.gLevel;
}

void course::setcourse(string coursename,string courid,int capacity1,double grade1,double glevel)
{
    numberOfStudents=0;
	courseName=coursename;//�γ���
	capacity=capacity1;
	students=new string[capacity];
	courID=courid;
	grade=grade1;//�γ̳ɼ� 
	gLevel=glevel;//�γ̶�Ӧѧ�� 
}

string course::getCourseName()
{
	return courseName;
}
void course::addStudent(string name)
{
	if (numberOfStudents>=capacity)
	{
		cout<<"ѡ������������"<<endl;
	}
	else
	{
		students[numberOfStudents]=name;
		numberOfStudents++;
	}
}
void course::dropStudent(string name)          //ɾ��ѧ��
{
	int i;
	for(i=0;i<numberOfStudents;i++)
	{
		if(students[i]==name)
		{
			for(;i<=numberOfStudents;i++)
			{
				students[i]=students[i+1];
			}
		}
	}
	numberOfStudents--;
}
string* course::getStudents()
{
	return students;
} 

int course::getCapacity()
{
	return capacity;
}
string course::getCourID()//�γ̱��
{
	return courID;
}
double course::getGrade()//�γ̳ɼ�
{
	return grade;
} 
double course::getGLevel()//�γ̶�Ӧѧ�� 
{
	return gLevel;
}
void course::setNumberOfStudents(int numberOfStudents1)
{
	numberOfStudents=numberOfStudents1;
}
int course::getNumberOfStudents()
{
	return numberOfStudents;
}
void course::displayCourse()
{
	cout<<"�γ̱�ţ�"<<courID<<endl;;
	cout<<"�γ�����  "<<courseName<<endl;
	cout<<"�γ̳ɼ���"<<grade<<endl;
	cout<<"�γ�ѧ�֣�"<<gLevel<<endl;
	cout << courseName << "ѡ�ÿγ̵�ѧ����: " << this->numberOfStudents<< endl;
	cout << courseName << "�Ŀγ��е�ѧ����: " << this->getNumberOfStudents()<< endl;
	students = this->getStudents();
	for (int i = 0; i < numberOfStudents; i++)
		cout << students[i] << endl;
	cout << endl;
}
	


