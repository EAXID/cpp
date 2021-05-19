#include"person.h"
#include"course.h"
#include"date.h"
#ifndef STUDENT_H
#define STUDENT_H
class student:public person 
{
	
public:
	student(string ,string ,string ,char ,string ,int ,int ,int,int ,int ,int ,string ,course ,course ,course);
	~student();
	
	void setgender(string setgenter);
	bool getgender();
	
	void setam(course c1,course c2,course c3);
	
	double* getam();
	
	void setChinese(course Chinese1);
	course getChinese();
	void setMath(course Math1);
	course getMath();
	void setEnglish(course English1);
	course getEnglish();
	
	void displayStu();
	bool compareStu(student & s2);
	
private:
	Date ISdate; 
	bool gender;
	double achievement[4];
	course chinese;
	course math;
	course english;  
	
	
};
#endif
