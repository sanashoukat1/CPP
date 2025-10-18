#include <iostream>
using namespace std;

int main() 
{
    double poundsPerBag;
    int bagsNeeded;
    cout << "Enter the amount of rice (in pounds) a bag can hold: ";
    cin >> poundsPerBag;
    bagsNeeded = 2205 / poundsPerBag;
    cout << "Number of bags needed = " << bagsNeeded << endl;
    return 0;
}
