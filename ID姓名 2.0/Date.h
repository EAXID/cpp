#ifndef DATE_H
#define DATE_H

class Date
{
	
	public:
		//Date();//实现时候函数体为空 
		Date(int  =1900,int =1,int =1);//对输入日期做有效性验证,带默认形参值的构造函数 
		Date(const Date &);//拷贝构造函数 
		~Date();//析构函数 
		
		void  setDate(int ,int ,int ); //对输入日期做有效性验证
		inline int getYear() const ;
		inline int getYear(); 
		inline int getMonth() const;//显示定义内联函数
		inline int getMonth() ; 
		inline int getDay() const;
		inline int getDay() ;
		
		void displayDate() const;//常成员函数		
		Date& addOneDay(); //addOneDay函数的结果在该函数内部将新的日期cout输出，或者调用displayDate函数 
		bool isLeapYear();	//布尔类型	true  or false 
		
	private:
		int year,month,day;
		
};
			
#endif
//绿色代码功能：防止头文件重复包含 
