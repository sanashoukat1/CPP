#include<iostream>
using namespace std;
int main()
{
    string temp,humidity;
    cout<<"Enter temperature(warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity(dry or humid): ";
    cin>>humidity;
    if(temp=="warm" && humidity=="dry")
    cout<<"Play tennis";
    else if(temp=="warm" && humidity=="humid")
    cout<<"Swim";
    else if(temp=="cold" && humidity=="dry")
    cout<<"Play basketball";
    else if(temp=="cold" && humidity=="humid")
    cout<<"Watch TV";
    return 0;

}