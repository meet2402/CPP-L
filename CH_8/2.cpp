#include<iostream>
using namespace std;

main()
{
	int a;
	cout<<"Enter Your Age :- ";
	cin>>a;
	
	try
	{
		if(a>=18)
		{
			cout<<"You are Eligible for Voting...";
		}
		else 
		{
			throw a;
		}
	}
	catch(int b)
	{
		cout<<"You are Not Eligible for Voting...";
	}
}
