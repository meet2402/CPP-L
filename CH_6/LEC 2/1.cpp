#include<iostream>
using  namespace std;

class RBI
{
	protected :
		float rate;
	public :
		void getROI()
		{
			cout<<"RBI Rate  : "<<rate<<"%"<<endl;
		}
};
class SBI : public RBI
{	
	public :
		SBI()
		{
			cout<<"Enter rate of SBI : ";
			cin>>rate;
		}
};
class BOB : public RBI
{	
	public :
		BOB()
		{
			cout<<"Enter rate of BOB : ";
			cin>>rate;
		}
};
class ICICI : public RBI
{
	public :
		ICICI()
		{
			cout<<"Enter rate of ICICI : ";
			cin>>rate;
			cout<<"---------------------------------"<<endl;
		}
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.getROI();
	b.getROI();
	i.getROI();
	
}
