#include<iostream>
using namespace std;

class Animal
{
	protected:
		int age;
		string name;
	public :
		void setan()
		{
			cout << "Enter Name :- ";
			cin >> name;
			cout << "Enter age :- ";
			cin >> age;
		}
};

class Zebra : public Animal
{
	protected:
		string place;
	public :
		void setze()
		{
			cout << "Enter Place :- ";
			cin >> place;
		}
		void getze()
		{
			cout<<"Name :- "<<name<<endl<<"Age  :- "<<age<<endl<<"Place :- "<<place<<endl;
		}
};
class Dolphin : public Animal
{
	protected:
		string col;
	public :
		void setdo()
		{
			cout << "Enter Colour :- ";
			cin >> col;
		}
		void getdo()
		{
			cout<<"Name :- "<<name<<endl<<"Age :- "<<age<<endl<<"Colour :- "<<col<<endl;
		}	
};
int main()
{
	Zebra z;
	z.setan();
	z.setze();
	z.getze();
	
	cout<<endl;
	
	Dolphin d;
	d.setan();
	d.setdo();
	d.getdo();
}
