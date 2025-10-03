#include <iostream>
using namespace std;

int main() 
{
    double cost, sellingPrice, commission;
    cout << "Enter cost of the car: ";
    cin >> cost;
    cout << "Enter selling price of the car: ";
    cin >> sellingPrice;
    commission = 20 + (0.30 * sellingPrice);
    cout << "Commission = $" << commission << endl;
    cout << "Purchasing cost to dealer = $" << cost << endl;
    cout << "Selling price = $" << sellingPrice << endl;
    return 0;
}
