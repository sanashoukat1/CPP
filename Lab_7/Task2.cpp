#include<iostream>
using namespace std;
int main()
{
    int sum=0,num;
    num=0;
    while(num>=0){
        sum=sum+num;
        cout<<"Enter a number"<<endl;
        cin>>num;
    }
    cout<<"Sum is "<<sum;
    return 0;
}