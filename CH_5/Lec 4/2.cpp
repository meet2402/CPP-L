#include<iostream>
using namespace std;

class cafe
{
	private :
		int cafe_id;
		string cafe_name;	
		string cafe_type;
		int cafe_staff_quantity;
		string cafe_location;
		int cafe_rating;
		int cafe_establish_year;
		
	public : 
		cafe()
		{
			int i,n;
	
			cout<<"Enter the Numbers Of Cafe's :- ";
			cin>>n;
			cout<<"-------------------------------------------"<<endl;
	
			for(i=0;i<n;i++)
			{
				cout <<	"Enter Cafe Id : ";
				cin >> cafe_id;
				cout <<	"Enter Cafe Name : ";
				cin >> cafe_name;
				cout <<	"Enter Cafe Type(Normal/Rooftop) : ";
				cin >> cafe_type;
				cout <<	"Enter Cafe Staff Quantity: ";
				cin >> cafe_staff_quantity;
				cout <<	"Enter Cafe Location : ";
				cin >> cafe_location;;
				cout <<	"Enter Cafe Rating : ";
				cin >> cafe_rating;
				cout <<	"Enter Cafe Established Year : ";
				cin >> cafe_establish_year;
			}
		}
		void output()
		{
			cout<<"------------------------------------------"<<endl;
			cout <<	"id : " << cafe_id << endl;
			cout <<	"name : "<< cafe_name << endl;
			cout <<	"staff_quantity : "<< cafe_type << endl;
			cout <<	"revenue : "<< cafe_staff_quantity << endl;
			cout <<	"import_raw_diamonds : "<< cafe_location << endl;
			cout <<	"export_diamonds : "<< cafe_rating << endl;
			cout <<	"ceo name : "<< cafe_establish_year << endl;
			cout<<"------------------------------------------"<<endl;
		}
		~cafe ()
		{
			cout<<"The Process is Over......"<<endl;
		}
};

int main()
{
	cafe c;
	c.output();
}
