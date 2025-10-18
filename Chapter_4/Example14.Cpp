// Calculates airline suitcase charges based on dimension and weight.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double caseDimension, caseWeight, additionalCharges;
    additionalCharges = 0.0;
    cout << fixed << showpoint << setprecision(2);
    cout <<"Enter suitcase dimensions (length + width + depth) in inches: ";
    cin >>caseDimension;
    cout <<"Enter suitcase weight in pounds: ";
    cin >> caseWeight;
    if (caseDimension>108 || caseWeight>50) additionalCharges = 50.00;
    cout << "Additional suitcase charges: $" << additionalCharges << endl;
    return 0;
}