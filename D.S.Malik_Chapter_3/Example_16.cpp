#include <iostream>
using namespace std;
int main()
{
    int fahren;
    int cels;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahren;
    cout << endl;
    cels = 5 / 9 * (fahren - 32);
    cout << fahren << " Degree F = " << cels << " Degree C. " << endl;
    return 0;
}
