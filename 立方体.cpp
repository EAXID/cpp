#include<iostream>
using namespace std;
class cube
{
	public:
		void setL(int l)//���ó� 
		{
			L=l;
		}
		int getL()//��ȡ�� 
		{
			return L;
		} 
		void setW(int w)//���ÿ� 
		{
			W=w;
		}
		int getW()//��ȡ�� 
		{
			return W;
		} 
		void setH(int h)//���ø� 
		{
			H=h;
		}
		int getH()//��ȡ�� 
		{
			return H;
		} 
		int Mj()//��� 
		{
			return 2*L*W+2*L*H+2*H*W;
		}
		int Tj()//��� 
		{
			return W*L*H;
		}
		bool CyHs(cube &c)
		{
			if(H==c.getH()&&L==c.getL()&&W==c.getW())
	        {
		        return true;
	        }
        	else
	        {
	        	return false;
	        }
		} 
	private:
		int L;
		int W;
		int H;
};
bool QjPd(cube &c1,cube &c2)//ȫ���ж� 
{
	if(c1.getH()==c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getW())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cube c1;//���������� 
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout<<"c1�������"<<c1.Mj()<<endl;
	cout<<"c1�������"<<c1.Tj()<<endl; 
	cube c2;//����������
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	if(QjPd(c1,c2))
	{
		cout<<"�������������"<<endl; 
	}
	else
	{
		cout<<"���������岻���"<<endl; 
	}
	
	if(c1.CyHs(c2))
	{
		cout<<"�������������"<<endl; 
	}
	else
	{
		cout<<"���������岻���"<<endl; 
	}
}
