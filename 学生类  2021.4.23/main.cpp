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
	student s("2031053231","����","123456",'1',"����",2020,9,23,2002,9,2,"M",c1,c2,c3);
	s.displayStu();
	
	/*cout<<"��������"<<endl;
	cin>>name; 
	cout<<"��������"<<endl;
	cin>>passWord;
    cout<<"���뼮��"<<endl;
	cin>>nativePlace;
	cout<<"��������:�� �� ��"<<endl;
	cin>>year1>>month1>>day1;
	cout<<"������ݣ�1.ѧ�� 2.��ʦ"<<endl;
	cin>>type;
	cout<<"�����Ա�"<<endl;
	cin>>gender;
	cout<<"������ѧ����ְ������:�� �� ��"<<endl;
	cin>>year>>month>>day;
	cout<<"�������ķ���"<<endl;
	cin>>am1;
	cout<<"������ѧ����"<<endl;
	cin>>am2;
	cout<<"����Ӣ�����"<<endl;
	cin>>am3;
	sprintf(ID,"%d%d%s%d",year,'0',type,(rand()%9000)+1000);
	//string* id;
	//id=ID; 
	cout<<"���ѧ����Ϊ:"<<ID<<endl;
	student p1(ID,name,passWord,type,nativePlace,year1,month1,day1,year,month,day,gender,am1,am2,am3);
*/
	//person(name,password,)
		
		return 0;
}

















