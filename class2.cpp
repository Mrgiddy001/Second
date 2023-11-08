#include <iostream>
using namespace std;

class car
{
    public:
        string model;
        int modelnum;
};

int main()
{
    car car1;
    car1.model="toyota" ;
    car1.modelnum =  1321;
    
    car car2;
    car2.model = "subaru";
    car2.modelnum = 46546;
    
    cout<<"Car 1 model is "<<car1.model<<" and its number is "<<car1.modelnum<<"\n";
    cout<<"Car 2 model is "<<car2.model<<" and its number is "<<car2.modelnum<<"\n";
}
