#include<iostream>
using namespace std;

class student
{
	private :
		int id;
		string name,email,contact;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter Email : ";
			cin >> email;
			cout << "Enter Contact :";
			cin >> contact; 
		}
		void getdata()
		{
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Email : " << email << endl;
			cout << "Contact : " << contact << endl;
		}		
	
};

int main()
{
	int n;
	cout << "Enter Number of Students : ";
	cin >> n;
	
	student s[n];
	
	for(int i=0;i<n;i++) 
	{
		s[i].setdata();
	}
	for(int i=0;i<n;i++)
	{
		s[i].getdata();
	}
}
