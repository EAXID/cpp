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
	cout<<"-------------欢迎使用M酒店管理系统-----------------"<<endl;
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"---------------------------------------------------"<<endl; 
	cout<<"----------------------------------------------1.0.0"<<endl; 
	system("pause");
	system("cls");
	admin a;
	cout<<"选择载入方式"<<endl<<"1.手动输入"<<endl<<"2.从文件读入"<<endl;
	int b;
	cin>>b;
	int i=1;
	do
	{
		if(!(b-1))
	    {
		    a.setroomr();//录入房间信息 
		    i=0;
	    }
	    else if(!(b-2))
	    {
		    a.lr();//读入房间信息 
		    i=0;
    	}
	    else
	    {
		    cout<<"输入错误"<<endl;
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
			case 1 :a.dispaly();break;//显示房间信息 
			case 2 :a.inpr();break;//入住开房 
			case 3 :a.outpr();break;//离开退房 
			case 4 :a.midpr();break;//中途换房 
			case 5 :a.lookp();break;//浏览客户信息 
			case 6 :a.ler();break;//查询空房间 
			case 7 :a.ahc();break;//按房间号查询 
			case 8 :a.modroom();break;//修改房间信息 
			default :a.sace();break;//退并将数据保存在文件中 
		} 
	}while(b);
	
	
	
	
	return 0;
}
