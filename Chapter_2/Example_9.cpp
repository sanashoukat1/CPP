#include <iostream>
#include <string>
using namespace std;
int main()
{
int count, temp;
double length, width, area;
char ch;
string name;

count = 1;
count = count + 1;
cout<<"Enter the value of length and width"<<endl;
cin>>length>>width;
area = length * width;
cout<<"Enter name"<<endl;
cin>>name;
length = length +2;
width = 2 * length- 5 * width;
area = length * width;
cin>> ch;
temp = count + static_cast<int>(ch);
}