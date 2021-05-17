#include <iostream>
using namespace std;
#include"point.h"

int main(int argc, char** argv)
{
	double x1,x2,y1,y2;
	cout<<"输入第一个点的横坐标"<<endl;
	cin>>x1; 
	cout<<"输入第一个点的纵坐标"<<endl;
	cin>>y1; 
	cout<<"输入第二个点的横坐标"<<endl;
	cin>>x2; 
	cout<<"输入第二个点的纵坐标"<<endl;
	cin>>y2; 
	point p1(x1,y1),p2(x2,y2);
	p1.Ps(p2);
	point p3(p2); 
	p1.Ps(p3); //拷贝构造函数
	ps(x1,x2,y1,y2);//普通函数 
	return 0;
}
