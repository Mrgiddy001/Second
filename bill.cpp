#include <iostream>
using namespace std;
struct person
{
	char name[50];
	char Gender[6];
	int age;
	double salary;
};
int main()
{
	person bill=
	{
		"bill",
		"male",
		16,
		1600.54,
	};
	cout<<bill.name<<endl;
	cout<<bill.Gender<<endl;
	cout<<bill.age<<endl;
	cout<<bill.salary<<endl;
}
