#include"Adm.h"
#include"date.h"
#include<string.h>
admin::admin()
{
	
}
admin::~admin()
{
}

void admin::setroomr()//�Ƶ깤����Ա���÷��� 
{
	for(int i=0;i<N;i++)
	{
		cout<<"�������"<<i+1<<"������������";
		cin>>s[i];
		cout<<"�������"<<i+1<<"�ַ�������";
		cin>>roomnumber[i];
		for(int j=0;j<roomnumber[i];j++)
		{
			cout<<s[i]<<"��"<<j+1<<"��"<<endl;
			cin>>r[i][j];
		}
		fflush(stdin);//��ջ����� 
	}
}
void admin::dispaly()//չʾȫ������ 
{
	for(int i=0;i<N;i++)
	{
		cout<<s[i]<<"��"<<roomnumber[i]<<"��"<<endl<<
		"����Ϊ"<<endl;
		for(int j=0;j<roomnumber[i];j++)
		{
			cout<<r[i][j]<<endl;
		} 
	}
}
void admin::inpr()//��ס���� 
{
	int a,y,m,d;
	string id,name;
	char gender;
	cout<<"Ҫ��ס�ķ�������"<<endl; 
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
void admin::outpr() //�뿪�˷� 
{
	Date d;
	string id,name;
	cout<<"���������֤�ź�����"<<endl;
	cin>>id;
	cin>>name;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(id==r[i][j].p.getID()&&name==r[i][j].p.getname())
			{
				cout<<"�����뿪ʱ��"<<endl;
	            cin>>d;
	           
	            Date d1= r[i][j].p.getinday();
	            int a=(d-d1)*r[i][j].getmoney();
	            cout<<"����֧�����"<<":"<<a<<endl;
	            r[i][j].p.~people();
			    r[i][j].setroom(false);
	            break;
			}
		}
	}
}
void admin::midpr()//��;���� 
{
	Date d;
	string id,name;
	cout<<"���������֤�ź�����"<<endl;
	cin>>id; 
	cin>>name;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(id==r[i][j].p.getID()&&name==r[i][j].p.getname())
			{
				cout<<"���뻻��ʱ��"<<endl;
	            cin>>d;
	            cout<<"����ǰ�������Ľ��"<<":";
	            Date d1= r[i][j].p.getinday();
	            int a=(d-d1)*r[i][j].getmoney();
	            cout<<"����֧�����"<<":"<<a<<endl;
	            r[i][j].p.~people();
			    r[i][j].setroom(false);
			    inpr();
	            return;
			}
		}
	}
}
void admin::lookp()//����ͻ���Ϣ 
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<roomnumber[i];j++)
		{
			if(r[i][j].getpeople() )
			{
				
				cout<<"�����"<<r[i][j].geta()<<endl;
				cout<<r[i][j].p<<endl;	
			}
		}
	} 
} 
void admin::ler()//��ѯ�շ���
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
void admin::ahc()//������Ų�ѯ  
{
	string a,b;
	cout<<"�����뷿���"<<endl;
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
void admin::modroom()//�޸ķ�����Ϣ 
{
	int a,e;
	string b,c,d;
	
	do
	{
		cout<<"1.�޸ķ���������"<<endl<<"2.�޸ķ����"<<endl<<"3.�޸ķ�������"<<endl<<"4.�޸ķ���۸�" <<endl<<"0.�˳�";
		cin>>a;
		switch(a)
		{
			case 1: 
			{
				cout<<"����Ҫ�޸ĵķ������͵�ԭ��"<<endl; 
				cin>>b;
				for(int i=0;i<N;i++) 
				{
					if(b==s[i])
					{
						cout<<"����Ҫ��Ϊ��������"<<endl;
						cin>>c;
						s[i]=c;
						cout<<"�޸����"<<endl;	
						break;
					}
					else if(i==N-1)
					{
						cout<<"û���ҵ���ͬ������"<<endl;
					} 
				}
				break;
			}
			case 2:
			{   cout<<"����Ҫ�޸ĵķ����ԭ����"<<endl; 
				cin>>d;
				for(int i=0;i<N;i++)
				{
					for(int j=0;j<roomnumber[i];j++)
					{
					    if(!d.compare(r[i][j].geta()))
					    {
						    cout<<"����Ҫ��Ϊ�ķ���"<<endl;
						    cin>>d;
						    r[i][j].seta(d);
						    cout<<"�޸����"<<endl;	
						    break;
				    	}
					    else if(i==N-1&&roomnumber[i]-1==j)
					    {
						    cout<<"û���ҵ���ͬ����"<<endl;
						    break;
					    } 
					}
				}
				break;
			} 
			
			case 3:
			{
				cout<<"����Ҫ�޸ĵķ����������"<<endl; 
				cin>>b;
				for(int i=0;i<N;i++) 
				{
					if(b==s[i])
					{
						cout<<"����Ҫ��Ϊ������"<<endl;
						cin>>e;
						roomnumber[i]=e;
						cout<<"�޸����"<<endl;	
						break;
					}
					else if(i==N-1)
					{
						cout<<"û���ҵ���ͬ������"<<endl;
					} 
				}
			} break;
			case 4: 
			{
				cout<<"����Ҫ�޸ļ۸�ķ���ķ���"<<endl; 
				cin>>d;
				for(int i=0;i<N;i++)
				{
					for(int j=0;j<roomnumber[i];j++)
					{
					    if(d==r[i][j].geta())
					    {
						    cout<<"����Ҫ��Ϊ�ļ۸�"<<endl;
						    cin>>e;
						    r[i][j].setmoney(e);
						    cout<<"�޸����"<<endl;	
						    break;
				    	}
					    else if(i==N-1&&roomnumber[i]-1==j)
					    {
						    cout<<"û���ҵ���ͬ����"<<endl;
						    break;
					    } 
					}
				}
			}break;
			case 0 :break; 
			default:cout<<"�������������"<<endl;break; 
		}
	}while(a) ;
}




































