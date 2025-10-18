#include <iostream>
using namespace std;

int main() 
{
    double payRate, hoursWorked, totalIncome, afterTax, clothes, school, bonds, parentBonds;
    cout << "Enter pay rate per hour: ";
    cin >> payRate;
    cout << "Enter number of hours worked each week: ";
    cin >> hoursWorked;
    totalIncome = payRate * hoursWorked * 5;
    afterTax = totalIncome - (totalIncome * 0.14);
    clothes = afterTax * 0.10;
    school = afterTax * 0.01;
    double remaining = afterTax - (clothes + school);
    bonds = remaining * 0.25;
    parentBonds = bonds * 0.50;
    cout << "Income before and after taxes: $" << afterTax << endl;
    cout << "Money spent on clothes: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << school << endl;
    cout << "Money spent on savings bonds: $" << bonds << endl;
    cout << "Money parents spend on additional bonds: $" << parentBonds << endl;
    return 0;
}
