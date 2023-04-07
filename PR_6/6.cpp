#include<iostream>
using namespace std;

class distances
{
	private :
		int feet;
		int inch;
	public :
		void setdata()
		{
			cout << "Enter Feet : ";
			cin >> feet;
			cout << "Enter Inch : ";
			cin >> inch;
		}
		distances operator+(distances d)
		{
			distances a;
			a.feet= feet + d.feet;
			a.inch= inch + d.inch;
			while(a.inch >= 12)
			{
				a.inch-=12;
				a.feet++;
			}
			return a;
		}
		void getdata()
		{
			cout<<endl<<"The Total Distance is :- "<< feet <<" Feet "<< inch <<" Inch";
		}
};

int main()
{
	distances d1,d2,d3;
	d1.setdata();
	d2.setdata();
	d3=d2+d1;
	d3.getdata();
}
