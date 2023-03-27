#include<iostream>
using namespace std;

class detail 
{
	public :
	int n,l,b,h;
	
	void input()
	{
		cout << "Enter no :";
		cin >> n;
		cout << "Enter l :";
		cin >> l;
		cout << "Enter b :";
		cin >> b;
		cout << "Enter h :";
		cin >> h;
	}
	void output()
	{
		cout << n << endl << l << endl << b << endl << h; 
	}
};

int main()
{
	detail d;
	d.input();
	d.output();
}
