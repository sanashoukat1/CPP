#include <iostream>
#include <cmath>
#include <string>
using namespace std; 
const double PI = 3.1416; 
int main() 
{ 
    double sphereRadius,sphereVolume,point1X, pointlY,point2X, point2Y,distance; 
    string str; 
    cout << " Enter the radius of the sphere: ";
    cin >> sphereRadius;
    cout << endl; 
    sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3); 
    cout << " The volume of the sphere is: "<< sphereVolume<< endl; 
    cout << " Enter the coordinates of two points in the X-Y plane: ";

    cin >> point1X >> pointlY >> point2X >> point2Y;
    cout << endl;

    distance = sqrt(pow(point2X - point1X, 2)+ pow (point2Y - pointlY, 2));
    cout << "The distance between the points "
    << " (" << point1X << ", " << pointlY << ") and"
    << " (" << point2X << ", " << point2Y << ") is: "
    << distance << endl << endl; 
    str = "Programming with C++"; 
    cout << " The number of characters, including blanks, in \n \"" << str<< "\" is: " << str.length() << endl;
    return 0;
}
