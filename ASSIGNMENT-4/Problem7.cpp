#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    string figure;
    cin >> figure;

    if (figure == "Square" || figure == "square") {
        float side;
        cin >> side;
        cout << side * side;
    }
    else if (figure == "Rectangle" || figure == "rectangle") {
        float length, width;
        cin >> length >> width;
        cout << length * width;
    }
    else if (figure == "Circle" || figure == "circle") {
        float radius;
        cin >> radius;
        cout << M_PI * radius * radius;
    }
    else if (figure == "Triangle" || figure == "triangle") {
        float base, height;
        cin >> base >> height;
        cout << 0.5 * base * height;
    }
    else {
        cout << "Invalid figure name";
    }

    return 0;
}
