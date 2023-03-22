/* 2. WAP to create a basic calculator with +, -, *, /and % 
operations using switch case and UDF. Add never
ending functionality using loop. */

#include<iostream>
using namespace std;

int addition(int a,int b)
{
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	return a+b;
}

int subtraction(int a,int b)
{
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	return a-b;
}

int multiplication(int a,int b)
{
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	return a*b;
}

int division(int a,int b)
{
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	return a/b;
}

int module(int a,int b)
{
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	return a%b;
}

int main()
{
	int a,b,c;
	
	do
	{
		cout << "press 1 to +" << endl;
		cout << "press 2 to -" << endl;
		cout <<	"press 3 to *" << endl;
		cout <<	"press 4 to /" << endl;
		cout <<	"press 5 to %" << endl;
		cout << "press 6 to exit" << endl;
				
		cout << "Enter your choice : ";
		cin >> c;
	
		switch(c)
		{
			case 1:
				cout << "Addition is :- " << addition(a,b);
				break;
				   
		    case 2:
			   cout << "Subtraction is :- " << subtraction(a,b);
			   break;
			   
			case 3:
			   cout << "Multiplication is :- " << multiplication(a,b);
			   break;
			   
			case 4:
			   cout << "Division is :- " << division(a,b);
			   break;
			   
			case 5:
			   cout << "Module is :-" << module(a,b);
			   break; 
			
			case 6:
				cout << "Exit.";
				break;
				
			default : 
				cout << "Invalid choice..";
				break;	        
		}
		cout<<endl<<"-----------------------------------"<<endl;
	}
	while(c!=6);
}
