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
	void dropStudent(string name);          //ɾ��ѧ��
	string* getStudents();
	
	void setNumberOfStudents(int numberOfStudents1);
	int getNumberOfStudents();
	
	int getCapacity();
	
	string getCourID();//�γ̱��
	double getGrade();//�γ̳ɼ� 
	double getGLevel();//�γ̶�Ӧѧ�� 
	
	void displayCourse();
	

private:
	string courseName;//�γ��� 
	string* students;
	int numberOfStudents;
	int capacity;
	string courID;//�γ̱��
	double grade;//�γ̳ɼ� 
	double gLevel;//�γ̶�Ӧѧ�� 
   	
};
#endif
