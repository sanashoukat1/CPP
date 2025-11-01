#include <iostream> 
using namespace std;
int main () {
    int array [10];
    int n;
    for (int i=0;i<10;i++ )
{
    cout<<"Enter number"<<endl;
    cin>>array[i];
}
cout<<"enter scalar number"<<endl; 
cin>>n;
    for (int j=0;j<10;j++ ) {
    cout << array[j] << "\t" << n*array[j] << endl;
    }
    return 0;
}