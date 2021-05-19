#include <iostream>
using namespace std;
#include<stdlib.h>
#include"date.h"
#include"person.h"
#include"student.h"
#include"course.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	/*char ID[8];
	string name;	
	string passWord;
	string gender;
	char type;
	string nativePlace;
	int year,month,day;
	int year1,month1,day1;
	double am1,am2,am3;*/ 
	course c1("Chinese","C001",5,85,2.0);
	course c2("Math","C002",5,85,2.0);
	course c3("English","C003",5,85,2.0);
	student s("2031053231","王旭东","123456",'1',"陕西",2020,9,23,2002,9,2,"M",c1,c2,c3);
	s.displayStu();
	
	/*cout<<"输入姓名"<<endl;
	cin>>name; 
	cout<<"输入密码"<<endl;
	cin>>passWord;
    cout<<"输入籍贯"<<endl;
	cin>>nativePlace;
	cout<<"输入生日:年 月 日"<<endl;
	cin>>year1>>month1>>day1;
	cout<<"输入身份：1.学生 2.教师"<<endl;
	cin>>type;
	cout<<"输入性别"<<endl;
	cin>>gender;
	cout<<"输入入学（入职）日期:年 月 日"<<endl;
	cin>>year>>month>>day;
	cout<<"输入语文分数"<<endl;
	cin>>am1;
	cout<<"输入数学分数"<<endl;
	cin>>am2;
	cout<<"输入英语分数"<<endl;
	cin>>am3;
	sprintf(ID,"%d%d%s%d",year,'0',type,(rand()%9000)+1000);
	//string* id;
	//id=ID; 
	cout<<"你的学工号为:"<<ID<<endl;
	student p1(ID,name,passWord,type,nativePlace,year1,month1,day1,year,month,day,gender,am1,am2,am3);
*/
	//person(name,password,)
		
		return 0;
}

















