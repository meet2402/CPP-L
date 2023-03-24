#include<iostream>
using namespace std;

int main()
{
    	int i;
    	
    	cout<<"The Leap Years from 2000 to 3000 is :- "<<endl;
    	for(i=2000;i<=3000;i++)  
    	{
		if(i%4==0)
		{
			cout<<i<<"\t";
		}
   	}
}
