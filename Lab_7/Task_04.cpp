#include<iostream>
using namespace std;
int main()
{
    int number,digit,l_digit,count=0;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the digit whose frequency you want to check: ";
    cin>>digit;
    if(number<0)
        number=-number;
    if(number==0)
        cout<<"1 digit";
    for(;number>0;number=number/10){
        l_digit=number%10;
            if(l_digit==digit)
                count++;
    }
    cout<<"Frequency: "<<count;
    return 0;
}