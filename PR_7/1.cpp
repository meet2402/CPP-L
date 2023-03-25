#include<iostream>
using namespace std;

class A
{
	public :
		virtual void calculate()=0;
};

class B : public A
{
	private :
		int a;
	public :
		void calculate()
		{
			cout<<"Enter the Radius for Circle :- ";
			cin  >> a;	
			cout << "Area of circle is : " << 3.14*a*a <<endl;	
		}
};

int main ()
{
	A *f;
	B p;
	f=&p;
	f->calculate();
}
