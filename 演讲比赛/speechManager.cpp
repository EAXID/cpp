#include"speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	this->intiSpeech();
	this->createSpeaker();
	this->loadRecord();
}

//展示菜单
void SpeechManager::show_Menu()
{
	cout << "******************************************" << endl;
	cout << "***********  欢迎参加演讲比赛  ***********" << endl;
	cout << "***********  1.开始演讲比赛    ***********" << endl;
	cout << "***********  2.查看往届记录    ***********" << endl;
	cout << "***********  3.清空比赛记录    ***********" << endl;
	cout << "***********  0.退出比赛程序    ***********" << endl;
	cout << "******************************************" << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//析构函数
SpeechManager::~SpeechManager()
{
}

//初始化容器和属性
void SpeechManager::intiSpeech()
{
	//容器制空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//初始化比赛轮数
	this->m_Index = 1;

	//将记录的容器也清空
	this->m_Record.clear();
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//创建选手编号 并放入容器v1中
		v1.push_back(10001 + i);
		
		//选手编号以及对应选手 放入到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//开始比赛 比赛整个流程控制函数
void SpeechManager::startSpeech()
{
	//第一轮开始

	//1.抽签
	this->speechDraw();
    
	//2.比赛
	this->spiichContest();

	//3.显示晋级结果
	this->showScore();

	//第二轮开始比赛
	this->m_Index++;

	//1.抽签
	this->speechDraw();

	//2.比赛
	this->spiichContest();

	//3.显示晋级结果
	this->showScore();

	//保存分数
	this->saveRecord();

	//重置比赛
	this->intiSpeech();
	this->createSpeaker();
	this->loadRecord();

	cout << "本届比赛完毕！" << endl;
	system("pause");
	system("cls");
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "_________________________" << endl;
	cout << "抽签后的顺序：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());
		for_each(v1.begin(), v1.end(), Myprintf());
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for_each(v2.begin(), v2.end(), Myprintf());
	}
	cout << endl;
	cout << "_________________________" << endl;
	system("pause");
	cout << endl;
}

//比赛
void SpeechManager::spiichContest()
{
	cout << "------------第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;

	//准备临时容器 存放小组成绩
	multimap<double, int, greater<double>> groupScore;

	int num = 0;//记录人员个数


	vector<int>v_Src;//比赛选手容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//600~1000
			//cout << score << "  ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);//总分
		double avg = sum / (double)d.size();//平均分

		//打印平均分
		//cout << "编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name << "  平均分：" << avg << endl;

		//将平均分放入map容器中
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//将打分数据 放入到临时小组容器中
		groupScore.insert(make_pair(avg, *it));//key是得分，value是选手具体编号

	    //每6人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << "  姓名：" << this->m_Speaker[it->second].m_Name << 
					"  成绩：" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}
			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; count++,it++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();//小组容器清空
		}
	}
	cout << "-------------------第" << this->m_Index << "轮比赛完毕--------------------" << endl;
	system("pause");
}

//显示得分
void SpeechManager::showScore()
{
	cout << "-----------------第" << this->m_Index << "轮晋级选手信息如下：-----------------" << endl;

	vector<int> v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_Name <<
			"  成绩：" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios ::out | ios :: app);//追加方式为文件

	//将每个数据 写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1]<<",";
	}
	ofs << endl;

	//关闭
	ofs.close();
	cout << "记录已经保存" << endl;

	//更改文件不为空的状态
	this->fileIsEmpty = false;
}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ofs;
	ofs.open("speech.csv", ios::in);
	if (!ofs.is_open())
	{
		this->fileIsEmpty = true;
		//cout << "文件不存在" << endl;
		ofs.close();
		return;
	}
	//文件清空
	char ch;
	ofs >> ch;
	if (ofs.eof())
	{
		//cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ofs.close();
		return;
	}
	//文件不为空
	this->fileIsEmpty = false;
	ofs.putback(ch);//将读取的再放回去
	
	string date;
	int index = 0;

	while (ofs >> date)
	{
		vector<string>v;
		int pos = -1;//查到逗号的位置
		int strart = 0;
		
		while (true)
		{
            pos = date.find(",", strart);
		    if (pos == -1)
		    {
				break;
		    }
			string temp = date.substr(strart, pos - strart);
			v.push_back(temp);
			strart = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ofs.close();
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << it->first << " 冠军编号：" << it->second[0] << " 分数：" << it->second[1] << endl;
	}*/
}

//显示往届记录
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
        for (int i = 0; i < this->m_Record.size(); i++)
	{
		     cout << "第" << i + 1 << "届" << endl;
		     cout << "冠军编号：" << this->m_Record[i][0] << " 得分：" << this->m_Record[i][1]
			      << " 亚军编号：" << this->m_Record[i][2] << " 得分：" << this->m_Record[i][3]
			      << " 季军编号：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl;
	}
	}
	
	system("pause");
	system("cls");
}

//清空文件
void SpeechManager::clearRecord()
{
	cout << "是否清空文件？" << endl << "1.确定" << endl << "2.取消"<<endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		this->intiSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}
