#include<iostream>
using namespace std;

class employee
{
	private :
		int id;
		string name,role,salary,experience,address,email,contact;
		
	public :
		void setdata()
		{
			cout << "Enter Id :- ";
			cin >> id;
			cout << "Enter Name :- ";
			cin >> name;
			cout << "Enter Role :- ";
			cin >> role;
			cout << "Enter Salary :- ";
			cin >> salary;
			cout << "Enter Experience :- ";
			cin >> experience;
			cout << "Enter address :- ";
			cin >> address;
			cout << "Enter Email :- ";
			cin >> email;
			cout << "Enter Contact :- ";
			cin >> contact; 
		}
		void getdata()
		{
			cout << "Id :- " << id << endl;
			cout << "Name :- " << name << endl;
			cout << "Role :- " << role << endl;
			cout << "Salary :- " << salary << endl;
			cout << "Experience :- " << experience << endl;
			cout << "Address :- " << address << endl;
			cout << "Email :- " << email << endl;
			cout << "Contact :- " << contact << endl;	
		}	
};

int main()
{
	int i;
	employee e[5];
	
	for(i=1;i<=5;i++)
	{
		cout<<"Employee No. :-"<<i<<endl;
		cout<<"------------------------------"<<endl;
		e[i].setdata();
		cout<<"\n";
	}
	for(i=1;i<=5;i++)
	{
		cout<<"Employee No. :-"<<i<<endl;
		e[i].getdata();
	}
}
