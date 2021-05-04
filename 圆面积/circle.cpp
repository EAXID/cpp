#include"circle.h"
float circle::Zc(float r)
{
	return 2*r*PI;
} 
float circle::Mj(float r)
{
	return r*r*PI;
}
bool circle::Pd(float r)
{
	return r>0?true:false;
}
 
