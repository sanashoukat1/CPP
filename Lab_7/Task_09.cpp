#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    double money;
    int year;
    cout << "Enter inherited money: ";
    cin >> money;
    cout << "Enter year till he has to live: ";
    cin >> year;
    int age = 18;
    for (int y = 1800; y <= year; y++) {
        if (y % 2 == 0)
            money -= 12000;
        else
            money -= 12000 + 50 * age;
        age++;
    }
    cout << fixed << setprecision(2);
    if (money >= 0)
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    else
        cout << "No! He will need " << -money << " dollars to survive." << endl;
    return 0;
}