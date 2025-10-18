#include <iostream>
using namespace std;
int main()
{
    string month;
    int nights;
    double studioDis, apart_Dis, studio, apartment;
    cout <<"Enter month: ";
    cin >>month;
    cout <<"Enter number of stays: ";
    cin >>nights;
    if(month=="May" || month=="October")
    {
        studio = nights*50;
        apartment = nights*65;
        if (nights>7 && nights<14)
        {
            studioDis = studio *5.0/100;
            studio = studio - studioDis;
        }
        else if(nights>14)
        {
            studioDis = studio *30.0/100;
            studio = studio - studioDis;
        }
    } 
    else if(month=="June" || month=="September")
    {
        studio = nights * 75.20;
        apartment = nights * 68.70;
        if(nights>14)
        {
            studioDis = studio *20.0/100;
            studio = studio - studioDis;
        }
    } 
    else if(month=="July" || month=="August") {
        studio = nights * 76;
        apartment = nights * 77;
    }
    if (nights > 14)
    {    apart_Dis = apartment * 0.10;
        apartment = apartment - apart_Dis;
    }
    cout <<"Apartment: "<<apartment<<"$."<< endl;
    cout <<"Studio: "<<studio<<"$.";
    return 0;
}