#include<iostream>
using namespace std;

class company
{
	private :
		int comp_id;
		string comp_name;	
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
		
	public : 
		company (int id,string name,int quantity,int revenue,int import,int exprt,string ceo)
		{
			this->comp_id=id;
			this->comp_name=name;
			this->comp_staff_quantity=quantity;
			this->comp_revenue=revenue;
			this->comp_import_raw_diamonds=import;
			this->comp_export_diamonds=exprt;
			this->comp_ceo=ceo;
		}
		void output()
		{
			cout<<"------------------------------------------"<<endl;
			cout <<	"id : " << comp_id << endl;
			cout <<	"name : "<< comp_name << endl;
			cout <<	"staff_quantity : "<< comp_staff_quantity << endl;
			cout <<	"revenue : "<< comp_revenue << endl;
			cout <<	"import_raw_diamonds : "<< comp_import_raw_diamonds << endl;
			cout <<	"export_diamonds : "<< comp_export_diamonds << endl;
			cout <<	"ceo name : "<< comp_ceo << endl;
			cout<<"------------------------------------------"<<endl;
		}
		~company ()
		{
			cout<<"The Process is Over......"<<endl;
		}
};

int main()
{
	int i,n;
	
	cout<<"Enter the Numbers Of Companies :- ";
	cin>>n;
	cout<<"-------------------------------------------"<<endl;
	
	int id;
	string name;
	int staff_quantity;
	int revenue;
	int import_raw_diamonds;
	int export_diamonds;
	string ceo;
	
	for(i=0;i<n;i++)
	{
		cout <<	"Enter Company Id : ";
		cin >> id;
		cout <<	"Enter Company Name : ";
		cin >> name;
		cout <<	"Enter Staff Quantity : ";
		cin >> staff_quantity;
		cout <<	"Enter Revenue : ";
		cin >> revenue;
		cout <<	"Enter Imported Raw Diamonds : ";
		cin >> import_raw_diamonds;
		cout <<	"Enter Exported Diamonds : ";
		cin >> export_diamonds;
		cout <<	"Enter Ceo Name : ";
		cin >> ceo;

		company c(id,name,staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo);
		c.output();
	}
}
