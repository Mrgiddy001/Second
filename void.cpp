//use defined functions
#include <iostream>
using namespace std;
void hi(string name);
int main()
{
    string name = "freddy";
  hi(name);
    return 0;
}
void hi(string name){
    cout<<"hello there "<<name;
}
