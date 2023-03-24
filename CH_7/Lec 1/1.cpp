#include<iostream>
using namespace std;

class Admin
{
	private :
		string can_terminate="To Manager OR To Employee";
		int total_annual_revenue=1000000;
	protected :
		int manager_salary=35000;
		int employee_salary=25000;
		int total_staff=350;
		string company_name="ABCcom";
	public :
		void Myaccess()
		{ 
			cout << "Total revenue : " << total_annual_revenue << endl; 
			cout << "Can_terminate : " << can_terminate << endl ; 
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl; 
			cout << "Employee_salary : " << employee_salary << endl; 
			cout << "Total_staff : " << total_staff << endl; 
		}	
};

class Manager : public Admin
{
	public :
		void Myaccess()
		{   
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl; 
			cout << "Employee_salary : " << employee_salary << endl; 
			cout << "Total_staff : " << total_staff << endl; 
		}
};

class Employee : public Manager
{
	public :
		void Myaccess()
		{  
			cout << "Company_name : " << company_name << endl;  
			cout << "Employee_salary : " << employee_salary << endl;  
		}
};

int main()
{
	Employee e;
	e.Myaccess();
	cout << endl;
	e.Manager::Myaccess();
	cout << endl;
	e.Admin::Myaccess();
}
