#ifndef DATE_H
#define DATE_H
class Date
{
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
	
private:
	int year;
	int month;
	int day;
}; 
#endif
