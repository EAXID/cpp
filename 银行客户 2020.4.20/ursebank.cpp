#include"ursebank.h"
#include<time.h>
#include<stdlib.h> 

ursebank::ursebank(string id,string name,string password,double a,Date carddate,string phonenumber,string cardid)
	:UserInfo(id,name,password,carddate,a),cardID(cardid)
	{
		setphonenumber(phonenumber);
		sprintf(BankCardNumber,"%d%d%d%d%d%d",(rand() %9000)+1000 , (rand() %9000)+1000 ,(rand() %9000)+1000 
	,(rand() %9000)+1000 ,rand()%10,rand()%10);
	}
ursebank::~ursebank()
{
	;
}
void ursebank::setphonenumber(string phonenumber1)
{
	phoneNumber=phonenumber1;
}
string ursebank::getphonenumber()
{
	return phoneNumber;
}
	
void ursebank::displayUB()
{
	display();
	cout<<"余额:    "<<money<<endl;
	cout<<"电话号码:"<<phoneNumber<<endl;
	cout<<"身份证:  "<<cardID<<endl;
	cout<<"银行卡卡号:"<<BankCardNumber<<endl; 
}

double ursebank::inputmoney(double inmoney)
{
	money+=inmoney;
	cout<<"存款后 余额: "<<money<<endl;
	return money;
}

double ursebank::outputmoney(double outmoney)
{
	if(money>=outmoney)
	{
		money-=outmoney;
		cout<<"取款后 余额: "<<money<<endl;
	}
	else
	{
		cout<<"余额不足！"<<endl;
		cout<<"余额:    "<<money<<endl;
	}
	return money;
}
