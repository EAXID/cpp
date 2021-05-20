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
		
		//�����ļӼ��˳� 
		Fraction &operator+(Fraction &f2);		//�� 
		double operator-(Fraction &f2);		//�� 
		Fraction &operator*(Fraction &f2);		//�� 
		Fraction &operator/(Fraction &f2);		//�� 
		//2021-3-30��
		//�˴������2�������Ƚϴ�С��ʵ��>���ܣ�greatFraction����
		//2�������Ƚϴ�С��ʵ��<���ܣ�lessFraction����
		//�����е�==��equalFraction���������жϲ��ȣ�=��notEqualFraction��
		//>=���ܣ�greatThanOrEqual����  <= ���ܣ�lessThanOrEqual��
		//����ȡ�ǣ�����������Ϊ������������Ϊ������������antiFraction�� 
		//����ȡ����ֵ ��absFraction�� 
		//8����Ա����
		bool operator>(Fraction &f2);		//���� 
		bool operator<(Fraction &f2);			//С�� 
		bool operator==(Fraction &f2);		//���� 
		bool operator!=(Fraction &f2);	//������ 
		bool operator>=(Fraction &f2);		//���ڵ��� 
		bool operator<=(Fraction &f2);		//С�ڵ��� 
		void antiFraction();				//ȡ�� 
		void absFraction();						//����ֵ 

		
	
	private:
		
		int greatestCommonDivisor(int data1,int data2 );//�����Լ�� 
		int leaseCommonMultiple(int data1,int data2); //����С������ 
		int numerator;//���� 
		int denominator;//��ĸ 
		
};
#endif
