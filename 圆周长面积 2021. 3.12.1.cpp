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
	cout<<"请输入圆的半径"<<endl;
	cin>>r;
	cout<<"圆的周长是："<<c.Zc(r)<<endl;
	cout<<"圆的面积是："<<c.Mj(r)<<endl;
	return 0; 
}
