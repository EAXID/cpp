#include<iostream>
using namespace std;
#define PI 3.14
class circle
{
	public:
		float Zc(float r)
		{
			return 2*r*PI;
		} 
		float Mj(float r)
		{
			return r*r*PI;
		}
} ;
int main()
{
	float r;
	circle c;
	cout<<"������Բ�İ뾶"<<endl;
	cin>>r;
	cout<<"Բ���ܳ��ǣ�"<<c.Zc(r)<<endl;
	cout<<"Բ������ǣ�"<<c.Mj(r)<<endl;
	return 0; 
}
