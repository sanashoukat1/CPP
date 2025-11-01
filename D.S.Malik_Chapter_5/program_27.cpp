#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const float PI=3.1415;
int main()
{
    float r,x;
    cout<<"Enter the radius of circular waxed paper: ";
    cin>>r;
    //Formula: x=2(PI)r(1-sqrt(2/3))
    x=2*PI*r*(1-sqrt(2.0/3.0));
    cout<<fixed<<setprecision(2);
    cout<<"Length of removed sector is: "<< x;
    return 0;
}