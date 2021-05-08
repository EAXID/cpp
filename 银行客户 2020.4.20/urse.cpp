#include"urse.h"
UserInfo::UserInfo()
{
	;
}
UserInfo::UserInfo(string id,string name,string password,Date carddate,double money1):userID(id) 
{
	setUserInfo(id,name,password,carddate,money1);
}
UserInfo::~UserInfo()
{
	;
}
void UserInfo::setUserInfo(string id,string name,string password,Date craddate,double money1)
{
	money=money1;
	userName=name;
	passWord=password;
	cardDate=craddate;
}
int UserInfo::login(string name1,string password2)//注意，实现登录时给3次登录机会，如果都不对，则推出 
{
	static int i=3;
	for(;i>0;i--)
	{
		if(password2==passWord)
		{
			cout<<"密码正确"<<endl;
			system("cls");
			cout<<"----------正在登录中----------" <<endl; 
			Sleep(1000);
			system("cls");
			return 1;
		}
		cout<<"密码输入错误"<<endl<<"还可再输入"<<i<<"次"<<endl;
		cin>>password2; 
	}
	cout<<"该卡已锁定，请联系工作人员解冻"<<endl<<"电话：12581" <<endl;
	return 0; 
	
}
void UserInfo::display()
{
	cout<<"ID:      "<<userID<<endl;
	cout<<"姓名:    "<<userName<<endl;
	cout<<"密码:    "<<passWord<<endl; 		//记得删除 
	cout<<"生日:    ";
	cardDate.dispaly();
}
bool UserInfo::modifyPassWord(string password1)//修改密码，尽量和实际一致，例如新密码要输入2次，且要一样 
{
	string password2,password3;
	if(password1==passWord)
	{
		while(1)
		{
			cout<<"请输入新密码："<<endl;
			cin>>password2;
			cout<<"请再次输入"<<endl;
			cin>>password3;
			if(password2==password3)
			{
				passWord=password3;
				return true;
			}
			cout<<"两次密码不同请重新输入"<<endl;
			system("cls"); 
		}
	}
	else
	{
		cout<<"原密码错误"<<endl;
		return false; 
	}
}
string UserInfo::getuserID()
{
	return userID;
}
string UserInfo::getuserName()
{
	return userName;
}
string UserInfo::getpassWord()
{
	return passWord;
}		
double UserInfo::getmoney()
{
	return money;
}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
