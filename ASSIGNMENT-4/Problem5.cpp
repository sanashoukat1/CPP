#include<iostream>
using namespace std;
int main()
{
    int holidays;
    const int totalDays = 365;
    const int normTime = 30000;
    const int playTimeWorkday = 63;
    const int playTimeHoliday = 127;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    int workingDays = totalDays - holidays;
    int totalPlayTime = (workingDays * playTimeWorkday) + (holidays * playTimeHoliday);

    if (totalPlayTime > normTime) {
        int difference = totalPlayTime - normTime;
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << "Tom will run away\n";
        cout << difference << " minutes more than norm\n";
        cout << "Or " << hours << " hours and " << minutes << " minutes more\n";
    } else {
        int difference = normTime - totalPlayTime;
        int hours = difference / 60;
        int minutes = difference % 60;
        cout << "Tom sleeps well\n";
        cout << difference << " minutes less than norm\n";
        cout << "Or " << hours << " hours and " << minutes << " minutes less\n";
    }

    return 0;
}
