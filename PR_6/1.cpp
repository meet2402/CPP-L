#include<iostream>
using namespace std;

class Message
{
	private :
		string msg;
	public :
		Message()
		{
			cout << "Enter Message :- ";
			cin >> msg;
		}
		void print()
		{
			cout << msg << endl;
		}
		void print(string n)
		{
			cout << msg  << " " << n << endl;
		}
};

int main()
{
	Message m;
	m.print();
	m.print("By..");
}
