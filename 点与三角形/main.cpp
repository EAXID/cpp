#include <iostream>
using namespace std;
#include"point.h"
#include"triangle.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double x1,x2,x3,y1,y2,y3;
	int e;
	
	do
	{
		Cd();
		cin>>e;
		system("cls"); 
		switch(e)
		{
			case 1 :{cout<<"�����һ����"<<endl;
	                 cin>>x1>>y1;
	                 cout<<"����ڶ�����"<<endl;
	                 cin>>x2>>y2;
	                 Point P1(x1,y1),P2(x2,y2); 
			         cout<<"("<<x1<<","<<y1<<")"<<"��"<<"("<<x2<<","<<y2<<")"<<"�������Ϊ"<<P1.distance(P2)<<endl;
			         break;
			        } 
			case 2 : {cout<<"�����"<<endl;
	                 cin>>x1>>y1;
					 Point P1(x1,y1);
					 double u,d,l,r;
					 cout<<"����ƽ��"<<endl;
					 cin>>u; 
	                 cout<<"����ƽ��"<<endl; 
	                 cin>>d;
	                 cout<<"����ƽ��"<<endl; 
	                 cin>>l;
	                 cout<<"����ƽ��"<<endl; 
	                 cin>>r;
					 P1.movePoint(u,d,l,r);
				     break;
			         }
			case 5 :		 
			case 3 : 
	        case 4 :cout<<"�����һ����"<<endl;
	                 cin>>x1>>y1;
	                 cout<<"����ڶ�����"<<endl;
	                 cin>>x2>>y2;
                     cout<<"�����������"<<endl;
                     cin>>x3>>y3;
                     Point P1(x1,y1),P2(x2,y2),P3(x3,y3);
	                 Triangle T(P1,P2,P3);
					 if(T.Xpx()) 
	                 {
		                 if(e==3)
		                 {
		                 	cout<<"�����"<<T.areaTriangle()<<endl;
						 }
						 else if(e==4)
						 {
						 	cout<<"�ܳ�"<<T.perimeterTriangle()<<endl;
						 }
						 else if(e==5)
						 {
						 	T.classifyTriangle();
						 }
		
	                 }
                     else
	                 {
		                 cout<<"���ܹ���������"<<endl;
	                 }
	                 break;
        }
	}while(e);
	

	return 0;
}
