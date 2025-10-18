#include<iostream>
using namespace std;
int main()
{
    float n1,n2,n3,price,discount;
    cout<<"Enter no. of red roses,white roses and tulps:"<<endl;
    cin>>n1>>n2>>n3;
    price=(n1*2.00)+(n2*4.10)+(n3*2.50);
    cout<<"Original price= "<<price<<endl;

    if(price>200)
    discount=price*(20.0/100.0);
    price=price-discount;
    cout<<"Discounted amount= "<<price;
    return 0;
}