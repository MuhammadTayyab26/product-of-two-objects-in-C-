#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
#include<string.h>
class product 
{
	int pid;
	char des[32];
	int qty;
	public:
		void setdata(int pid ,char* des,int qty)
		{
			this->pid=pid;
			strcpy(this->des,des);
			this->qty=qty;
			
		}
		void disp()
		{
			cout<<"id :\t"<<pid<<endl;
			cout<<"des:\t"<<des<<endl;
			cout<<"qty:\t"<<qty<<endl;
			
		}
		int getid()
		{
			return pid;
			
		}
		char* getdes()
		{
			return des;
			
		}
		int getqty()
		{
			return qty;
			
		}
};
int main()
{
	product p1;
	p1.setdata(20, "lax", 200);
	p1.disp();
	int i=p1.getid();
	cout<<"id your item    \t :"<<i<<endl;
	int q=p1.getqty();
	cout<<"qty of your item\t:"<<q<<endl;
	char d[32];
	strcpy(d,p1.getdes());
	cout<<"description of your item     \t:"<<d<<endl; 
	cout<<endl;
	cout<<endl;
	product p2;
	p2.setdata(50,"Dove",500);
	p2.disp();
	int m=p2.getid();
	cout<<"id your second item \t:"<<m<<endl;
	int t=p2.getqty();
	cout<<"qty of second item \t:"<<t<<endl;
	char  ds[32];
	strcpy(ds,p2.getdes());
	cout<<"description of your item \t:"<<ds<<endl;
getch();
return 0;
}

