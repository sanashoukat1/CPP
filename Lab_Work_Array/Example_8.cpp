#include<iostream>
using namespace std;
int main()
{
    int numbers[5]={2,4,6,8,10};
    int sum=0;
    float average;
    cout<<"The numbers are: ";
    for(int i=0;i<5;i++)
      {  cout<<numbers[i]<<" ";
         sum=sum+numbers[i];
}
    cout<<"\n Sum = "<<sum<<endl;
    average=sum/5.0;
    cout<<"Average = "<<average<<endl;
    return 0;
}