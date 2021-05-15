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
			case 1 :{cout<<"输入第一个点"<<endl;
	                 cin>>x1>>y1;
	                 cout<<"输入第二个点"<<endl;
	                 cin>>x2>>y2;
	                 Point P1(x1,y1),P2(x2,y2); 
			         cout<<"("<<x1<<","<<y1<<")"<<"和"<<"("<<x2<<","<<y2<<")"<<"两点距离为"<<P1.distance(P2)<<endl;
			         break;
			        } 
			case 2 : {cout<<"输入点"<<endl;
	                 cin>>x1>>y1;
					 Point P1(x1,y1);
					 double u,d,l,r;
					 cout<<"向上平移"<<endl;
					 cin>>u; 
	                 cout<<"向下平移"<<endl; 
	                 cin>>d;
	                 cout<<"向左平移"<<endl; 
	                 cin>>l;
	                 cout<<"向右平移"<<endl; 
	                 cin>>r;
					 P1.movePoint(u,d,l,r);
				     break;
			         }
			case 5 :		 
			case 3 : 
	        case 4 :cout<<"输入第一个点"<<endl;
	                 cin>>x1>>y1;
	                 cout<<"输入第二个点"<<endl;
	                 cin>>x2>>y2;
                     cout<<"输入第三个点"<<endl;
                     cin>>x3>>y3;
                     Point P1(x1,y1),P2(x2,y2),P3(x3,y3);
	                 Triangle T(P1,P2,P3);
					 if(T.Xpx()) 
	                 {
		                 if(e==3)
		                 {
		                 	cout<<"面积是"<<T.areaTriangle()<<endl;
						 }
						 else if(e==4)
						 {
						 	cout<<"周长"<<T.perimeterTriangle()<<endl;
						 }
						 else if(e==5)
						 {
						 	T.classifyTriangle();
						 }
		
	                 }
                     else
	                 {
		                 cout<<"不能构成三角形"<<endl;
	                 }
	                 break;
        }
	}while(e);
	

	return 0;
}
