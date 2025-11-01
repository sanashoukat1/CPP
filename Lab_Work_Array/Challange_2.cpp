#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int smallest;
    for(int i=0;i<10; i++){
        cout<<"enter number"<<endl;
        cin>>array[i];
    }
    smallest=array[0];
    for(int j = 1; j<10 ;j++)
        if(array[j]<smallest)
            smallest=array[j];
    cout<<"smallest value= "<<smallest;
    return 0;
}
