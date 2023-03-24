#include<iostream>
using namespace std;

class student
{
	private :
		int id,age;
		string name,email,city,college,course;
	public :
		void setdata()
		{
			this->id = id;
			this->name = name;
			this->age = age;
			this->email = email;
			this->city = city;
			this->college = college;
			this->course = course;
		}
		void getdata()
		{
			int i;
			for(i=1;i<=5;i++)
			{
				cout<<"Student "<<i<<endl;
				cout << "Enter id \t: ";
				cin >> id;
				cout << "Enter name\t: ";
				cin >> name;
				cout << "Enter age\t: ";
				cin >> age;
				cout << "Enter emial\t: ";
				cin >> email;
				cout << "Enter city\t: ";
				cin >> city;
				cout << "Enter college\t: ";
				cin >> college;
				cout << "Enter course\t: ";
				cin >> course;
			}
			cout << "Id\t: " << id << endl;
			cout << "Name\t: " << name << endl;
			cout << "Age\t: " << age << endl;
			cout << "Email\t: " << email << endl;
			cout << "City\t: " << city << endl;
			cout << "College\t: " << college << endl;
			cout << "Course\t: " << course << endl;
		}
};

int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata();
	s1.getdata();
	
	s2.setdata();
	s2.getdata();
	
	s3.setdata();
	s3.getdata();
	
	s4.setdata();
	s4.getdata();
	
	s5.setdata();
	s5.getdata();
}
