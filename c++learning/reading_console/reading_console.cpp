#include <iostream>

using namespace std;

int main() {
    cout << "Enter a value: ";
    int value;
    // * if the user might enter decimals, have it be a double 
    // instread of int
    cin >> value; 
    // ? cin , what is it?
    // allows us to read data in the console.
    // we collect (>>) the data. 
    // unlike cout it displays characters (<<)
    // cin itself create the space to enter and collect.
    // ! It must immediately be stored somewhwere in order for it 
    // to work. cin itself is not something to can refer to print.

    // ? >> , what is it?
    // the stream extraction operator.
    cout << "You entered the number " << value << "." << endl;

    // * Multiple Values
    // you identify a value and data type for each. 
    cout << "Enter values for x and y:";
    double x;
    double y;
    // cin >> x;
    // cin >> y;
    cin >> x >> y;
    // here shows chaining can be applied in this area too.
    cout    << "you entered " << x << " for x" << endl
            << "and " << y << " for y." << endl; 

    return 0;
}