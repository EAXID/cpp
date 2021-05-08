#include<string>
using namespace std;
#include"urse.h"
#include<string.h>
class ursebank:public UserInfo
{
public:
	ursebank(string ,string ,string ,double ,Date carddate,string phonenumber,string cardid);
	~ursebank();
	
	void setphonenumber(string phonenumber1);
	string getphonenumber();
	
	void displayUB();
	
	double inputmoney(double inmoney);
	double outputmoney(double outmoney);
	
	
	
	
private:
    string phoneNumber;//电话号码
	const string cardID;//身份证号码 
	char BankCardNumber[20];//银行卡卡号 
};

