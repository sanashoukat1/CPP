//print table
#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter a number whose table you wants to print."<<endl;
    cin>>n;
    for(c=1;c<=10;c++)
       cout<<n<<" * "<<c<<" = "<<n*c<<endl;
    return 0;
}