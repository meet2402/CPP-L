#include<iostream>
using namespace std;

class bank
{
	private :
	int c;
	int a;
	long long int d;
	string e,f;
		
	public :
		bank()
		{
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t---------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t|               *  Bank Managment System  *                   |"<< endl;
			cout<<"\t\t\t\t|  ---------------------------------------------------------  |"<< endl ;
			cout<<"\t\t\t\t|                                                             |"<<endl;
			cout<<"\t\t\t\t|               :- Design And Program by -:                   |"<< endl;
			cout<<"\t\t\t\t|  ---------------------------------------------------------  |"<< endl;
			cout<<"\t\t\t\t|                     Meet Dhakecha...                        |"<<endl;
			cout<<"\t\t\t\t|                                                             |"<<endl;
			cout<<"\t\t\t\t|                      :- Trainer -:                          |"<< endl;
			cout<<"\t\t\t\t|  ---------------------------------------------------------  |"<< endl;
			cout<<"\t\t\t\t|                  Simran Ma'am Panjwani                      |"<<endl;
			cout<<"\t\t\t\t---------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
		}
		void display()
		{
			system("cls");
			cout<<" :- Press to Login as Staff"<<endl;
			cout<<endl;
			cout<<"              Press Any Number To Text : ";
			cin >> a;
			system("cls");
			
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t\t\t:- Welcome To Staff -:" <<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << "\t   Enter The Name Of Staff \t\t:" ;
			cin >> e;
			cout << "\t   Enter The Amount Number Of Staff \t:" ;
			cin >> c;
			cout << "\t   Enter The Phone Number Of Staff \t:" ;
			cin>> d;
			cout << "\t   Enter The Email Of Staff \t\t:";
			cin >>f;
			
			system("cls");
		
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t Name \t\t:" <<e << endl;
			cout << "\t Amount Number\t:"<<c <<endl;
			cout << "\t Phone Number \t:"<<d <<endl;
			cout << "\t Email \t\t:"<<f<<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "\t\tPress [1] To withdraw Money" << endl;
			cin >> a;
				
			system("cls");
				switch(a)
				{
					case 1: 
						cout<<"------------------------------------------------------------" <<endl;
						cout<<"\t\tWithdraw The Money : 20000"<<endl;
						cout<<"------------------------------------------------------------" <<endl;
						cout<<endl;
						cout<<endl;
						cout<<"\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
						cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully "<<endl<<endl;
						cout<<"\t\t\tYour Accout Balance Is : 180000";
						break;
				}
						
		}
};

int main()
{
	bank b;
	int a;
	cout<<"                    Press Any Number To Next :- ";
	cin >> a;
	b.display();
}
