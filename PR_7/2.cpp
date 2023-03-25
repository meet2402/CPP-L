#include<iostream>
using namespace std;

class Admin
{
	private :
		string can_terminate="To Manager";
		int total_annual_revenue=100000;
	protected :
		int manager_salary=35000;
		string company_name="ABC.com";
	public :
		void Myaccess()
		{ 
			cout << "Total revenue : " << total_annual_revenue << endl; 
			cout << "Can_terminate : " << can_terminate << endl ; 
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl;
		}		
		
};

class Manager : public Admin
{
	public :
		void Myaccess()
		{   
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl;
		}
};


int main()
{
	Manager m;
	m.Myaccess();
	cout << endl;
	m.Admin::Myaccess();
}
