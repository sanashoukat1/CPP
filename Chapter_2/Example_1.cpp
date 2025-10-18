#include<iostream>
using namespace std;
int main()
{
    double len,width,area,peri;
    cout<<"Program to compute and output the area and perimeter of rectangle"<<endl;
    len=6.0;
    width=4.0;
    area=len*width;
    peri=(len+width)*2;
    cout<<"Length= "<<len<<endl;
    cout<<"Width= "<<width<<endl;
    cout<<"Area= "<<area<<endl;
    cout<<"Perimeter= "<<peri;
    return 0;


}