

#include"point.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H 
class Triangle{
	
	public:
		Triangle(Point v1,Point v2,Point v3);//构造函数 
		Triangle();//重载的构造函数
		Triangle(const Triangle &t);//拷贝构造函数
		~Triangle();//析构函数
		
		void setTriangle(Point v1,Point v2,Point v3); 
		
		Point getVertex1();
		Point getVertex2();
		Point getVertex3();//15，16，17行的3个函数 名称做了修改 
		
		double edge1();
		double edge2();
		double edge3();
		   
		double areaTriangle();//面积 
		void classifyTriangle();	//分类 
		double perimeterTriangle();
		
		bool Xpx();
	
	
	private:
		Point vertex1;//三角形顶点1 
		Point vertex2;
		Point vertex3;
};
void Cd();
#endif
