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
	    int login(string ,string);//ע�⣬ʵ�ֵ�¼ʱ��3�ε�¼���ᣬ��������ԣ����Ƴ� 
	    void display();
		bool modifyPassWord(string);//�޸����룬������ʵ��һ�£�����������Ҫ����2�Σ���Ҫһ�� 
		
		string getuserID();
		string getuserName();
		string getpassWord();
		double getmoney();
		
	    
		
	private:
		const string userID;//����const char userID[10] 
		string userName;//����char userName[10] 
		string passWord;//����char passWord[7] 
		double money;
		Date cardDate; 
};
#endif
