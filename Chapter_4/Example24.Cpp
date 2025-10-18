// Checks legal age for various activities using nested switch statements.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << endl;
    switch (age >= 18)
    {
        case true:
            cout << "Old enough to be drafted." << endl;
            cout << "Old enough to vote." << endl;
        switch (age >= 21)
        {
            case true:
                cout << "Old enough to drink." << endl;
                break;
            case false:
                cout << "Not old enough to drink." << endl;
        }
            break;
        case false:
            cout << "Not old enough to be drafted." << endl;
            cout << "Not old enough to vote." << endl;
            cout << "Not old enough to drink." << endl;
    }
    return 0;
}