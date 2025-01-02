#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number = 1000000;
    short another = number;
    // the above does what is called narrowing. 
    //  this occurs when you start a num w/ the datatype 
    // that can hold it is stored in a datatype that cannot making  it 
    // fit. it will give you another number.
    cout << another;
    return 0;
}