#include<iostream>
using namespace std;

class Calc
{
	public :
		void disu(float a,float b)
		{
			cout << "Division : " << a/b << endl;
		}
		void disu(int a,int b,int c)
		{
			cout << "Subtraction : " << a-b-c << endl;
		}
};

class Calc1
{
	public :
		void muad(int a,int b,int c,int d)
		{
			cout << "Multiplication : " << a*b*c*d << endl;
		}
		void muad(int a,int b,int c,int d,int e)
		{
			cout << "Addition : " << a+b+c+d+e << endl;
		}	
};

int main()
{
	int a,b,c,d,e;
	
	cout<<"Enter the Value of A :- ";
	cin>>a;
	cout<<"Enter the Value of B :- ";
	cin>>b;
	cout<<"Enter the Value of C :- ";
	cin>>c;
	cout<<"Enter the Value of D :- ";
	cin>>d;
	cout<<"Enter the Value of E :- ";
	cin>>e;
	
	Calc c1;
	c1.disu(a,b);
	c1.disu(a,b,c);
	
	Calc1 d1;
	d1.muad(a,b,c,d);
	d1.muad(a,b,c,d,e);
}
