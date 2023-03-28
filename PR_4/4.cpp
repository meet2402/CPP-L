#include<iostream>
using namespace std;

class school
{
	private :
		static int n;
		int id,age,roll;
		string name,mno,add;
		static string institute;
		static int std;
		
	public :
		void setdata()
		{
			id = ++n;
			cout << "Enter name :- ";
			cin >> name;
			cout << "Enter Age :- ";
			cin >> age;
			cout << "Enter Roll No. :- ";
			cin >> roll;
			cout << "Enter Mobile Number :- ";
			cin >> mno;
			cout << "Enter Address :- ";
			cin >> add;	
		}
		void getdata()
		{
			cout << "Id : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Std : " << std << endl;
			cout << "Roll no : " << roll << endl;
			cout << "Age : " << age << endl;
			cout << "institute : " << institute << endl;
			cout << "Mobile number : " << mno << endl;
			cout << "Address : " << add << endl;
		}
};
int school::n=0;
int school::std=12;
string school::institute="Aspire public School";

class college
{
	private :
		static int n1;
		int id,age,roll1;
		string name,mno,add;
		static string institute1;
		static string course;
		
		
	public :
		void setdata()
		{
			id = ++n1;
			cout << "Enter name :- ";
			cin >> name;
			cout << "Enter Age :- ";
			cin >> age;
			cout << "Enter Roll No. :- ";
			cin >> roll1;
			cout << "Enter Mobile Number :- ";
			cin >> mno;
			cout << "Enter Address : ";
			cin >> add;	
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "name : " << name << endl;
			cout << "roll no : " << roll1 << endl;
			cout << "Age : " << age << endl;
			cout << "Course : " << course << endl;
			cout << "Institute : " << institute1 << endl;
			cout << "Mobile Number : " << mno << endl;
			cout << "Address : " << add << endl;
		}
};
int college::n1=0;
string college::course=" BCA ";
string college::institute1="Bhagwan Mahavir College";

int main()
{
	school s;
	college c;

	s.setdata();
	s.getdata();
	c.setdata();
	c.getdata();
}
