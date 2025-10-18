#include<iostream>
using namespace std;
int main()
{
    string c_name;
    float ticket,discount;
    cout<<"Enter name of country: ";
    cin>>c_name;
    cout<<"Enter price of ticket(in dollars): ";
    cin>>ticket;
    if(c_name=="Ireland")
    discount=ticket*(10.0/100.0);
    else
    discount=ticket*(5.0/100.0);
    ticket=ticket-discount;
    cout<<"Total price of ticket= "<<ticket;
    return 0;
}