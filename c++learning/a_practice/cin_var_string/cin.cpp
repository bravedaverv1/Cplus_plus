#include <iostream>

using namespace std;

int main()
{
    double earth_lbs;
    double mars_lbs;

    cout << "Enter the weight in Earth Pounds to convert to Mars Pounds:";
    cin >> earth_lbs;

    mars_lbs = earth_lbs * 0.38;
    cout << "Your " << earth_lbs << " Earth Pounds converts to " << mars_lbs << " Pounds in Mars." << endl;
}