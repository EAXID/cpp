#include<iostream>
using namespace std;
#include"Identity.h"
#include<fstream>
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"

//登录功能 操作文件名
void LoginIn(string fileName, int type);
//进入管理员子菜单界面
void managerMenu(Identity*& manager);
//进入学生子菜单界面
void studentMenu(Identity*& student);
//进入教师子菜单界面
void teacherMenu(Identity*& treacher);


int main()
{
	int select;
	while (true)
	{
		cout << "=======================欢迎来到千里机房预约系统=======================" << endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t ------------------------\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     1.学生代表        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     2.老    师        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     3.管 理 员        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     0.退    出        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t ------------------------\n";
		cout << "请输入您的选择" << endl;

		cin >> select;//接受用户选择

		switch (select)//根据用户选择 实现不同接口
		{
		case 1 ://学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2 ://老师身份
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3 ://管理员身份
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0 ://退出系统
			cout << "欢迎您下次使用！" << endl;
			system("pause");
			return 0;

			break;
		default :
			cout << "输入有误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}

//登录功能 操作文件名
void LoginIn(string fileName, int type)
{
	//父类指针 用于指向子类对象
	Identity* person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//准备接收用户信息
	int id = 0;
	string name;
	string pwd;

	//判断身份
	if (type == 1)//学生身份
	{
		cout << "请输入你的学号" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入你的职工号" << endl;
		cin >> id;
	}

	cout << "请输入用户名" << endl;
	cin >> name;

	cout << "请输入密码" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生身份验证
		int fId;//从文件中读取的id号
		string fName;//从文件中读取的姓名
		string fPwd;//从文件中读取的的密码
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证登录成功！" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);
				//进入学生子菜单
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		//教师身份验证
		int fId;//从文件中读取的id号
		string fName;//从文件中读取的姓名
		string fPwd;//从文件中读取的的密码
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "教师验证登录成功！" << endl;
				system("pause");
				system("cls");

				//创建教师对象
				person = new Teacher(id, name, pwd);
				//进入老师子菜单
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员身份验证
		string fName;//从文件中读取的姓名
		string fPwd;//从文件中读取的的密码
		while (ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fName == name && fPwd == pwd)
			{
				cout << "验证登录成功！" << endl;
				system("pause");
				system("cls");

				//创建管理员对象
				person = new Manager(name, pwd);
				//进入进入管理员子菜单
				managerMenu(person);

				return;
			}
		}
	}

	cout << "验证登陆失败！" << endl;
	system("pause");
	system("cls");

	return;
}

//进入管理员子菜单界面
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//调用管理员子菜单
		manager->operMenu();

		//将父类指针 转为子类指针，调用子类里其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
		
		cin >> select;
		switch (select)
		{
		case 1 ://添加账号
			man->addPerson();
			break;
		case 2 ://查看账号
			man->showPerson();
			break;
		case 3 ://查看机房
			man->showComputer();
			break;
		case 4 ://清空预约
			man->cleanFile();
			break;
		default :
		{
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}

		}
	}
}

//进入学生子菜单界面
void studentMenu(Identity*& student)
{
	while (true)
	{
		//调用学生子菜单
		student->operMenu();

		Student* stu = (Student*)student;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://申请预约
			stu->applyOrder();
			break;
		case 2://查看自身预约
			stu->showMyOrder();
			break;
		case 3://查看所有人预约
			stu->showAllOrder();
			break;
		case 4://取消预约
			stu->cancelOrder();
			break;
		default:
		{
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
		}
	}
}

//进入教师子菜单界面
void teacherMenu(Identity*& teacher)
{
	while (true)
	{
		//调用学生子菜单
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://查看所有预约
			tea->showAllOrder();
			break;
		case 2://审核预约
			tea->valiOrder();
			break;
		default:
		{
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
		}
	}
}
