#include <iostream>
using namespace std;
struct person
{
	char Name [50];
	int  Age;	
};
int main ()
{
	person Alice=
	{
		"Alice Kimani",
		21,
	};
	
	person Sarah=
	{
		"Sarah Abraham",
		90,
	};
	
	person Abraham=
	{
		"Abraham Sarah",
		99,
	};
	
	person Abram=
	{
		"Abram Sarai",
		100,
	};
	cout<<Alice.Name<<" is "<<Alice.Age<<" years old."<<endl;
	cout<<Sarah.Name<<" is "<<Sarah.Age<<" years old."<<endl;
	cout<<Abraham.Name<<" is "<<Abraham.Age<<" years old."<<endl;
	cout<<Abram.Name<<" is "<<Abram.Age<<" years old."<<endl;
}
