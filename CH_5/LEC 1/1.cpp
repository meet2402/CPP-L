#include<iostream>
using namespace std;

class x
{
	protected :
		int a,b,c;
};

class y : public x
{
	private:
		int a,b,c;
	public :
		void setdata()
		{
			cout<<"Enter the Value of A :- ";
			cin>>a;
			cout<<"Enter the Value of B :- ";
			cin>>b;
			cout<<"Enter the Value of C :- ";
			cin>>c;
		}
		void getdata()
		{
			cout<<"The Cube of A :- "<<a*a*a<<endl;
			cout<<"The Cube of B :- "<<b*b*b<<endl;
			cout<<"The Cube of C :- "<<c*c*c<<endl;
		}
};

int main()
{
	y z;
	z.setdata();
	z.getdata();
}
