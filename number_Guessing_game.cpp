//Number Guesing GAME
#include <iostream>
using namespace std;
int main()
{
    int guess;
    int trials;
    int num;
    srand (time(NULL));
    num = (rand()%100)+1;
    cout<<"@@@@@--Number Guessing Game--@@@@@\n";

    do {
        cout<<"\nEnter the Guess between (1-100)\n";
        cin>>guess;
        trials++;

        if (guess<num) {
            cout<<"Guess is too Low!\n";
        } else if (guess>num) {
            cout<<"Guess is too High!\n";
        } else {
            cout<<"Correct!! You Got it!!\nThe Number is "<<num<<" with a total of "<<trials<<" trials";
        }
    } while(guess!=num);
    {
        cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@";
    }
    return 0;
}
