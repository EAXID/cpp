class Fraction
{
	public:
		 
		Fraction(int data1,int data2);
		void setFraction(int num1,	int den1);
		//���set���get�ຯ�� 
		int getnumerator();
		int getdenominator();
		Fraction HuJ(int data1,int data2); 
		
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
};
void Cd();
