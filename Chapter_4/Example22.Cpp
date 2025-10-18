// Converts a letter grade to a grade point using a switch statement.
#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter a letter grade: ";
    cin >> grade;
    switch (grade)
    {
        case 'A': case 'a':
            cout <<"The grade point is 4.0.";
            break;
        case 'B': case 'b':
            cout <<"The grade point is 3.0.";
            break;
        case 'C': case 'c':
            cout <<"The grade point is 2.0.";
            break;
        case 'D': case 'd':
            cout <<"The grade point is 1.0.";
            break;
        case 'F': case 'f':
            cout <<"The grade point is 0.0.";
            break;
        default:
            cout <<"The grade is invalid.";
    }
    return 0;
}