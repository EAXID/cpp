#include <iostream>
using namespace std;
#include"Adm.h" 
#include"room.h"
#include"date.h"
#include"people.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"-------------��ӭʹ��M�Ƶ����ϵͳ-----------------"<<endl;
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"----------------------------------------------1.0.0"<<endl; 
	system("pause");
	system("cls");
	admin a;
	cout<<"ѡ�����뷽ʽ"<<endl<<"1.�ֶ�����"<<endl<<"2.���ļ�����"<<endl;
	int b;
	cin>>b;
	int i=1;
	do
	{
		if(!(b-1))
	    {
		    a.setroomr();//¼�뷿����Ϣ 
		    i=0;
	    }
	    else if(!(b-2))
	    {
		    a.lr();//���뷿����Ϣ 
		    i=0;
    	}
	    else
	    {
		    cout<<"�������"<<endl;
	    }
	}while(i);
	
	system("cls");
	do
	{ 
	    
		cd();
		cin>>b;
		system("cls");
		switch(b)
		{
			case 1 :a.dispaly();break;//��ʾ������Ϣ 
			case 2 :a.inpr();break;//��ס���� 
			case 3 :a.outpr();break;//�뿪�˷� 
			case 4 :a.midpr();break;//��;���� 
			case 5 :a.lookp();break;//����ͻ���Ϣ 
			case 6 :a.ler();break;//��ѯ�շ��� 
			case 7 :a.ahc();break;//������Ų�ѯ 
			case 8 :a.modroom();break;//�޸ķ�����Ϣ 
			default :a.sace();break;//�˲������ݱ������ļ��� 
		} 
	}while(b);
	
	
	
	
	return 0;
}
