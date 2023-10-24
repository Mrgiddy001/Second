//Random Number generater
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int num1 = rand()%6+1;
    cout<<num1;
}
