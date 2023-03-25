#include<iostream>
using namespace std;

class A 
{
	private : 
	 	int a;
	public :
		A(int a)
		{
			this->a=a;
		}
		A()
		{
			
		}
		A operator+(A o)
		{
			A tem;
			tem.a=a+o.a;
			return tem;
		}
		void get()
		{
			cout<<endl<<a;
		}
};
int main()
{
	int x,y;
	cout<<"Enter the Value of X :- ";
	cin>>x;
	cout<<"Enter the Value of Y :- ";
	cin>>y;
	
	A a(x),b(y),c;
	c=a+b;
	c.get();	
}
