#include<iostream>
using namespace std;
#include "workManager.h"

#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
int main()
{  
	WorkManager wm;
	
	int chlice = 0;
	while (true)
	{
         wm.show_Menu();
		 cout << "����������ѡ��" << endl;
		 cin >> chlice;
		 switch (chlice)
		 {
		 case 0 ://�˳�ϵͳ
			 wm.exitSystem();
			 break;
		 case 1://����ְ��
			 wm.Add_Emp();
			 break; 
		 case 2://��ʾְ��
			 wm.Show_Emp();
			 break; 
		 case 3://ɾ��ְ��
			 wm.Del_Emp();
			 break; 
		 case 4://�޸�ְ��
			 wm.Mod_Emp();
			 break;
		 case 5://����ְ��
			 wm.Find_Emp();
			 break;
		 case 6://����ְ��
			 wm.Sort_Emp();
			 break;
		 case 7://����ĵ�
			 wm.Clean_File();
			 break;
		 default:
			 system("cls");//����
			 break;
		 }
	}
	
}