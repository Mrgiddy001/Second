#include <iostream>
using namespace std;

class Car
{
    public: 
    
    string color;
    string model;
};

int main()
{
    Car car1;
    car1.color = "Blue";
    car1.model = "toyota vitz";
    
    Car car2;
    car2.color = "Green";
    car2.model = "subaru";
    
    cout<<"Car1 is a "<<car1.color<<" "<<car1.model<<endl;
    cout<<"Car2 is a "<<car2.color<<" "<<car2.model<<endl;
}
