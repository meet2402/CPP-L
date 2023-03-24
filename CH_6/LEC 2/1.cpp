#include<iostream>
using namespace std;

class Overload
{
	private :
		int a;
	public :
		void setdata(int a)
		{
			this->a=a;
		}
		
		Overload operator<(Overload o2)
		{
			Overload i;
			if(a>o2.a)
			{	
				i.a=a;
			}
			else 
			{
				i.a=o2.a;
			}				
		}
		void getdata()
		{
			cout<<"The Maximum Number is :- "<<a;
		}
};
int main()
{
	int a,b;
	cout<<"Enter the Value of A :- ";
	cin>>a;
	cout<<"Enter the Value of B :- ";
	cin>>b;
	
	Overload o1,o2,o3;
	o1.setdata(a);
	o2.setdata(b);
	
	o3=o1<o2;

	o3.getdata();
	 
}
