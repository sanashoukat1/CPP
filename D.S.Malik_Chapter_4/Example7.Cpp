// Weekly wages calculator with overtime pay.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double wages, rate, hrs;
    cout << fixed<< showpoint << setprecision(2);
    cout << "Enter working hours and rate: ";
    cin >> hrs >>rate;
    if (hrs>40.0)
        wages =40.0*rate+1.5*rate*(hrs - 40.0);
    else
        wages = hrs * rate;
    cout << endl;
    cout << "The wages are $"<<wages;
    return 0;
}