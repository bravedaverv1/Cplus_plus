#include <iostream>
// ? cmath , what is it?
// This file declares a bunch of useful mathmatical functions.
#include <cmath>

using namespace std;

int main(){
    // * example of a cmath function
    double result = floor(1.2);
    cout << result << endl;

    // * functions that take more than one arg

    double two_args = pow(2,3);
    // 2 to the power of 3.
    cout << two_args << endl;
    return 0;
}