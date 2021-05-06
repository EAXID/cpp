#include"YMD.h"
int ymd::PdY(int y)
{
	if(y>1900)
	{
		if(y%400==0||((y%4)==0&&(y%100)!=0))
		{
			return 1;
		}
		else
		{
			return 2;
		} 
	}
	else
	{
		return 0;
	}
}
int ymd::PdM(int m)
{
	switch(m)
	{
		case 1 : return 1;break;
		case 2 : return 2;break;
		case 3 : return 3;break;
		case 4 : return 4;break;
		case 5 : return 5;break;
		case 6 : return 6;break;
		case 7 : return 7;break;
		case 8 : return 8;break;
		case 9 : return 9;break;
		case 10 : return 10;break;
		case 11 : return 11;break;
		case 12 : return 12;break;
		default	: return 0;break; 
	}
}
int ymd::PdD(int d)
{
	switch(PdY(y))
	{
		case 1 : switch(PdM(m))
		         {
		             case 1 :
		             case 3 :
					 case 5 :
					 case 7 :
					 case 8 :
					 case 10 :if(d<31&&d>0)
					          {
					 	          return 1;break;
						      }	
						      else if(d==31)
							  {
							      return 3;	
							  } 
							  else
						      {
						      	  return 0;break;
							  }	
							  break;
					 	
					 case 12 :if(d<31&&d>0)
					          {
					 	          return 1;break;
						      }	
						      else if(d==31)
							  {
								  return 4; 	
							  } 
							  else
						      {
						      	  return 0;break;
							  }	
							  break; 
					case 4 :
					case 6 :
					case 9 :
					case 11 :if(d<30&&d>0)
					          {
					 	          return 1;break;
						      }	
                              else if(d==30)
                              {
                                  return 3;	
							  }
						      else
						      {
						      	  return 0;break;
							  }	
							  break;
					case 2 :if(d<29&&d>0)
					          {
					 	          return 1;break;
						      }	
						      else if(d==29)
						      {
						          return 3;	
							  }
						      else
						      {
						      	  return 0;break;
							  }	
							  break;
					case 0 :break;		   		   		  	
				 }
	    case 2 : switch(PdM(m))
		         {
		             case 1 :
		             case 3 :
					 case 5 :
					 case 7 :
					 case 8 :
					 case 10 :if(d<31&&d>0)
					          {
					 	          return 5;break;
						      }	
						      else if(d==31)
							  {
							      return 6;	
							  } 
							  else
						      {
						      	  return 0;break;
							  }	
							  break;
					 	
					 case 12 :if(d<31&&d>0)
					          {
					 	          return 5;break;
						      }	
						      else if(d==31)
							  {
								  return 7; 	
							  } 
							  else
						      {
						      	  return 0;break;
							  }	
							  break; 
					case 4 :
					case 6 :
					case 9 :
					case 11 :if(d<30&&d>0)
					          {
					 	          return 5;break;
						      }	
                              else if(d==30)
                              {
                                  return 6;	
							  }
						      else
						      {
						      	  return 0;break;
							  }	
							  break;
					case 2 :if(d<28&&d>0)
					          {
					 	          return 5;break;
						      }	
						      else if(d==28)
						      {
						          return 6;	
							  }
						      else
						      {
						      	  return 0;break;
							  }	
							  break;
					case 0 :break;		   		   		  	
				 }		 
	}
}
void ymd::outYMR()
{
	switch(PdD(d))
	{
		case 1 : cout<<y<<"年是闰年"<<endl<<endl<<y<<"年"<<m<<"月"<<d<<"日"<<endl;break; 
		case 5 : cout<<y<<"年是平年"<<endl<<endl<<y<<"年"<<m<<"月"<<d<<"日"<<endl;break;
		case 3 : cout<<y<<"年是闰年"<<endl<<endl<<y<<"年"<<m+1<<"月"<<"1日"<<endl;break;
		case 4 : cout<<y<<"年是闰年"<<endl<<endl<<y+1<<"年"<<"1月"<<"1日"<<endl;break;
		case 6 : cout<<y<<"年是平年"<<endl<<endl<<y<<"年"<<m+1<<"月"<<"1日"<<endl;break;
		case 7 : cout<<y<<"年是平年"<<endl<<endl<<y+1<<"年"<<"1月"<<"1日"<<endl;break;
		case 0 : cout<<"输入错误"<<endl;break;
	}
}
 

