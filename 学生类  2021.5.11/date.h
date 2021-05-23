#ifndef DATE_H
#define DATE_H
class Date
{
	friend ostream& operator<<(ostream& , Date& );//��������� 
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
	bool operator==(Date &);//���������,2�������е� 
	bool operator!=(Date &);
	bool operator>(Date &) ;
	bool operator<(Date &) ; 	
private:
	int year;
	int month;
	int day;
}; 
#endif
