#include<iostream>
using namespace std;
int main()
{
    int num1,num2,remainder,a,b,LCM;
   
    cout<<"Enter the first number. ";
    cin>>num1;
    cout<<"Enter the scond number. ";
    cin>>num2;
    a=num1;
    b=num2;
    while (num2 != 0) {
        remainder = num1 % num2; 
        num1 = num2;                
        num2 = remainder;        
    }
    cout<<"GCD/HCF of two numbers= "<<num1<<endl;
    LCM=(a*b)/num1;
    cout<<"LCM= "<<LCM;
    return 0;
}