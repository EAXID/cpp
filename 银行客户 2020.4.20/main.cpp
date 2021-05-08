#include <iostream>
using namespace std;
#include"urse.h"
#include"ursebank.h"
#include<windows.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	system("color 80");
	string userName;//姓名 
	string passWord;//密码 
	Date cardDate; //生日 
	double money;//余额 
	string phoneNumber;//电话号码
	string cardID;//身份证号码 
	int year,month,day;//生日 
	cout<<"请录入信息："<<endl;
 	cout<<"姓名：";  
 	cin>>userName;  
 	cout<<"密码：";  
 	cin>>passWord; 
 	cout<<"生日：年"<<endl;
	cin>>year;
	cout<<"生日：月"<<endl;
	cin>>month;
	cout<<"生日：日"<<endl;
	cin>>day;
	Date bir(year,month,day);
	bir.Pdate();
	 bir.dispaly();
 	cout<<"身份证号：";  
 	cin>>cardID;  
 	cout<<"电话号码：";  
 	cin>>phoneNumber;  
 	cout<<"余额：";  
 	cin>>money; 
 	char UID1[12];
	sprintf(UID1,"%d%d%d%d",1, (rand() %90)+10,(rand() %9000)+1000 
	,(rand() %9000)+1000);
	ursebank u1(UID1,userName,passWord,money,bir,phoneNumber,cardID);
	system("cls");
	cout<<"---------注册成功！---------"<<endl;
	Sleep(1000);
	system("cls");
	string passWord2;
	cout<<"----------请登录----------"<<endl;
	cout<<"请输入密码：";
	cin>>passWord2;
	u1.login(UID1,passWord2);
	int sel;
	while(1)
	{
	cout<<"请选择业务：(1)存款 (2)取款 (3)修改密码  (4)余额查询 (5)显示账号信息 (0)退出"<<endl;  
	
	cin>>sel;
	system("cls");
	switch(sel)
	{
		case 1:
			{
				double depMoney;
				cout<<"请输入存款金额：" ;
				cin>>depMoney;
				u1.inputmoney(depMoney);
				break;
			}
		case 2:
			{
				double witMoney;
				cout<<"请输入取款金额：";
				cin>>witMoney;
				u1.outputmoney(witMoney);
				break;
			}
		case 3:
			{
				string passWord3;
				cout<<"请输入原密码：";
				cin>>passWord3;
				u1.modifyPassWord(passWord3); 
				break;
			}
		case 4:
			{
				cout<<"余额: "<<u1.getmoney()<<endl;
				break;
			}
		case 5:
			{
				u1.displayUB();
				break;
			}
		case 0:
			{
				cout<<"----------已成功退出系统！----------"<<endl;
				exit(0);
			}
			
		default :
			{
				cout<<"输入选项错误!"<<endl;
			}
		}
		
	}
	return 0;
}
