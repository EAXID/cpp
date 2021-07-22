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
		cout << "请输入您的选择" << endl;
		cin >> chioce;
		switch (chioce)
		{
		case 1 ://开始比赛
			sm.startSpeech();
			break;
		case 2 ://查看往届记录
			sm.showRecord();
			break;
		case 3 ://清空比赛记录
			sm.clearRecord();
			break;
		case 0 ://退出系统
			sm.exitSystem();
			break;
		default :
			system("cls");
			break;
		}

	}
	
}