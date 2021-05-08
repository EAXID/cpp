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
	cout<<"���:    "<<money<<endl;
	cout<<"�绰����:"<<phoneNumber<<endl;
	cout<<"���֤:  "<<cardID<<endl;
	cout<<"���п�����:"<<BankCardNumber<<endl; 
}

double ursebank::inputmoney(double inmoney)
{
	money+=inmoney;
	cout<<"���� ���: "<<money<<endl;
	return money;
}

double ursebank::outputmoney(double outmoney)
{
	if(money>=outmoney)
	{
		money-=outmoney;
		cout<<"ȡ��� ���: "<<money<<endl;
	}
	else
	{
		cout<<"���㣡"<<endl;
		cout<<"���:    "<<money<<endl;
	}
	return money;
}
