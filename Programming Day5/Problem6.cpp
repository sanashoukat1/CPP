#include <iostream>
#include <string>
using namespace std;
int main() {
    string fruit,day,weekend,weekday;
    double price, quantity,bill;
    cout<<"Enter fruit name";
    cin>>fruit;
    cout<<"Enter day of the week";
    cin>>day;
    cout<<"Enter quantity";
    weekday=(day=="MONDAY"||day=="TUESSAY"||day=="WEDNESDAY"||day=="THURSDAY"||day=="FRIDAY");
    weekend=(day=="SATURDAY"||day=="SUNDAY");
    if(!weekend && !weekday)
 {
    cout<<"ERROR"<<endl;
    return 0;
 }
    if (weekday) {
        if (fruit == "banana") price = 2.50;
        else if (fruit == "apple") price = 1.20;
        else if (fruit == "orange") price = 0.85;
        else if (fruit == "grapefruit") price = 1.45;
        else if (fruit == "kiwi") price = 2.70;
        else if (fruit == "pineapple") price = 5.50;
        else if (fruit == "grapes") price = 3.85;
        else {
            cout << "error" << endl;
            return 0;
        }
    }
    else if (weekend) {
        if (fruit == "banana") price = 2.70;
        else if (fruit == "apple") price = 1.25;
        else if (fruit == "orange") price = 0.90;
        else if (fruit == "grapefruit") price = 1.60;
        else if (fruit == "kiwi") price = 3.00;
        else if (fruit == "pineapple") price = 5.60;
        else if (fruit == "grapes") price = 4.20;
        else {
            cout << "error" << endl;
            return 0;
        }
    }
    cout<< quantity*price;
    return 0;
}