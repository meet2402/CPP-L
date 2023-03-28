#include <iostream>
using namespace std;

class Garage
{
	public:
	  	Garage() 
		{
		    	try 
			{
		    		
		    	}
	 		catch (string s) 
			{
		    	  	throw s;
		    	}
		}
};

class Motor : public Garage
{
	string i="\t Your car's bettry is low.";
	public:
	  	Motor() 
	  	{
			throw  i;
	    		Garage();
	  	}
};

int main() 
{
	try
	{
  		Motor m;
	} 
	catch (string s)
	{
    		cout<<"Your Error is Detected..."<<endl<<s<<endl;
	}
}
