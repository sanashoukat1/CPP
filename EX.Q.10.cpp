#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    float num1, num2, num3, num4, num5;
    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    float sum = num1 + num2 + num3 + num4 + num5;
    int roundedSum = round(sum);
    cout << "The sum of the numbers rounded to the nearest integer is: " << roundedSum << endl;
    return 0;
}
