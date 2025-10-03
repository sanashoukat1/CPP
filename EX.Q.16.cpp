#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    double totalMilkLiters;
    const double cartonCapacity = 3.78;   
    const double costPerLiter = 0.38;     
    const double profitPerCarton = 0.27;  
    cout << "Enter total amount of milk produced (in liters): ";
    cin >> totalMilkLiters;
    int cartons = round(totalMilkLiters / cartonCapacity);
    double totalCost = totalMilkLiters * costPerLiter;
    double totalProfit = cartons * profitPerCarton;
    cout << "Number of cartons needed = " << cartons << endl;
    cout << "Total cost of production = $" << totalCost << endl;
    cout << "Total profit = $" << totalProfit << endl;
    return 0;
}
