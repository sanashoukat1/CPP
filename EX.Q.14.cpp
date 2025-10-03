#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    float hardDriveSize;
    cout << "Enter the size of the hard drive specified by the manufacturer (in GB): ";
    cin >> hardDriveSize;
    float actualStorage = floor(hardDriveSize * 1000 / 1024);
    cout << "The actual storage capacity of the hard drive is: " << actualStorage << " GB" << endl;
    return 0;
}
