#include<iostream>
using namespace std;
int main()
{
    float temp1,temp2,diff;
    cout<<"Enter temperature of 1st city: ";
    cin>>temp1;
    cout<<"Enter temperature of 2nd city: ";
    cin>>temp2;
    if((temp1-temp2)>10 || (temp2-temp1)>10)
    cout<<"Difference is too big.";
    else
    cout<<"Not big difference.";
    return 0;
}