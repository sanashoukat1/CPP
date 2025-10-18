#include <iostream>
using namespace std;

int main() 
{
    int quarters, dimes, nickels, total;
    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of nickels: ";
    cin >> nickels;
    total = (quarters * 25) + (dimes * 10) + (nickels * 5);
    cout << "Total value in pennies = " << total << " cents" << endl;
    return 0;
}
