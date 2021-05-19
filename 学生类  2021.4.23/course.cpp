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
	courseName=coursename;//课程名
	capacity=capacity1;
	students=new string[capacity];
	courID=courid;
	grade=grade1;//课程成绩 
	gLevel=glevel;//课程对应学分 
}

string course::getCourseName()
{
	return courseName;
}
void course::addStudent(string name)
{
	if (numberOfStudents>=capacity)
	{
		cout<<"选课人数已满！"<<endl;
	}
	else
	{
		students[numberOfStudents]=name;
		numberOfStudents++;
	}
}
void course::dropStudent(string name)          //删除学生
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
string course::getCourID()//课程编号
{
	return courID;
}
double course::getGrade()//课程成绩
{
	return grade;
} 
double course::getGLevel()//课程对应学分 
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
	cout<<"课程编号："<<courID<<endl;;
	cout<<"课程名：  "<<courseName<<endl;
	cout<<"课程成绩："<<grade<<endl;
	cout<<"课程学分："<<gLevel<<endl;
	cout << courseName << "选该课程的学生有: " << this->numberOfStudents<< endl;
	cout << courseName << "的课程中的学生有: " << this->getNumberOfStudents()<< endl;
	students = this->getStudents();
	for (int i = 0; i < numberOfStudents; i++)
		cout << students[i] << endl;
	cout << endl;
}
	


