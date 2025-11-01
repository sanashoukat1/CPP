#include<iostream>
using namespace std;
int main()
{
    int array[10],n,i;
    int flag=0;
    for(i=0;i<10;i++)
    {
        cout<<"Enter values"<<endl;
        cin>>array[i];
    }
    cout<<"Enter a value you want to find"<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(array[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<n<<" value found"<<endl;
    else
         cout<<n<<" value not found"<<endl;
    return 0;
}