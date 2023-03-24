#include<iostream>
using namespace std;

class Mother 
{
	public :
		void Display()
		{
			cout << "MOTHER." << endl;	
		}	
};
class Daugther : public Mother 
{
	public :
		void Display()
		{
			cout << "DAUGTHER." << endl;	
		}	
};

int main()
{
	Daugther d;
	d.Daugther::Display();
	d.Mother::Display();
}
