#include <iostream>
using namespace std;
struct car
{
	string car_name;
	string car_model;
	int year;
};
int main()
{
	car car;
	car.car_name="BMW";
	car.car_model="X1";
	car.year=2017;	
	cout<<"Car Details: \n"<<car.car_name<<"\n"<<car.car_model<<"\n"<<car.year;
}
