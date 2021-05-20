#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
	public:
		
		Fraction(int data1=1,int data2=1);
		void setFraction(int data1,	int data2);
		Fraction transformation(int data1,int data2);
		int getNumerator();
		int getDenominator();
		
		//分数的加减乘除 
		Fraction &operator+(Fraction &f2);		//加 
		double operator-(Fraction &f2);		//减 
		Fraction &operator*(Fraction &f2);		//乘 
		Fraction &operator/(Fraction &f2);		//除 
		//2021-3-30：
		//此处添加求：2个分数比较大小，实现>功能（greatFraction），
		//2个分数比较大小，实现<功能（lessFraction），
		//分数判等==（equalFraction），分数判断不等！=（notEqualFraction）
		//>=功能（greatThanOrEqual），  <= 功能（lessThanOrEqual）
		//分数取非，即负分数变为正，正分数变为负，函数名（antiFraction） 
		//分数取绝对值 （absFraction） 
		//8个成员函数
		bool operator>(Fraction &f2);		//大于 
		bool operator<(Fraction &f2);			//小于 
		bool operator==(Fraction &f2);		//等于 
		bool operator!=(Fraction &f2);	//不等于 
		bool operator>=(Fraction &f2);		//大于等于 
		bool operator<=(Fraction &f2);		//小于等于 
		void antiFraction();				//取非 
		void absFraction();						//绝对值 

		
	
	private:
		
		int greatestCommonDivisor(int data1,int data2 );//求最大公约数 
		int leaseCommonMultiple(int data1,int data2); //求最小公倍数 
		int numerator;//分子 
		int denominator;//分母 
		
};
#endif
