#include<iostream>
using namespace std;
#define N 4//方便适用更多酒店 
#define M 100
#include"room.h"
#include"date.h"
#include<fstream> 
#ifndef ADMIN_H
#define ADMIN_H
class admin
{
public:
	admin();
	~admin();
	admin(const admin &);
	
	void setroomr();//录入房间信息 
	void dispaly();//客房信息浏览 
	void modroom();//修改房间信息 
	void inpr();//入住开房 
	void outpr();//离开退房 
	void midpr(); //中途换房 
	void lookp();//浏览客户信息 
	void ler();//查询空房间 
	void ahc();//按房间号查询 
	void sace();//写入文件 
	void lr();//从文件输入 
	
	
	
private:
	string s[N];//房间类型名
	room r[N][M];//
	int roomnumber[N];//房间数量 
};
#endif
inline void cd()
{
	cout<<"1.查看所有房间信息"<<endl;
	cout<<"2.入住开房"<<endl;
	cout<<"3.离开退房"<<endl;
	cout<<"4.中途换房"<<endl;
	cout<<"5.浏览客户信息"<<endl;
	cout<<"6.查询空房间"<<endl;
	cout<<"7.按房间号查询"<<endl;
	cout<<"8.修改房间信息"<<endl; 
	cout<<"0.退出"<<endl;
}

















