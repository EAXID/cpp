//wl2002 2031053231 wxd 
#include <iostream>
using namespace std;

#include "Fraction.h"

int main(int argc, char** argv)
{
	int sel;
	int f1n,f1d;
	int f2n,f2d;
	//��ʼΪ��������ֵ�� 
	cout<<"��Ϊ��һ������������ӣ�";
	cin>>f1n;
	cout<<"��Ϊ��һ�����������ĸ��";
	cin>>f1d;
	cout<<"��Ϊ�ڶ�������������ӣ�";
	cin>>f2n;
	cout<<"��Ϊ�ڶ������������ĸ��";
	cin>>f2d;
	//��������� 
	Fraction f1(f1n,f1d),f2(f2n,f2d);
	
	while(1)
	{
		cout<<"-----1.�������-----"<<endl; 
		cout<<"-----2.�������-----"<<endl; 
		cout<<"-----3.�������-----"<<endl; 
		cout<<"-----4.�������-----"<<endl; 
		cout<<"-----5.����-----"<<endl; 
		cout<<"-----6.С��-----"<<endl; 
		cout<<"-----7.����-----"<<endl; 
		cout<<"-----8.������ -----"<<endl; 
		cout<<"-----9.���ڵ���-----"<<endl; 
		cout<<"-----10.С�ڵ���-----"<<endl; 
		cout<<"-----11.ȡ�� -----"<<endl; 
		cout<<"-----12.����ֵ-----"<<endl; 
		cout<<"-----0.�˳�-----"<<endl; 
		cout<<endl;
		cout<<"     ����������ѡ��";
		cin>>sel;
		
		system("cls");
		cout<<endl<<"��һ������Ϊ:"<<f1n<<"/"<<f1d<<endl;
		cout<<endl<<"�ڶ�������Ϊ:"<<f2n<<"/"<<f2d<<endl<<endl;
		switch (sel)
		{
			case 1: //�ӷ� 
				f1+f2; break;
			case 2: //���� 
				f1-f2; break;
			case 3:	//�˷� 
				f1*f2;	break;
			case 4:	//���� 
				f1/f2;	break;
			case 5:
				f1>f2;break;
			case 6:
				f1<f2;break;
			case 7:
				f1==f2;break;
			case 8:
				f1!=f2;break;
			case 9:
				f1>=f2;break;
			case 10:
				f1<=f2;break;
			case 11:
				f1.antiFraction();break;
			case 12:
				f1.absFraction();break;
				
			case 0:
				break;
		}
		if(sel==0)
			break;
	}
	return 0;
}
