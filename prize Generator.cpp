//Random prize generater
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int Random = (rand()%3)+1;
    switch(Random) {
    case 1:
        cout<<"You got yourself a Plate!\n";
        break;
    case 2:
        cout<<"You got yourself a Cup!\n";
        break;
    case 3:
        cout<<"You got yourself a Spoon!\n";
        break;
    }
    return 0;
}
