#include <iostream>
using namespace std;

int main() 
{
    double M1, M2, d, F;
    const double k = 6.67e-8;
    cout << "Enter mass of first body (grams): ";
    cin >> M1;
    cout << "Enter mass of second body (grams): ";
    cin >> M2;
    cout << "Enter distance between bodies (cm): ";
    cin >> d;
    F = k * (M1 * M2) / (d * d);
    cout << "Force between bodies = " << F << " dynes" << endl;
    return 0;
}
