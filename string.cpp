/*C++ string*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fn = "John ";
    string sn = "Mwangi";
    string full = fn.append(sn);
    cout<<full<<endl;
    cout<<full.length()<<endl;
    cout<<full[8];

    return 0;
}
