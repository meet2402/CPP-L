#include<iostream>
using namespace std;

class Cric
{
	protected :
		int a,b;
	public :
		void getover()
		{
			cout<<"Enter the Overs of T20 Match : ";
			cin>>a; 
			cout<<"Enter the Overs of Test Match :- ";
			cin>>b;
		}
};

class T20 : public Cric
{
	protected :
		int x,y;
	public :
		void setover(int x)
		{
			a=x;
		}
		void getover()
		{
			cout<<"The T20 Over is :- "<<a<<endl;
		}
};

class Test : public Cric
{
	protected :
		int x,y;
	public :
		void setover(int y)
		{
			b=y;
		}
		void getover()
		{
			cout<<"The Test Over is :- "<<b<<endl;
		}
};

int main()
{
	int x,y;
	
	T20 t;
	Test t1;
	t.Cric::getover();
	t.getover();
	
	cout<<"Enter the 2nd overs of T20 :- ";
	cin>>x;
	cout<<"Enter the 2nd overs of Test :- ";
	cin>>y;
	
	t1.getover(x,y);
	
}
