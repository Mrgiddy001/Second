#include <iostream>
using namespace std;

double dep;
double Withdraw;
double deposit(double balance);
void showbalance(double balance);
double withdraw(double balance);

int main ()
{
    int choice = 0;
    double balance = 0;

    do {
        cout<<"\n\n\t\t\t*****************************************\n";
        cout<<"\t\t\tEnter the Choice (In Numbers).";
        cout<<"\n\t\t\t*****************************************\n";
        cout<<"\t\t\t1. Show balance.\n";
        cout<<"\t\t\t2. Deposit.\n";
        cout<<"\t\t\t3. Withdraw.\n";
        cout<<"\t\t\t4. Exit.\n\t\t\t";
        cin>>choice;
        switch (choice) {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance+=deposit(balance);
            break;
        case 3:
            balance-=withdraw(balance);
            break;
        case 4:
            cout<<"\n\t\t\tThenks for your Partnership.\n";
            break;
        default:
            cout<<"\n\t\t\tInvalid Entry!! Enter Number Between 1&4!!";
        }
    } while(choice !=4);
}

double deposit(double balance)
{
    cout<<"\n\t\t\tEnter Amount to Deposit(In Kshs)\n\t\t\t";
    cin>>dep;
    if (dep<=0) {
        cout<<"\n\t\t\tInvalid Amount!!\n\t\t\t";
    } else {
        cout<<"\n\t\t\tCurrent balance after Deposit\n\t\t\t "<<"Kshs "<<balance+dep;
    }
    return 0;
}
void showbalance(double balance)
{
    cout<<"\t\t\tCurrent Balance\n\t\t\t"<<"Kshs "<<balance;
}

double withdraw(double balance)
{
    cout<<"\n\t\t\tEnter the Amount to Withdraw(In Kshs)\n\t\t\t";
    cin>>Withdraw;
    if (Withdraw>balance+dep) {
        cout<<"\n\t\t\tInsufficient fund!!\n\t\t\t";
        return balance+dep;
    } else {
        cout<<"\n\t\t\tYou have Withdrawn: \n\t\t\t"<<Withdraw<<"\n\t\t\tCurrent balance after Withdrawal:\n\t\t\t"<<"Kshs "<<balance+dep-Withdraw;
    }
    return 0;
}
