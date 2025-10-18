#include<iostream>
using namespace std;
int main()
{   
    char ch;
    cout<<"Enter your choise(Y/N)"<<endl;
    cin>>ch;
    while(ch!='N'){
    cout<<"I am happy."<<endl;
    cout<<"Enter your choice(Y/N)"<<endl;
    cin>>ch;
    }
    return 0;
}