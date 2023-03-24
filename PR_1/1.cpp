#include<iostream>
#include<string.h>
using namespace std;

int main()
{	
	int str[50],n,i;
	
	cout << "Enter a string: ";
	cin >> n;
	
	for(i=0; i < strlen(str);i++)
	{
		if(str[i]>= 48 && str[i]<= 57)
		{
			cout << "This is a Number" << endl;	
		}
		else
		{
			cout << "This is not a number";	
		}
	}
}
