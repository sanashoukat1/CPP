#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    double totalMilkLiters, costPerLiter, profitPerCarton;
    const double cartonCapacity = 3.78; 
    cout << "Enter total amount of milk produced (in liters): ";
    cin >> totalMilkLiters;
    cout << "Enter cost of producing one liter of milk: ";
    cin >> costPerLiter;
    cout << "Enter profit on each carton of milk: ";
    cin >> profitPerCarton;
    int cartons = round(totalMilkLiters / cartonCapacity);
    double totalCost = totalMilkLiters * costPerLiter;
    double totalProfit = cartons * profitPerCarton;
    cout << "Number of cartons needed = " << cartons << endl;
    cout << "Total cost of production = $" << totalCost << endl;
    cout << "Total profit = $" << totalProfit << endl;
    return 0;
}
