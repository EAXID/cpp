class Fraction
{
	friend ostream& operator<<(ostream& cout,Fraction& f);
	friend istream& operator>>(istream& cin,Fraction&  f);
	public:
		 
		Fraction(); 
		Fraction(int data1,int data2,bool pos1);
		void setFraction(int num1,	int den1,bool pos1);
		//���set���get�ຯ�� 
		int getnumerator();
		int getdenominator();
		bool getpos();
		Fraction HuJ(int data1,int data2); 
		bool PdF(Fraction f2);
		
		bool operator>(Fraction f2);//�жϴ��� 
		bool operator<(Fraction f2);//�ж�С�� 
		bool operator>=(Fraction f2);//�жϴ���� 
		bool operator<=(Fraction f2);//�ж�С���� 
		bool operator==(Fraction f2);//�жϵ���
		bool operator!=(Fraction f2);//�жϲ�����
		void antiFration();//����ȡ�� 
		void absFration();//����ֵ 
		  
		Fraction& operator+(Fraction &f2);//������ 
		Fraction& operator-(Fraction &f2);//��������
		Fraction& operator*(Fraction &f2);//�����˷�
		Fraction& operator/(Fraction &f2);//��������
		Fraction& operator+=(Fraction &f2); //�ӵ� 
		Fraction& operator*=(Fraction &f2);//�˵�
		Fraction& operator++();
		Fraction operator--(int); 
		 
		
	private:
		int greatestCommonDivisor(int data1,int data2 );//�����Լ�� 
		int leaseCommonMultiple(int data1,int data2); //����С������ 
		int numerator;//���� 
		int denominator;//��ĸ 
		bool positive;//������������ȡֵtrue��ʾΪ������֮Ϊ�� 
		Fraction Js1(Fraction f2);//������� 
		Fraction Js2(Fraction f2);//ǰ���� 
		Fraction Js3(Fraction f2);//���ǰ
};
void Cd();
void Cd2();
void Cd3(); 
bool setpos(char h);

