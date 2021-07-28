#include"teacher.h"
//Ĭ�Ϲ���
Teacher::Teacher()
{
}

//�вι���
Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�����
void Teacher::operMenu()
{
	cout << "��ӭ��ʦ����" << this->m_Name << "��¼��" << endl;
	cout << "\t\t ------------------------\n";
	cout << "\t\t|                       |\n";
	cout << "\t\t|     1.�鿴����ԤԼ    |\n";
	cout << "\t\t|                       |\n";
	cout << "\t\t|     2.���ԤԼ        |\n";
	cout << "\t\t|                       |\n";
	cout << "\t\t|     0.ע����¼        |\n";
	cout << "\t\t|                       |\n";
	cout << "\t\t ------------------------\n";
	cout << "����������ѡ��" << endl;
}

//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << ".";
		cout << "ԤԼ���ڣ���" << of.m_orderDate[i]["date"];
		cout << " ʱ��Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
		cout << " ѧ�ţ�" << of.m_orderDate[i]["stuId"];
		cout << " ������" << of.m_orderDate[i]["stuName"];
		cout << " �����ţ�" << of.m_orderDate[i]["roomId"];
		string status = " ״̬:";
		switch (atoi(of.m_orderDate[i]["status"].c_str()))
		{
		case 1:
			status += "�����";
			break;
		case 2:
			status += "ԤԼ�ɹ�";
			break;
		case -1:
			status += "ԤԼʧ�ܣ����δͨ��";
			break;
		case 0:
			status += "ԤԼ��ȡ��";
			break;
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ
void Teacher::valiOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����˵�ԤԼ��¼���£�" << endl;
	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderDate[i]["status"] == "1")
		{
			v.push_back(i);
			cout << index++ << "��";
			cout << "ԤԼ���ڣ���" << of.m_orderDate[i]["date"];
			cout << " ʱ��Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
			cout << " �����ţ�" << of.m_orderDate[i]["roomId"];
			string status = " ״̬:�����";
			cout << status << endl;
		}
	}

	cout << "��������˵�ԤԼ��¼��0������" << endl;
	int select = 0;//�����û�ѡ���ԤԼ��¼
	int ret = 0;//����ԤԼ�����¼
	while (true)
	{
		cin >> select;

		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.��ͨ��" << endl;
				cin >> ret;
				if (ret == 1)
				{
					//ͨ�����
					of.m_orderDate[v[select - 1]]["status"] = "2";
				}
				else
				{
					//��ͨ�����
					of.m_orderDate[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();
				cout << "������" << endl;
				break;
			}
		}
        cout << "������������������" << endl;
	}
	system("system");
	system("cls");
}
