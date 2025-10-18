#include <iostream>
using namespace std;
int main()
{
    int h,x,y;
    cin>>h>>x>>y;
    if((x==0 && y>=0 && y<=h) || (x==3*h && y>=0 && y<=h) || (y==0 && x>=0 && x<=3*h) || (y==h && x>=0 && x<=3*h) || (x==h && y>=0 && y<=4*h) || (x==2*h && y>=0 && y<=4*h) || (y==4*h && x>=h && x<=2*h))
        cout<<"Border";
    else if((x>0 && x<3*h && y>0 && y<h) || (x>h && x<2*h && y>0 && y<4*h))
        cout<<"Inside";
    else
        cout<<"Outside";
    return 0;
}