class Fraction
{
	public:
		 
		Fraction(int data1,int data2);
		void setFraction(int num1,	int den1);
		//添加set类和get类函数 
		int getnumerator();
		int getdenominator();
		Fraction HuJ(int data1,int data2); 
		
		void addFraction(Fraction f2);//分数加
		void subFraction(Fraction f2);//分数减法
		void mulFraction(Fraction f2);//分数乘法
		void divFraction(Fraction f2);//分数除法
		
	private:
		int greatestCommonDivisor(int data1,int data2 );//求最大公约数 
		int leaseCommonMultiple(int data1,int data2); //求最小公倍数 
		int numerator;//分子 
		int denominator;//分母 
		bool positive;//分数的正负，取值true表示为正，反之为负 
};
void Cd();
