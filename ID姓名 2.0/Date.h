#ifndef DATE_H
#define DATE_H

class Date
{
	
	public:
		//Date();//ʵ��ʱ������Ϊ�� 
		Date(int  =1900,int =1,int =1);//��������������Ч����֤,��Ĭ���β�ֵ�Ĺ��캯�� 
		Date(const Date &);//�������캯�� 
		~Date();//�������� 
		
		void  setDate(int ,int ,int ); //��������������Ч����֤
		inline int getYear() const ;
		inline int getYear(); 
		inline int getMonth() const;//��ʾ������������
		inline int getMonth() ; 
		inline int getDay() const;
		inline int getDay() ;
		
		void displayDate() const;//����Ա����		
		Date& addOneDay(); //addOneDay�����Ľ���ڸú����ڲ����µ�����cout��������ߵ���displayDate���� 
		bool isLeapYear();	//��������	true  or false 
		
	private:
		int year,month,day;
		
};
			
#endif
//��ɫ���빦�ܣ���ֹͷ�ļ��ظ����� 
