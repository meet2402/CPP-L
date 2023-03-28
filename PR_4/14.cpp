#include<iostream>
using namespace std;

class User
{
	string uid;
	string u_p;
	string ina;
	int inu;
	int iq;
	int idis;
	int it;
	static string uid1;
	static string up1;
	
	public :
		void u_i_p()
		{
			cout<<"Enter user ID : ";
			cin>>uid;
			cout<<"Enter Password : ";
			cin>>u_p;	
			if(uid==uid1 && u_p==up1)
			{
				
				confirm();
			}
			else
			{
				cout<<"Wrong id password....";
			}
		}
		void confirm()
		{
			cout<<endl<<"\t\t\tWelcome....."<<endl;
			cout<<"enter item number : ";
			cin>>inu;
			cout<<"enter item name : ";
			cin>>ina;
			cout<<"enter item Quantity : ";
			cin>>iq;
			cout<<"enter tax %  : ";
			cin>>it;
			cout<<"enter Discount % : ";
			cin>>idis;
			out();
		}
		void out()
		{
			cout<<"Item number : "<<inu<<endl;
			cout<<"Item name : "<<ina<<endl;
			cout<<"Item Quantity : "<<iq<<endl;
			cout<<"Item tax : "<<it<<"%"<<endl;
			cout<<"Item Discount : "<<idis<<"%"<<endl;
		}
};

string 	User :: uid1 = "123";
string 	User :: up1 = "1234";

int main()
{
	User u;
	u.u_i_p();
}
