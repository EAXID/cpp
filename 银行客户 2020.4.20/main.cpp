#include <iostream>
using namespace std;
#include"urse.h"
#include"ursebank.h"
#include<windows.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	system("color 80");
	string userName;//���� 
	string passWord;//���� 
	Date cardDate; //���� 
	double money;//��� 
	string phoneNumber;//�绰����
	string cardID;//���֤���� 
	int year,month,day;//���� 
	cout<<"��¼����Ϣ��"<<endl;
 	cout<<"������";  
 	cin>>userName;  
 	cout<<"���룺";  
 	cin>>passWord; 
 	cout<<"���գ���"<<endl;
	cin>>year;
	cout<<"���գ���"<<endl;
	cin>>month;
	cout<<"���գ���"<<endl;
	cin>>day;
	Date bir(year,month,day);
	bir.Pdate();
	 bir.dispaly();
 	cout<<"���֤�ţ�";  
 	cin>>cardID;  
 	cout<<"�绰���룺";  
 	cin>>phoneNumber;  
 	cout<<"��";  
 	cin>>money; 
 	char UID1[12];
	sprintf(UID1,"%d%d%d%d",1, (rand() %90)+10,(rand() %9000)+1000 
	,(rand() %9000)+1000);
	ursebank u1(UID1,userName,passWord,money,bir,phoneNumber,cardID);
	system("cls");
	cout<<"---------ע��ɹ���---------"<<endl;
	Sleep(1000);
	system("cls");
	string passWord2;
	cout<<"----------���¼----------"<<endl;
	cout<<"���������룺";
	cin>>passWord2;
	u1.login(UID1,passWord2);
	int sel;
	while(1)
	{
	cout<<"��ѡ��ҵ��(1)��� (2)ȡ�� (3)�޸�����  (4)����ѯ (5)��ʾ�˺���Ϣ (0)�˳�"<<endl;  
	
	cin>>sel;
	system("cls");
	switch(sel)
	{
		case 1:
			{
				double depMoney;
				cout<<"���������" ;
				cin>>depMoney;
				u1.inputmoney(depMoney);
				break;
			}
		case 2:
			{
				double witMoney;
				cout<<"������ȡ���";
				cin>>witMoney;
				u1.outputmoney(witMoney);
				break;
			}
		case 3:
			{
				string passWord3;
				cout<<"������ԭ���룺";
				cin>>passWord3;
				u1.modifyPassWord(passWord3); 
				break;
			}
		case 4:
			{
				cout<<"���: "<<u1.getmoney()<<endl;
				break;
			}
		case 5:
			{
				u1.displayUB();
				break;
			}
		case 0:
			{
				cout<<"----------�ѳɹ��˳�ϵͳ��----------"<<endl;
				exit(0);
			}
			
		default :
			{
				cout<<"����ѡ�����!"<<endl;
			}
		}
		
	}
	return 0;
}
