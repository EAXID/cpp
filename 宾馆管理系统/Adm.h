#include<iostream>
using namespace std;
#define N 4//�������ø���Ƶ� 
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
	
	void setroomr();//¼�뷿����Ϣ 
	void dispaly();//�ͷ���Ϣ��� 
	void modroom();//�޸ķ�����Ϣ 
	void inpr();//��ס���� 
	void outpr();//�뿪�˷� 
	void midpr(); //��;���� 
	void lookp();//����ͻ���Ϣ 
	void ler();//��ѯ�շ��� 
	void ahc();//������Ų�ѯ 
	void sace();//д���ļ� 
	void lr();//���ļ����� 
	
	
	
private:
	string s[N];//����������
	room r[N][M];//
	int roomnumber[N];//�������� 
};
#endif
inline void cd()
{
	cout<<"1.�鿴���з�����Ϣ"<<endl;
	cout<<"2.��ס����"<<endl;
	cout<<"3.�뿪�˷�"<<endl;
	cout<<"4.��;����"<<endl;
	cout<<"5.����ͻ���Ϣ"<<endl;
	cout<<"6.��ѯ�շ���"<<endl;
	cout<<"7.������Ų�ѯ"<<endl;
	cout<<"8.�޸ķ�����Ϣ"<<endl; 
	cout<<"0.�˳�"<<endl;
}

















