#include<iostream>
using namespace std;

class A
{
	public :
 		virtual void getA()
 		{
 			cout << "class A.";	
		}
};

class B :public A
{
	public :
 		void getA()
 		{
 			cout << "class B." << endl;	
		}
};

int main()
{
	B b1;
	b1.getA();
	b1.getA();
}
