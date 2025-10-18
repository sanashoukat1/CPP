#include <iostream>
using namespace std;
int main() 
{
    float tankCapacity, milesPerGallon;
    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tankCapacity;
    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;
    float miles = tankCapacity * milesPerGallon;
    cout << "The automobile can be driven for " << miles << " miles without refueling." << endl;
    return 0;
}
