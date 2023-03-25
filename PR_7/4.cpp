#include<iostream>
using namespace std;

class Shape
{
	public :
		virtual void getArea()=0;
};

class Circle : public Shape
{
	public :
		void getArea()
		{
			cout<<"This Is Circle...";	
		}	
};

class Triangle : public Shape
{
	public :
		void getArea()
		{
			cout<<"This Is Triangle..."<<endl;	
		}	
};

int main()
{
	Shape *s;
	Triangle t;
	s=&t;
	s->getArea();
	Circle c;
	s=&c;
	s->getArea();
}
