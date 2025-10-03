#include <iostream>
using namespace std;

int main() 
{
    int shares;
    double purchasePrice, sellingPrice, amountInvested, amountReceived, serviceCharge, totalGainLoss;
    cout << "Enter number of shares: ";
    cin >> shares;
    cout << "Enter purchase price per share: ";
    cin >> purchasePrice;
    cout << "Enter selling price per share: ";
    cin >> sellingPrice;
    amountInvested = shares * purchasePrice;
    amountReceived = shares * sellingPrice;
    double buyCharge = amountInvested * 0.015;
    double sellCharge = amountReceived * 0.015;
    serviceCharge = buyCharge + sellCharge;
    totalGainLoss = (amountReceived - sellCharge) - (amountInvested + buyCharge);
    cout << "Total amount invested = $" << amountInvested << endl;
    cout << "Total service charges = $" << serviceCharge << endl;
    cout << "Total amount received after selling = $" << amountReceived - sellCharge << endl;
    cout << "Total gain/loss = $" << totalGainLoss << endl;
    return 0;
}
