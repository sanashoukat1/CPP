#include<iostream>
using namespace std;
int main()
{
    int i,num,a;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%4==0)
            cout<<i*10;
        else
            cout<<i;
        cout<<endl;
    }
    return 0;
}