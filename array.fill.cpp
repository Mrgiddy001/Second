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
	cout<<Alice.Name<<endl<<Alice.Age<<endl;
	
	person Sarah=
	{
		"Sarah Abraham",
		90,
	};
	cout<<Sarah.Name<<endl<<Sarah.Age<<endl;
	
	person Abraham=
	{
		"Abraham Sarah",
		99,
	};
	cout<<Abraham.Name<<endl<<Abraham.Age<<endl;
	
	person Abram=
	{
		"Abram Sarai",
		100,
	};
	cout<Alice.Name<<" is "<<Alice.Age<<" years old.";
	cout<Sarah.Name<<" is "<<Sarah.Age<<" years old.";
	cout<Abraham.Name<<" is "<<Abraham.Age<<" years old.";
	cout<Abram.Name<<" is "<<Abram.Age<<" years old.";
}
