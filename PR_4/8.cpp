#include<iostream>
using namespace std;

class example
{
	private : 
	 	int id;
	 	string name;
	 	
	public :
		example(int id,string name)
		{
			this->id=id;
			this->name=name;
			cout << "Id\t: " << id << endl;
			cout << "Nmae\t: " << name << " \n "<< endl; 
		}
		void getdata()
		{
			cout << "Id\t: " << id << endl;
			cout << "Nmae\t: " << name << endl;
		}
};

int main()
{
	example e(101,"Meet");
	example e1=e;
	e1.getdata();	
}
