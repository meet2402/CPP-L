#include<iostream>
using namespace std;

class A
{
	public :
		void input(int a,int b)
		{
			try
			{
				if(b==0)
				{
					throw b;	
				}
				else 
				{
					cout<<"ANS :- "<<a/b<<endl;
				}
			}
			
			catch(...)
			{
				cout<<"Cannot Divided By Zero..."<<endl;
			}
		}
	
	
};
int main()
{
	int a,b;
	
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	A a1;
	a1.input(a,b);
}
