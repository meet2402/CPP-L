#include<iostream>
using namespace std;

class employee
{
	int id,age,salary;
	string name,role,exp,city,cname;
	
	public:
		void input()
		{
			cout<<"Enter ID :- ";
			cin>>id;
			cout<<"Enter Name :- ";
			cin>>name;
			cout<<"Enter Age :- ";
			cin>>age;
			cout<<"Enter Role :- ";
			cin>>role;
			cout<<"Enter Experience :- ";
			cin>>exp;
			cout<<"Enter Salary :- ";
			cin>>salary;
			cout<<"Enter City :- ";
			cin>>city;
			cout<<"Enter Company Name :- ";
			cin>>cname;
		}
		void output()
		{
			cout<<endl<<"ID :- "<<id<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Age :- "<<age<<endl;
			cout<<"Role :- "<<role<<endl;
			cout<<"Experience :- "<<exp<<endl;
			cout<<"Salary :- "<<salary<<endl;
			cout<<"City :- "<<city<<endl;
			cout<<"Company Name :- "<<cname<<endl;
		}
};

int main()
{
	employee e;
	
	cout<<"Employee 1 :- "<<endl;
	e.input();
	e.output();
	
	cout<<endl<<"Employee 2 :- "<<endl;
	e.input();
	e.output();

	cout<<endl<<"Employee 3 :- "<<endl;
	e.input();
	e.output();
	
	cout<<endl<<"Employee 4 :- "<<endl;
	e.input();
	e.output();
	
	cout<<endl<<"Employee 5 :- "<<endl;
	e.input();
	e.output();
}
