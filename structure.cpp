#include <iostream>
using namespace std;
struct person
{
	string first_name;
	string second_name;
	int AdmNo;
	char Gender;
};
int main()
{
	person student;
	student.first_name="Gideon";
	student.second_name="wahome";
	student.AdmNo=37840;
	student.Gender='M';
	cout<<"My First Name is:"<<student.first_name<<endl;;
}
