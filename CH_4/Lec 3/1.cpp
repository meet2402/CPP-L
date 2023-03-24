#include<iostream>
using namespace std;

class time1
{
	private :
		int h,m,s;
		
	public :
		void setdata()
		{
			cout<<"Enter Hours :-";
			cin>>h;
			cout<<"Enter Minutes :-";
			cin>>m;
			cout<<"Enter Seconds :-";
			cin>>s;
		}
		void getdata()
		{
			cout << "The Time is :- " << h << ":" << m << ":" << s<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		friend class time2;	
};

class time2
{
	int th,tm,ts,h1,m1,s1;
	
	public :
		void input()
		{
			cout<<"Enter Hours :-";
			cin>>h1;
			cout<<"Enter Minutes :-";
			cin>>m1;
			cout<<"Enter Seconds :-";
			cin>>s1;
		}
		void output(time1 t)
		{
			cout << "The Time is :- " << h1 << ":" << m1 << ":" << s1<<endl;
			cout<<"---------------------------------------------------"<<endl;
			
			th=t.h+h1;
			tm=t.m+m1;
			ts=t.s+s1;
			while(ts>=60)
			{
				ts-=60;
				tm++;
			}
			while(tm>=60)
			{
				tm-=60;
				th++;
			}
			cout << "The Total Time is " << th << ":" << tm << ":" << ts;
		}
};

int main()
{
	time1 t;
	t.setdata();
	t.getdata();
	
	time2 t1;
	t1.input();
	t1.output(t);
}
