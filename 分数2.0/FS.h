class Fraction
{
	public:
		 
		Fraction(int data1,int data2,bool pos1);
		void setFraction(int num1,	int den1,bool pos1);
		//���set���get�ຯ�� 
		int getnumerator();
		int getdenominator();
		bool getpos();
		Fraction HuJ(int data1,int data2); 
		bool PdF(Fraction f2);
		
		void addFraction(Fraction f2);//������ 
		void subFraction(Fraction f2);//��������
		void mulFraction(Fraction f2);//�����˷�
		void divFraction(Fraction f2);//��������
		
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
bool setpos(char h);
