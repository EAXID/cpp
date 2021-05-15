

#include"point.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H 
class Triangle{
	
	public:
		Triangle(Point v1,Point v2,Point v3);//���캯�� 
		Triangle();//���صĹ��캯��
		Triangle(const Triangle &t);//�������캯��
		~Triangle();//��������
		
		void setTriangle(Point v1,Point v2,Point v3); 
		
		Point getVertex1();
		Point getVertex2();
		Point getVertex3();//15��16��17�е�3������ ���������޸� 
		
		double edge1();
		double edge2();
		double edge3();
		   
		double areaTriangle();//��� 
		void classifyTriangle();	//���� 
		double perimeterTriangle();
		
		bool Xpx();
	
	
	private:
		Point vertex1;//�����ζ���1 
		Point vertex2;
		Point vertex3;
};
void Cd();
#endif
