#include<iostream>
using namespace std;
#include"Identity.h"
#include<fstream>
#include"globalFile.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"

//��¼���� �����ļ���
void LoginIn(string fileName, int type);
//�������Ա�Ӳ˵�����
void managerMenu(Identity*& manager);
//����ѧ���Ӳ˵�����
void studentMenu(Identity*& student);
//�����ʦ�Ӳ˵�����
void teacherMenu(Identity*& treacher);


int main()
{
	int select;
	while (true)
	{
		cout << "=======================��ӭ����ǧ�����ԤԼϵͳ=======================" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t ------------------------\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     1.ѧ������        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     2.��    ʦ        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     3.�� �� Ա        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t|     0.��    ��        |\n";
		cout << "\t\t|                       |\n";
		cout << "\t\t ------------------------\n";
		cout << "����������ѡ��" << endl;

		cin >> select;//�����û�ѡ��

		switch (select)//�����û�ѡ�� ʵ�ֲ�ͬ�ӿ�
		{
		case 1 ://ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2 ://��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3 ://����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0 ://�˳�ϵͳ
			cout << "��ӭ���´�ʹ�ã�" << endl;
			system("pause");
			return 0;

			break;
		default :
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}

//��¼���� �����ļ���
void LoginIn(string fileName, int type)
{
	//����ָ�� ����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	//�ж����
	if (type == 1)//ѧ�����
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "���������ְ����" << endl;
		cin >> id;
	}

	cout << "�������û���" << endl;
	cin >> name;

	cout << "����������" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ�������֤
		int fId;//���ļ��ж�ȡ��id��
		string fName;//���ļ��ж�ȡ������
		string fPwd;//���ļ��ж�ȡ�ĵ�����
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Student(id, name, pwd);
				//����ѧ���Ӳ˵�
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ�����֤
		int fId;//���ļ��ж�ȡ��id��
		string fName;//���ļ��ж�ȡ������
		string fPwd;//���ļ��ж�ȡ�ĵ�����
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				//������ʦ����
				person = new Teacher(id, name, pwd);
				//������ʦ�Ӳ˵�
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա�����֤
		string fName;//���ļ��ж�ȡ������
		string fPwd;//���ļ��ж�ȡ�ĵ�����
		while (ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << fName << fPwd << endl;
			if (fName == name && fPwd == pwd)
			{
				cout << "��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				//��������Ա����
				person = new Manager(name, pwd);
				//����������Ա�Ӳ˵�
				managerMenu(person);

				return;
			}
		}
	}

	cout << "��֤��½ʧ�ܣ�" << endl;
	system("pause");
	system("cls");

	return;
}

//�������Ա�Ӳ˵�����
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		manager->operMenu();

		//������ָ�� תΪ����ָ�룬���������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
		
		cin >> select;
		switch (select)
		{
		case 1 ://����˺�
			man->addPerson();
			break;
		case 2 ://�鿴�˺�
			man->showPerson();
			break;
		case 3 ://�鿴����
			man->showComputer();
			break;
		case 4 ://���ԤԼ
			man->cleanFile();
			break;
		default :
		{
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}

		}
	}
}

//����ѧ���Ӳ˵�����
void studentMenu(Identity*& student)
{
	while (true)
	{
		//����ѧ���Ӳ˵�
		student->operMenu();

		Student* stu = (Student*)student;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://����ԤԼ
			stu->applyOrder();
			break;
		case 2://�鿴����ԤԼ
			stu->showMyOrder();
			break;
		case 3://�鿴������ԤԼ
			stu->showAllOrder();
			break;
		case 4://ȡ��ԤԼ
			stu->cancelOrder();
			break;
		default:
		{
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
		}
	}
}

//�����ʦ�Ӳ˵�����
void teacherMenu(Identity*& teacher)
{
	while (true)
	{
		//����ѧ���Ӳ˵�
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1://�鿴����ԤԼ
			tea->showAllOrder();
			break;
		case 2://���ԤԼ
			tea->valiOrder();
			break;
		default:
		{
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
		}
	}
}
