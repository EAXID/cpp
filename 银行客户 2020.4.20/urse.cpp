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
int UserInfo::login(string name1,string password2)//ע�⣬ʵ�ֵ�¼ʱ��3�ε�¼���ᣬ��������ԣ����Ƴ� 
{
	static int i=3;
	for(;i>0;i--)
	{
		if(password2==passWord)
		{
			cout<<"������ȷ"<<endl;
			system("cls");
			cout<<"----------���ڵ�¼��----------" <<endl; 
			Sleep(1000);
			system("cls");
			return 1;
		}
		cout<<"�����������"<<endl<<"����������"<<i<<"��"<<endl;
		cin>>password2; 
	}
	cout<<"�ÿ�������������ϵ������Ա�ⶳ"<<endl<<"�绰��12581" <<endl;
	return 0; 
	
}
void UserInfo::display()
{
	cout<<"ID:      "<<userID<<endl;
	cout<<"����:    "<<userName<<endl;
	cout<<"����:    "<<passWord<<endl; 		//�ǵ�ɾ�� 
	cout<<"����:    ";
	cardDate.dispaly();
}
bool UserInfo::modifyPassWord(string password1)//�޸����룬������ʵ��һ�£�����������Ҫ����2�Σ���Ҫһ�� 
{
	string password2,password3;
	if(password1==passWord)
	{
		while(1)
		{
			cout<<"�����������룺"<<endl;
			cin>>password2;
			cout<<"���ٴ�����"<<endl;
			cin>>password3;
			if(password2==password3)
			{
				passWord=password3;
				return true;
			}
			cout<<"�������벻ͬ����������"<<endl;
			system("cls"); 
		}
	}
	else
	{
		cout<<"ԭ�������"<<endl;
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
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
