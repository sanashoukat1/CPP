#include<iostream>
using namespace std;
int main()
{
    int array[10];
    
    for(int i=0;i<10;i++)
      {  cout<<"Enter number: "<<endl;
        cin>>array[i];
      }
    for(int i=9;i>=0;i--)
      {cout<<"Reciprocal of numbers: ";
      cout<<endl<<array[i];
    }
}