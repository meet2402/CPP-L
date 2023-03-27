#include<iostream>
using namespace std;

main()
{
	int a;
	cout<<"Enter Any Number :- ";
	cin>>a;
	
	try 
	{
		if(0/a)
		{
			cout<<"Answer :- "<<(0/a)<<endl;
		}
		else
		{
			throw 0/a;
		}
	}
	catch(int b)
	{
		cout<<"Cannot Divided By Zero..."<<endl;
	}
}
