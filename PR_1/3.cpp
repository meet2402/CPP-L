#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,i;
 
    	cout<<"Enter the String length :- ";
    	cin>>n;
    	
    	char s[n];
    	for(i=0;i<n;i++)
    	{
    		cout<<"Enter The Character of String"<<s[i];
    		cin>>Ss[i];
	}
    	
    	for(i=0;s[i]<=n;i++)  
    	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]+=32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		}
   	}
   	cout<<"String in Togglecase :- " << s;
   	return 0;
