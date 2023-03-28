#include<iostream>
using namespace std;

class india
{
	public :
		static int total;
		static void state();		
};

int india :: total = 28;

void india :: state ()
{
	string statename[]={"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
	cout << "Total State : " << total <<endl ;
	cout<<"-------------------------------"<<endl;
	
	for(int i=0;i<28;i++)
	{
		cout << i+1 << " " << statename[i] << endl;
	}
}

int main()
{
	india ::state();
}
