// Calculates the penalty on an unpaid credit card balance.
#include <iostream>
#include <iomanip>
using namespace std;
const double interest_rate = 0.015;
int main()
{
    double CardBalance, payment, balance, penalty;
    penalty = 0.0;
    cout << fixed<<showpoint<<setprecision(2);
    cout <<"Enter credit card balance: ";
    cin >>CardBalance;
    cout << endl;
    cout <<"Enter the payment: ";
    cin >>payment;
    cout << endl;
    balance = CardBalance-payment;
    if (balance > 0)
        penalty = balance * interest_rate;
    cout <<"The balance is: $" << balance << endl;
    cout <<"The penalty to be added to your next month bill is: $"<<penalty;
    return 0;
}