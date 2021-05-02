#include<iostream>
using namespace std;
class cube
{
	public:
		void setL(int l)//设置长 
		{
			L=l;
		}
		int getL()//获取长 
		{
			return L;
		} 
		void setW(int w)//设置宽 
		{
			W=w;
		}
		int getW()//获取宽 
		{
			return W;
		} 
		void setH(int h)//设置高 
		{
			H=h;
		}
		int getH()//获取高 
		{
			return H;
		} 
		int Mj()//面积 
		{
			return 2*L*W+2*L*H+2*H*W;
		}
		int Tj()//体积 
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
bool QjPd(cube &c1,cube &c2)//全局判断 
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
	cube c1;//建立立方体 
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout<<"c1的面积："<<c1.Mj()<<endl;
	cout<<"c1的体积："<<c1.Tj()<<endl; 
	cube c2;//建立立方体
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	if(QjPd(c1,c2))
	{
		cout<<"两个立方体相等"<<endl; 
	}
	else
	{
		cout<<"两个长方体不相等"<<endl; 
	}
	
	if(c1.CyHs(c2))
	{
		cout<<"两个立方体相等"<<endl; 
	}
	else
	{
		cout<<"两个长方体不相等"<<endl; 
	}
}
