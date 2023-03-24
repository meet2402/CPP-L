#include<iostream>
using namespace std;

class A
{
	protected :
		int id,salary;
		string name;
		string experience;
		string comp_name;
		string role;
		string address;
		string email;
		string contact;
		
	public :
		void inputA()
		{
			cout<<"Enter your Id :- ";
			cin>>id;
			cout<<"Enter your Name :- ";
			cin>>name;
			cout<<"Enter your Role :- ";
			cin>>role;
		}	
};

class B : public A
{
	public :
		void inputB()
		{
			cout<<"Enter your Salary :- ";
			cin>>salary;
			cout<<"Enter your Experience :- ";
			cin>>experience;
		}
};

class C : public B
{
	public :
		void inputC()
		{
			cout<<"Enter your Company Name :- ";
			cin>>comp_name;
			cout<<"Enter your Address :- ";
			cin>>address;
		}
		void outputC()
		{
			cout<<"Name:- "<<name<<endl;
			cout<<"Role:- "<<role<<endl;
			cout<<"Salary:- "<<salary<<endl;
		}
};

class D : public C
{
	public :
		void inputD()
		{
			cout<<"Enter your Email Address:- ";
			cin>>email;
			cout<<"Enter your Contact Number:- ";
			cin>>contact;
		}
		void outputD()
		{
			cout<<"Id :- "<<id<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Role :- "<<role<<endl;
			cout<<"Salary :- "<<salary<<endl;
			cout<<"Experience :- "<<experience<<endl;
			cout<<"Company Name :- "<<comp_name<<endl;
			cout<<"Address :- "<<address<<endl;
			cout<<"Email :- "<<email<<endl;
			cout<<"Contact Number :- "<<contact;
		}
};

int main()
{
	D d;	
	d.inputA();
	d.inputB();
	d.inputC();
	d.outputC();
	d.inputD();
	d.outputD();
}
