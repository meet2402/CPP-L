#include<iostream>
using namespace std;

class cars
{
	int car_id,car_model,car_release_year;
	string car_company_name,car_color;
	
	public:
		void input()
		{
			cout<<"Enter Car Id :- ";
			cin>>car_id;
			cout<<"Enter Car Company Name :- ";
			cin>>car_company_name;
			cout<<"Enter Car Color :- ";
			cin>>car_color;
			cout<<"Enter Car Model :- ";
			cin>>car_model;
			cout<<"Enter Car Release Year :- ";
			cin>>car_release_year;
		}
		void output()
		{
			cout<<"Car Id :- "<<car_id<<endl;
			cout<<"Car Company Name :- "<<car_company_name<<endl;
			cout<<"Car Color :- "<<car_color<<endl;
			cout<<"Car Model :- "<<car_model<<endl;
			cout<<"Car Release Year :- "<<car_release_year<<endl;
		}
};

int main()
{
	cars c;
	
	cout<<"Car 1 :- "<<endl;
	c.input();
	c.output();
	
	cout<<endl<<"Car 2 :- "<<endl;
	c.input();
	c.output();

	cout<<endl<<"Car 3 :- "<<endl;
	c.input();
	c.output();
	
	cout<<endl<<"Car 4 :- "<<endl;
	c.input();
	c.output();
}
