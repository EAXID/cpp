#include<iostream>
using namespace std;
class point//Բ����
{
	public:
		void setx(int X)//����x 
		{
			x=X;
		}
		int getx()//��ȡx 
		{
			return x;
		}
		void sety(int Y)//����y 
		{
			y=Y;
		}
		int gety()//��ȡy 
		{
			return y;
		}

	private:
	   int x;
	   int y; 
} ; 
class circle//Բ�� 
{
	public:
		void setR(int r)//���ð뾶 
		{
			R=r;
		}
		int getR()//��ȡ�뾶 
		{
			return R;
		}
		void setYx(point yx)//����Բ�� 
		{
			Yx=yx;
		}
		point getYx()//��ȡԲ�� 
		{
			return Yx;
		}
	private:
		int R;//�뾶 
		point Yx;//Բ�� 
} ;
void PdGx(circle &c,point &p)
{
	int DpF=//�����ƽ�� 
	(c.getYx().getx()-p.getx())*(c.getYx().getx()-p.getx())+
	(c.getYx().gety()-p.gety())*(c.getYx().gety()-p.gety());
	int BjF=//�뾶��ƽ��
	c.getR()*c.getR();
	if(DpF==BjF)
	{
		cout<<"����Բ��"<<endl; 
	}
	else if(DpF>BjF)
	{
		cout<<"����Բ��"<<endl;
	}
	else if(DpF<BjF)
	{
		cout<<"����Բ��"<<endl;
	} 
}
int main()
{
	circle c;
	c.setR(10);
	point Yx;
	Yx.setx(0);
	Yx.sety(0);
	c.setYx(Yx);
	point p;
	p.setx(10);
	p.sety(0);
	PdGx(c,p); 
	return 0;
}














