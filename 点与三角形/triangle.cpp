#include<iostream>
using namespace std;
#include"point.h" 
#include"triangle.h"
#include<math.h>
Triangle::Triangle(Point v1,Point v2,Point v3)//构造函数 
{
	setTriangle(v1,v2,v3);
}
Triangle::Triangle(const Triangle &t)//拷贝构造函数
{
	vertex1=t.vertex1;//三角形顶点1 
	vertex2=t.vertex2;
    vertex3=t.vertex3;
	
}
Triangle::~Triangle()//析构函数
{
	;
}
		
void Triangle::setTriangle(Point v1,Point v2,Point v3)
{
	vertex1=v1;
	vertex2=v2;
	vertex3=v3;
 } 
Point Triangle::getVertex1()
{
	return vertex1;
}
Point Triangle::getVertex2()
{
	return vertex2;
}
Point Triangle::getVertex3()//15，16，17行的3个函数 名称做了修改
{
	return vertex3;
} 	
double Triangle::edge1()
{
	double edge1=vertex1.distance(vertex2);
	return edge1;
}

double Triangle::edge2()
{
	double edge2=vertex2.distance(vertex3);
	return edge2;
}
double Triangle::edge3()
{
	double edge3=vertex3.distance(vertex1);
	return edge3;
}
		
double Triangle::perimeterTriangle()
{
	double perimeter=edge1()+edge2()+edge3();
	return perimeter;
}
		
double Triangle::areaTriangle()
{
	double p=perimeterTriangle()/2;
	double area=sqrt(p*(p-edge1())*(p-edge2())*(p-edge3())) ;
	return area;
} 
void Triangle::classifyTriangle()	//分类 
{
		if(edge1()==edge2()&&edge1()==edge3())
	{
		cout<<"这个三角形是等边三角形"<<endl;
	}
	else if(edge1()==edge2()||edge1()==edge3()||edge2()==edge3())
	{
		if(edge1()*edge1()+edge2()*edge2()==edge3()*edge3()||edge1()*edge1()+edge3()*edge3()==edge2()*edge2()||edge3()*edge3()+edge2()*edge2()==edge1()*edge1())
		{
			cout<<"这个三角形是等腰直角三角形"<<endl;
		}	
		else
		{
			cout<<"这个三角形是等腰三角形"<<endl;
		}
	}
	else if(edge1()*edge1()+edge2()*edge2()==edge3()*edge3()||edge1()*edge1()+edge3()*edge3()==edge2()*edge2()||edge3()*edge3()+edge2()*edge2()==edge1()*edge1())   
	{
		cout<<"这个三角形是直角三角形"<<endl;
	}
	else
	{
		cout<<"这个三角形是普通三角形"<<endl;
	} 	
}
bool Triangle::Xpx()
{
	if(vertex1.getY()==vertex2.getY())
	{
		if(vertex1.getY()!=vertex3.getY())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if(vertex3.getY()==vertex2.getY())
	{
		if(vertex1.getY()!=vertex3.getY())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if(vertex3.getY()==vertex1.getY())
	{
		if(vertex1.getY()!=vertex2.getY())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if(((vertex1.getX()-vertex2.getX())/(vertex1.getY()-vertex2.getY()))==((vertex3.getX()-vertex2.getX())/(vertex3.getY()-vertex2.getY()))||
	        ((vertex1.getX()-vertex2.getX())/(vertex1.getY()-vertex2.getY()))==((vertex3.getX()-vertex1.getX())/(vertex3.getY()-vertex1.getY()))||
			((vertex1.getX()-vertex3.getX())/(vertex1.getY()-vertex3.getY()))==((vertex3.getX()-vertex2.getX())/(vertex3.getY()-vertex2.getY())))
			{
				return false;
			}
	else
	{
		return true;
	}
}
void Cd()
{
	cout<<"1.计算两点距离"<<endl;
	cout<<"2.点平移"<<endl;
	cout<<"3.计算面积"<<endl;
	cout<<"4.计算周长"<<endl;
	cout<<"0.退出"<<endl;
}


















	
