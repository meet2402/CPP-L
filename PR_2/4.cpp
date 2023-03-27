#include<iostream>
using namespace std;

inline void table(int,int);

int main()
{
	int a,i;
	cout<<"Enter the Value of A :- ";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		table(a,i);
	}
}

inline void table(int a,int i)
{
	cout<< a << "X" << i << "=" << a*i << endl;
}
