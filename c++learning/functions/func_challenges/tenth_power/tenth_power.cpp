#include <iostream>
#include <cmath>

// ? PROMPT ?
// Write a function named tenth_power() that has:
// An int parameter named num.
// The function should return num raised to the 10th power.

using namespace std;

// Define tenth_power() here:
int tenth_power(int num)
{
    return pow(num, 10);
}

int main()
{

    cout << tenth_power(0) << "\n";
    cout << tenth_power(1) << "\n";
    cout << tenth_power(2) << "\n";
}