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
			cout << "Id \t:- " << id << endl;
			cout << "Name \t:- " << name; 
		}
};

int main()
{
	example e(101,"Meet");
}
