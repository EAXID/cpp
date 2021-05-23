#include"student.h"

student::student(string id,string name,string password,char type,string nativeplace,
        int year1,int month1,int day1,int year,int month,int day,string Gender,course c1,course c2,course c3): 
		person(id,name,password,type,nativeplace,year,month,day),ISdate(year1,month1,day1)
{
	setgender(Gender);
	setam(c1,c2,c3);
	setChinese(c1);
	
	c2.addStudent(getname());
	c3.addStudent(getname());
}
student::~student()
{
	;
}
	
void student::setgender(string Gender)
{
	while(1)
	{
		if(Gender=="M")
	{
		gender=true;
		break;
	}
	else if(Gender=="W")
	{
		gender=false;
		break;
	}
	else
	{
		cout<<"输入错误"<<endl;
		cin>>Gender; 
	}
	}

}
bool student::getgender()
{
	return gender;
}
void student::setam(course c1,course c2,course c3)
{
	achievement[0]=c1.getGrade();
	achievement[1]=c2.getGrade();
	achievement[2]=c3.getGrade();
	achievement[3]=(c1.getGrade()+c2.getGrade()+c3.getGrade())/3.0;
}
void student::setChinese(course Chinese1)
{
	chinese=Chinese1;
}

course student::getChinese()
{
	chinese.addStudent(getname());
	return chinese;
}

void student::setMath(course Math1)
{
	math=Math1;
}

course student::getMath()
{
	return math;
}
void student::setEnglish(course English1)
{
	english=English1;
}

course student::getEnglish()
{
	return english;
}
	
double* student::getam()
{
	return achievement;
}
void student::displayStu()
{
	display();
	cout<<getname()<<"的语文成绩为"<<achievement[0]<<endl;
	cout<<getname()<<"的数学成绩为"<<achievement[1]<<endl;
	cout<<getname()<<"的英语成绩为"<<achievement[2]<<endl;
	cout<<"三科的平均成绩："<<achievement[3]<<endl;
	chinese.addStudent(getname());
	chinese.displayCourse(); 
}
bool student::compareStu(student & s2)
{
	if(this->achievement[3]>s2.achievement[3])
	{
		cout<<getname()<<"同学的平均成绩比"<<s2.getname()<<"高！"<<endl;
		return true;
	}
	else
	{
		cout<<getname()<<"同学的平均成绩比"<<s2.getname()<<"低！"<<endl;
		return false;
	}
}	
ostream& operator<<(ostream& cout,student& s)
{
	s.display();
	cout<<s.getname()<<"的语文成绩为"<<s.achievement[0]<<endl;
	cout<<s.getname()<<"的数学成绩为"<<s.achievement[1]<<endl;
	cout<<s.getname()<<"的英语成绩为"<<s.achievement[2]<<endl;
	cout<<"三科的平均成绩："<<s.achievement[3]<<endl;
	s.chinese.addStudent(s.getname());
	s.chinese.displayCourse(); 
}	
bool student::operator>(student & s)
{
	cout << "学生！" << endl;
	if ((person &)(*this) > (person &)s)
		return true;
	else
		return false;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
