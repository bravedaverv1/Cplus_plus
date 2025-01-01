#include <iostream>

using namespace std;

int main() {
    cout << "Enter the temperature in Fahrenheit:";
    double temp;
    cin >> temp;
    cout << "the entered temp is " << temp << endl;
    double c = (temp - 32)* 5/9;
    cout << temp << " converted to Celsius is " << c << "Celcious" << endl;
    return 0;
}