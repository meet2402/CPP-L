#include<iostream>
using namespace std;

class example
{
	protected :
		string a,b;
	public : 
		void getdata()
		{
			cout<<a<<endl ;
		}
};

class example1 : public example
{
	public :
		void getdata(string b)
		{
			cout<<endl<<b;
		}
};

int main()
{
	string a,b;
	cout<<"Enter Your Message :- ";
	cin>>a;
	cout<<"Enter Your Message :- ";
	cin>>b;
	
	example1 e1;
	e1.getdata(b);
}
