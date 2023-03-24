#include<iostream>
using namespace std;

class A
{
	public :
		virtual void calculate(int a)=0;
};

class B : public A
{
	private :
		int a,b;
	public :
		void calculate(int a)
		{
			switch(a)
			{
				case 1 :
					cout<<"Enter the Radius for Circle :- ";
					cin  >> a;	
					cout << "Area of circle is : " << 3.14*a*a <<endl;	
					break;
					
				case 2 :
					cout << "Enter Base : ";
					cin  >> a;	
					cout << "Enter Height : ";
					cin >> b;
					cout << "Area of triangle is : " << 0.5*a*b<<endl;
					break;
				
				case 3 : 
					cout << "Enter l : ";
					cin  >> a;	
					cout << "Enter w : ";
					cin >> b;
					cout << "Area of rectangle is : " << a*b << endl;
					break;
					
				default :
					cout<<"INVALID......."<<endl;
			}
		}
};

int main ()
{
	int c;
	cout<<"Enter 1 for area of circle. "<<endl ;
	cout<<"Enter 2 for area of triangle."<<endl;
	cout<<"Enter 3 for area of rectangle."<<endl;
	
	cout<<"Enter your choice :- ";
	cin >> c;
	B b1;
	b1.calculate(c);
}
