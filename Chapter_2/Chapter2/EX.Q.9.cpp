#include <iostream>
using namespace std;

int main()
{
    float testScore1, testScore2, testScore3, testScore4, testScore5;
    cout << "Enter five test scores: ";
    cin >> testScore1 >> testScore2 >> testScore3 >> testScore4 >> testScore5;
    float averageScore = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;
    cout << "The average test score is: " << averageScore << endl;
    return 0;
}
