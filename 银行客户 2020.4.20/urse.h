#include<string>
#include<iostream> 
using namespace std; 

#include"date.h"
#include<windows.h>
#ifndef USER_H
#define USER_H
class UserInfo
{
	friend class ursebank;
	public:
	    UserInfo();
	    UserInfo(string ,string ,string,Date,double);
	    ~UserInfo();
	    void setUserInfo(string ,string ,string,Date,double);
	    int login(string ,string);//注意，实现登录时给3次登录机会，如果都不对，则推出 
	    void display();
		bool modifyPassWord(string);//修改密码，尽量和实际一致，例如新密码要输入2次，且要一样 
		
		string getuserID();
		string getuserName();
		string getpassWord();
		double getmoney();
		
	    
		
	private:
		const string userID;//或者const char userID[10] 
		string userName;//或者char userName[10] 
		string passWord;//或者char passWord[7] 
		double money;
		Date cardDate; 
};
#endif
