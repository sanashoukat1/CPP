#include <iostream>
using namespace std;
int main() 
{
    int age, priceWM, priceToy;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> priceWM;
    cout << "Enter price of each toy: ";
    cin >> priceToy;
    double moneySaved = 0;
    int toys = 0, giftMoney = 10;
    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            moneySaved += giftMoney - 1;
            giftMoney += 10;
        } else {
            toys++;
        }
    }
    moneySaved += toys * priceToy;
    if (moneySaved >= priceWM)
        cout << "Yes! " << moneySaved - priceWM << endl;
    else
        cout << "No! " << priceWM - moneySaved << endl;
    return 0;
}