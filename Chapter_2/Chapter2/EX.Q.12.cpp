#include <iostream>
using namespace std;
int main()
{
    int totalSeconds;
    cout << "Enter the elapsed time in seconds: ";
    cin >> totalSeconds;
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
    cout << "Elapsed time is " << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
