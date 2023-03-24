#include<iostream>
using namespace std;

class customers
{
	private :
		int id,age,simcard_validity;
		string name,telecom_brand_name,mobile_number,city;
	public :
		void setdata()
		{
			this->id = id;
			this->name = name;
			this->age = age;
			this->mobile_number = mobile_number;
			this->city = city;
			this->telecom_brand_name = telecom_brand_name;
			this->simcard_validity = simcard_validity;
		}
		void getdata()
		{
			int i;
			for(i=1;i<=5;i++)
			{
				cout<<"Customer No. "<<i<<endl;
				cout << "Enter Id \t: ";
				cin >> id;
				cout << "Enter Name\t: ";
				cin >> name;
				cout << "Enter Age\t: ";
				cin >> age;
				cout << "Enter Mobile Number\t: ";
				cin >> mobile_number;
				cout << "Enter City\t: ";
				cin >> city;
				cout << "Enter Telecom Brand Name\t: ";
				cin >> telecom_brand_name;
				cout << "Enter Simcard Validity(in years :-only number)\t: ";
				cin >> simcard_validity;
			}
			cout << "Id\t: " << id << endl;
			cout << "Name\t: " << name << endl;
			cout << "Age\t: " << age << endl;
			cout << "Mobile Number\t: " << mobile_number << endl;
			cout << "City\t: " << city << endl;
			cout << "Telecom Brand Name\t: " << telecom_brand_name << endl;
			cout << "Simcard Validity\t: " << simcard_validity << endl;
		}
};

int main()
{
	customers c1,c2,c3,c4,c5;
	
	c1.setdata();
	c1.getdata();
	
	c2.setdata();
	c2.getdata();
	
	c3.setdata();
	c3.getdata();
	
	c4.setdata();
	c4.getdata();
	
	c5.setdata();
	c5.getdata();
}
