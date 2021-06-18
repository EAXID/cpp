#include"Adm.h"
#include"date.h"
#include<string.h>
admin::admin()
{
	
}
admin::~admin()
{
}

void admin::setroomr()//酒店工作人员设置房间 
{
	for(int i=0;i<N;i++)
	{
		cout<<"请输入第"<<i+1<<"个房间类型名";
		cin>>s[i];
		cout<<"请输入第"<<i+1<<"种房间数量";
		cin>>roomnumber[i];
		for(int j=0;j<roomnumber[i];j++)
		{
			cout<<s[i]<<"第"<<j+1<<"间"<<endl;
			cin>>r[i][j];
		}
		fflush(stdin);//清空缓存区 
	}
}
void admin::dispaly()//展示全部房间 
{
	for(int i=0;i<N;i++)
	{
		cout<<s[i]<<"共"<<roomnumber[i]<<"间"<<endl<<
		"具体为"<<endl;
		for(int j=0;j<roomnumber[i];j++)
		{
			cout<<r[i][j]<<endl;
		} 
	}
}
void admin::inpr()//入住开房 
{
	int a,y,m,d;
	string id,name;
	char gender;
	cout<<"要入住的房间类型"<<endl; 
	for(int i=0;i<N;i++)
	{ 
		cout<<i+1<<"."<<s[i]<<"  ";
	}
	cin>>a;
	system("cls");
	for(int i=0;i<roomnumber[a-1];i++)
	{
		if(!r[a-1][i].getpeople())
		{
			cin>>r[a-1][i].p;
			r[a-1][i].setroom(true);
			break;
		}
	}
}
void admin::outpr() //离开退房 
{
	Date d;
	string id,name;
	cout<<"请输入身份证号和姓名"<<endl;
	cin>>id;
	cin>>name;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(id==r[i][j].p.getID()&&name==r[i][j].p.getname())
			{
				cout<<"输入离开时间"<<endl;
	            cin>>d;
	           
	            Date d1= r[i][j].p.getinday();
	            int a=(d-d1)*r[i][j].getmoney();
	            cout<<"所需支付金额"<<":"<<a<<endl;
	            r[i][j].p.~people();
			    r[i][j].setroom(false);
	            break;
			}
		}
	}
}
void admin::midpr()//中途换房 
{
	Date d;
	string id,name;
	cout<<"请输入身份证号和姓名"<<endl;
	cin>>id; 
	cin>>name;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(id==r[i][j].p.getID()&&name==r[i][j].p.getname())
			{
				cout<<"输入换房时间"<<endl;
	            cin>>d;
	            cout<<"换房前所产生的金额"<<":";
	            Date d1= r[i][j].p.getinday();
	            int a=(d-d1)*r[i][j].getmoney();
	            cout<<"所需支付金额"<<":"<<a<<endl;
	            r[i][j].p.~people();
			    r[i][j].setroom(false);
			    inpr();
	            return;
			}
		}
	}
}
void admin::lookp()//浏览客户信息 
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(r[i][j].getpeople() )
			{
				
				cout<<"房间号"<<r[i][j].geta()<<endl;
				cout<<r[i][j].p<<endl;	
			}
		}
	} 
} 
void admin::ler()//查询空房间
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(r[i][j].getpeople())
			{
				cout<<r[i][j]<<endl;
			}
		}
	} 
}
void admin::ahc()//按房间号查询  
{
	string a,b;
	cout<<"请输入房间号"<<endl;
	cin>>a;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			b=r[i][j].geta();
			if(!a.compare(b))
			{
				if(r[i][j].getpeople())
				{
					cout<<r[i][j]<<endl;
					cout<<r[i][j].p<<endl;
					return;
				}
				cout<<r[i][j]<<endl;
			}
		}
	} 
} 
void admin::sace()
{
	ofstream ofs;
	ofs.open("room.txt",ios::out);
	for(int i=0;i<N;i++)
	{
		ofs<<s[i]<<"  "<<roomnumber[i]<<endl;
		for(int j=0;j<roomnumber[i];j++)
		{
			ofs<<r[i][j].geta()<<"  "<<r[i][j].getmoney()<<"   "<<r[i][j].getpeople()<<endl; 
		}
	}
	ofs.close();
	ofs.open("people.txt",ios::out);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			Date t=r[i][j].p.getinday();
			ofs<<r[i][j].p.getID()<<"  "<<r[i][j].p.getname()<<"   "<<r[i][j].p.getgender()
			<<"   "<<t.getYear()<<" "<<t.getMonth()<<" "<<t.getDay()<<endl; 
		}
	}
	ofs.close();
}
void admin::lr()
{
	int money;
	bool people;
	string id,name,gender,a;
	int year,month,day;
	ifstream ifs;
	ifs.open("room.txt",ios::in) ;
	for(int i=0;i<N;i++)
	{
		ifs>>s[i]>>roomnumber[i];
		for(int j=0;j<roomnumber[i];j++)
		{
		    ifs>>money;
			ifs>>a;
			ifs>>people;
			r[i][j].setroom(money,a,people);
		}
	}
	ifs.close() ; 
	ifs.open("people.txt",ios::in);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			ifs>>id>>name>>gender>>year>>month>>day;
			r[i][j].p.setpeople(id,name,gender,year,month,day);
		}
	}
	ifs.close() ;
}
void admin::modroom()//修改房间信息 
{
	int a,e;
	string b,c,d;
	
	do
	{
		cout<<"1.修改房间类型名"<<endl<<"2.修改房间号"<<endl<<"3.修改房间数量"<<endl<<"4.修改房间价格" <<endl<<"0.退出";
		cin>>a;
		switch(a)
		{
			case 1: 
			{
				cout<<"输入要修改的房间类型的原名"<<endl; 
				cin>>b;
				for(int i=0;i<N;i++) 
				{
					if(b==s[i])
					{
						cout<<"输入要改为的类型名"<<endl;
						cin>>c;
						s[i]=c;
						cout<<"修改完成"<<endl;	
						break;
					}
					else if(i==N-1)
					{
						cout<<"没有找到相同类型名"<<endl;
					} 
				}
				break;
			}
			case 2:
			{   cout<<"输入要修改的房间的原房号"<<endl; 
				cin>>d;
				for(int i=0;i<N;i++)
				{
					for(int j=0;j<roomnumber[i];j++)
					{
					    if(!d.compare(r[i][j].geta()))
					    {
						    cout<<"输入要改为的房号"<<endl;
						    cin>>d;
						    r[i][j].seta(d);
						    cout<<"修改完成"<<endl;	
						    break;
				    	}
					    else if(i==N-1&&roomnumber[i]-1==j)
					    {
						    cout<<"没有找到相同房号"<<endl;
						    break;
					    } 
					}
				}
				break;
			} 
			
			case 3:
			{
				cout<<"输入要修改的房间的类型名"<<endl; 
				cin>>b;
				for(int i=0;i<N;i++) 
				{
					if(b==s[i])
					{
						cout<<"输入要改为的数量"<<endl;
						cin>>e;
						roomnumber[i]=e;
						cout<<"修改完成"<<endl;	
						break;
					}
					else if(i==N-1)
					{
						cout<<"没有找到相同类型名"<<endl;
					} 
				}
			} break;
			case 4: 
			{
				cout<<"输入要修改价格的房间的房号"<<endl; 
				cin>>d;
				for(int i=0;i<N;i++)
				{
					for(int j=0;j<roomnumber[i];j++)
					{
					    if(d==r[i][j].geta())
					    {
						    cout<<"输入要改为的价格"<<endl;
						    cin>>e;
						    r[i][j].setmoney(e);
						    cout<<"修改完成"<<endl;	
						    break;
				    	}
					    else if(i==N-1&&roomnumber[i]-1==j)
					    {
						    cout<<"没有找到相同房号"<<endl;
						    break;
					    } 
					}
				}
			}break;
			case 0 :break; 
			default:cout<<"输入错误，请重试"<<endl;break; 
		}
	}while(a) ;
}




































