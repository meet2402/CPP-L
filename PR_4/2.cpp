#include<iostream>
using namespace std;

class first
{
	private :
		int id,std;
		string name,div,scl_name;
	public :
		void setdata()
		{
			cout<<"Enter id :- ";
			cin>>id;
			cout<<"Enter name :- ";
			cin>>name; 
			cout<<"Enter Standard -: ";
			cin>>std;
			cout<<"Enter Division -: ";
			cin>>div;
			cout<<"Enter School Name :- ";
			cin>>scl_name;
			cout<<"----------------------------------------"<<endl;
		}
		void getdata()
		{
			cout<<"Id :- "<<id<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Standard :- "<<std<<endl;
			cout<<"Division :- "<<div<<endl;
			cout<<"School Name :- "<<scl_name;
		}
};

class second
{
	private :
		first s[5];
	public :
		void read()
		{
			for(int i=0;i<5;i++)
			{
				s[i].setdata();
			}
		}
		void print()
		{
			for(int i=0;i<5;i++)
			{
				s[i].getdata();
			}
		}
};

int main()
{
	second s;
	s.read();
	s.print();
}
