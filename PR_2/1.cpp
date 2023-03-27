#include<iostream>
using namespace std;

void Mfunc(int);
void Tfunc(int);
main()
{
	int n;
	Mfunc(n);
}

void Mfunc(int n)
{
	cout<<"Enter Any Number : ";
	cin>>n;
	Tfunc(n);
}

void Tfunc(int n)
{
	cout<<"N is : "<<n;
}
