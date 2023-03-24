// 4. WAP to check if a given character is vowel or consonant.

#include<iostream>
using namespace std;

int main()
{
	char a;
	
	cout<<"Enter a :";
	cin>>a;
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		cout<<"Vowel";
	} 
	else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"Vowel";
	}
	else
	{
		cout<<"Consonant";
	}
}
