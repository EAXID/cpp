#include<iostream>
using namespace std;
#include"speechManager.h"

int main()
{
	srand((unsigned int)time(NULL));
	int chioce;
	SpeechManager sm;
	while (1)
	{
        sm.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> chioce;
		switch (chioce)
		{
		case 1 ://��ʼ����
			sm.startSpeech();
			break;
		case 2 ://�鿴�����¼
			sm.showRecord();
			break;
		case 3 ://��ձ�����¼
			sm.clearRecord();
			break;
		case 0 ://�˳�ϵͳ
			sm.exitSystem();
			break;
		default :
			system("cls");
			break;
		}

	}
	
}