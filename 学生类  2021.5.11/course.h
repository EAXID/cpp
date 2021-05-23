#include<iostream>
using namespace std;
#ifndef COURSE_H
#define COURSE_H
class course
{
public:
	course();
	course(string coursename,string courid,int capacity1,double grade1,double glevel);
	~course();
	course(const course & c);
	
	void setcourse(string ,string ,int ,double ,double);
	string getCourseName();
	void addStudent(string name);
	void dropStudent(string name);          //删除学生
	string* getStudents();
	
	void setNumberOfStudents(int numberOfStudents1);
	int getNumberOfStudents();
	
	int getCapacity();
	
	string getCourID();//课程编号
	double getGrade();//课程成绩 
	double getGLevel();//课程对应学分 
	
	void displayCourse();
	

private:
	string courseName;//课程名 
	string* students;
	int numberOfStudents;
	int capacity;
	string courID;//课程编号
	double grade;//课程成绩 
	double gLevel;//课程对应学分 
   	
};
#endif
