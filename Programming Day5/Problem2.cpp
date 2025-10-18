#include<iostream>
using namespace std;
int main()
{
    string country;
    cout<<"Enter name of country in which you live in: ";
    cin>>country;
    if(country!="Germany" && country!="Australia")
    cout<<"You should come to visit these sometimes!";
    else
    cout<<"Stay in your country";
    return 0;
}