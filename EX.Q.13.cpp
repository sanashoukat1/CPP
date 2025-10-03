#include <iostream>
using namespace std;
int main()
{
    float originalPrice, markupPercentage, salesTaxRate;
    cout << "Enter the original price of the item: ";
    cin >> originalPrice;
    cout << "Enter the percentage of the marked-up price: ";
    cin >> markupPercentage;
    cout << "Enter the sales tax rate (as a percentage): ";
    cin >> salesTaxRate;
    float markupAmount = (markupPercentage / 100) * originalPrice;
    float sellingPrice = originalPrice + markupAmount;
    float salesTax = (salesTaxRate / 100) * sellingPrice;
    float finalPrice = sellingPrice + salesTax;
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price: $" << finalPrice << endl;
    return 0;
}
