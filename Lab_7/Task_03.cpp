//total digits
#include<iostream>
using namespace std;
int main()
{
    int num,digit,sum=0;
    cout<<"Enter a number."<<endl;
    cin>>num;
    if(num<0)
        num=-num;
    for(;num>0;num=num/10){
        digit=num%10;
        sum+=digit;
    }
    cout<<"Sum= "<<sum;
    return 0;
    
}