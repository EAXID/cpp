#ifndef DATE_H
#define DATE_H
class Date
{
	friend ostream& operator<<(ostream& , Date& );//运算符重载 
public:
	Date(int =1900,int =1,int =1);
	Date(const Date &);
	~Date();
	void setDate(int y,int m,int d);
	int getYear();
	int getMonth();
	int getDay();
	void Pdate();
	void dispaly(); 
	bool operator==(Date &);//运算符重载,2个日期判等 
	bool operator!=(Date &);
	bool operator>(Date &) ;
	bool operator<(Date &) ; 	
private:
	int year;
	int month;
	int day;
}; 
#endif
