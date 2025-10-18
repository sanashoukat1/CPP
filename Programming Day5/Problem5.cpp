#include <iostream>
using namespace std;
int main()
{
    char code;
    double mint, day, night;
    double amountDue = 0;
    cout <<"Enter service code (For Regular r/R, For Premium p/P): ";
    cin >> code;
    if (code=='r' || code=='R')
    {
        cout <<"Enter total minutes used: ";
        cin >>mint;
        amountDue =10.0;
        if (mint>50)
            amountDue += (mint-50)*0.20;
        cout <<"Service type: Regular"<<endl;
        cout <<"Amount due: $" <<amountDue;
    } 
    else if (code=='p' || code=='P')
    {
        cout <<"Enter minutes used in day: ";
        cin >>day;
        cout <<"Enter minutes used in night: ";
        cin >>night;
        amountDue =25.0;
        if (day>75)
            amountDue+= (day-75)*0.10;
        if (night>100)
            amountDue += (night-100)*0.05;
        cout <<"Service type: Premium"<<endl;
        cout <<"Amount due: $"<<amountDue;
    }
    else
    {
        cout <<"Error: Invalid service code.";
    }
    return 0;
}