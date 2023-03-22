#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter any Number :- ";
	cin>>n;
	
	int arr[n],i;
	cout<<"Enter The Numbers :- ";
	for(i=0; i<n; i++)
     {
     	cin>>arr[i];
	}
	
   	cout<<"\nEven Numbers are:\n";
	for(i=1;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<endl<<arr[i];
		}
	}
}
