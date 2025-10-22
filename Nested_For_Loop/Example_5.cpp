#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=10;i>=0;i--)
       { if(i==5)
        continue;
        cout<<i;
        cout<<endl;
    }
}