#include<iostream>
using namespace std;

class hotel
{
	private :
		static int id;
		int hotel_id;
	 	string hotel_name;
	 	string hotel_type;
	 	string hotel_rating;
		static string hotel_location;
		int hotel_establish_year;
	    	static int hotel_staff_quantity;
	 	static int hotel_room_quantity;
	 	
	public :
		void setdata()
		{
			cout << "Hotel_type : ";
			cin >> hotel_type;
			
			cout << "Hotel_name : ";
			cin >> hotel_name;
			
			cout << "Hotel_rating : ";
			cin >> hotel_rating;
			
			cout << "Hotel_establish_year : ";
			cin >> hotel_establish_year;
		}
		static void des()
		{
			cout << "Id\tName\tType\tRating\tLoc\tYear\tStaff\tRoom" << endl;
			cout << "======= ======= ======= ======= ======= ======= ======= =======" << endl;
		}
 		void getdata()
		{
			cout << hotel_id << "\t" << hotel_name << "\t" << hotel_type << "\t" << hotel_rating << "\t" << hotel_location << "\t" << hotel_establish_year << "\t" << hotel_staff_quantity << "\t" << hotel_room_quantity << endl; 
		}
};
int hotel::id=0;
string hotel::hotel_location = "Surat";
int hotel::hotel_room_quantity = 50;
int hotel::hotel_staff_quantity = 200;

int main()
{
	int n,i;
	
	cout<<"Enter The Number Of Hotels/Motels :- ";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	} 
	hotel::des();
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
}
