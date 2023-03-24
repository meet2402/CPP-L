// 6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.

#include<iostream>
using namespace std;

int main()
{
	int i;
	
	int a[5],b[5];
	
	for(i=1;i<=5;i++)
	{
		cout<<"a["<<i<<"] :- ";
		cin>>a[i];
		b[i]=a[i]*a[i]*a[i];
	}
	cout<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<"b["<<i<<"] :- "<<b[i]<<"\n";
	}	 
}
