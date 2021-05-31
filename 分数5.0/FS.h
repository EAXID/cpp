class Fraction
{
	friend ostream& operator<<(ostream& cout,Fraction& f);
	friend istream& operator>>(istream& cin,Fraction&  f);
	public:
		 
		Fraction(); 
		Fraction(int data1,int data2,bool pos1);
		void setFraction(int num1,	int den1,bool pos1);
		//添加set类和get类函数 
		int getnumerator();
		int getdenominator();
		bool getpos();
		Fraction HuJ(int data1,int data2); 
		bool PdF(Fraction f2);
		
		bool operator>(Fraction f2);//判断大于 
		bool operator<(Fraction f2);//判断小于 
		bool operator>=(Fraction f2);//判断大等于 
		bool operator<=(Fraction f2);//判断小等于 
		bool operator==(Fraction f2);//判断等于
		bool operator!=(Fraction f2);//判断不等于
		void antiFration();//分数取非 
		void absFration();//绝对值 
		  
		Fraction& operator+(Fraction &f2);//分数加 
		Fraction& operator-(Fraction &f2);//分数减法
		Fraction& operator*(Fraction &f2);//分数乘法
		Fraction& operator/(Fraction &f2);//分数除法
		Fraction& operator+=(Fraction &f2); //加等 
		Fraction& operator*=(Fraction &f2);//乘等
		Fraction& operator++();
		Fraction operator--(int); 
		 
		
	private:
		int greatestCommonDivisor(int data1,int data2 );//求最大公约数 
		int leaseCommonMultiple(int data1,int data2); //求最小公倍数 
		int numerator;//分子 
		int denominator;//分母 
		bool positive;//分数的正负，取值true表示为正，反之为负 
		Fraction Js1(Fraction f2);//两个相加 
		Fraction Js2(Fraction f2);//前减后 
		Fraction Js3(Fraction f2);//后减前
};
void Cd();
void Cd2();
void Cd3(); 
bool setpos(char h);

