#include<iostream>
using namespace std;
int main()
{
    float speed;
    cout<<"Enter speed of the car(in km/h): ";
    cin>>speed;
    if(speed<=100)
    cout<<"Perfect! you are doing good.";
    if(speed>100)
    cout<<"You will be challaned.";
    return 0;
}