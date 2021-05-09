#include"SjX.h"
#include<math.h>

float SjX::Zc()//周长 
{
	return t[0]+t[1]+t[2];
}
float SjX::Mj()//面积 
{
	float p=(t[0]+t[1]+t[2])/2;
	float s=p*(p-t[1])*(p-t[2])*(p-t[0]);
	return sqrt(s);
}
void SjX::sett0(float a)//获得边 1
{
	t[0]=a;
}
float SjX::gett0()//得到边1 
{
	return t[0];
}
void SjX::sett1(float b)//获得边 2
{
	t[1]=b;
}
float SjX::gett1()//得到边2
{
	return t[1];
}
void SjX::sett2(float c)//获得边 3
{
	t[2]=c;
}
float SjX::gett2()//得到边3
{
	return t[2];
}
void SjX::Lx()
{
	float edge1=t[0];
	float edge2=t[1];
	float edge3=t[2];
	if(edge1==edge2&&edge2==edge3)
	{
		printf("This is an equilateral tringle\n");
	}
	else
	{
		if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&(edge1*edge1!=edge2*edge2+edge3*edge3)&&(edge2*edge2!=edge1*edge1+edge3*edge3)&&(edge3*edge3!=edge2*edge2+edge1*edge1))
		{
			printf("This is an isosceles tringle\n");
		}
		else
		{
			if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&((edge1*edge1==edge2*edge2+edge3*edge3)||(edge2*edge2==edge1*edge1+edge3*edge3)||(edge3*edge3==edge2*edge2+edge1*edge1)))
			{
				printf("This is an isosceles right tringle\n");
			}
			else
			{
				if(((edge1!=edge2)&&(edge2!=edge3))&&((edge1*edge1!=edge2*edge2+edge3*edge3)||(edge2*edge2!=edge1*edge1+edge3*edge3)||(edge3*edge3!=edge2*edge2+edge1*edge1)))
				{
					printf("This is an right tringle\n");
				}
				else
				{
					printf("This is an isosceles tringle\n");
			    }
			}
		}
	}
}
bool SjX::s()
{
	float edge1=t[0];
	float edge2=t[1];
	float edge3=t[2];
	if (edge1+edge2>edge3&&edge3+edge2>edge1&&edge1+edge3>edge2)
	{
		return true;
	}
	else 
	{
		return false;
	}
}















