#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a Radius to Get your Area:";
    double radius;
    cin >> radius;
    cout << "you entered " << radius << endl;
    double area = 3.14 * pow(radius,2);
    cout << "your area is" << area << endl;
    return 0;
}

// ask the user to enter a radius of a circle
// then print the area of a circle