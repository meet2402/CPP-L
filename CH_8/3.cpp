#include<iostream>
using namespace std;

main()
{
	char psw[20];
	cout<<"Enter your Password :- ";
	cin>>psw;
	
	int a=0;
	
	try
	{
		for(int i=0;i<=20;i++)
		{
			if(psw[i] >= 65 && psw[i] <= 90)
			{
				a++;
			}
		}
		
		if (a>0)
		{
			cout<<"Your Password is Valid..."<<endl;
		}
		else
		{
			throw psw;
		}
		
	}
	
	catch(char s[])
	{
		cout<<"Your Password is Invalid..."<<endl;
	}
}
