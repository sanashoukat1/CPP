#include<iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"Enter speed of car: ";
    if(speed<=10)
    cout<<"Speed is slow";
    if(speed>10 && speed<=50)
    cout<<"Speed is average";
    if(speed>50 && speed<=150)
    cout<<"Speed is fast";
    if (speed>150 && speed<=1000)
    cout<<"Speed is ultra fast";
    return 0;

}