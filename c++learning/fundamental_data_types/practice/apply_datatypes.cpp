#include <iostream> 

using namespace std;

int main() {
    double price = 99.99;
    float interest_rate = 3.67f;
    // * FLOAT
    // when working with Float, the decminal numbers must have the letter F
    // in the end or else it will attempt to store a DOUBLE in a FLOAT
    // and that can cause issues

    long file_size = 90000L;
    // * LONG , 
    // to have it treated as LONG you must apply a capital or lower case L.
    // best practice is capital since lowercase can look like a 1. Without the L/l,
    // it will treat the number as an integer

    char letter = 'a';
    // * CHAR ,
    // you apply a single quote to represent a char

    bool is_valid = true;
    // * BOOL
    // used a simple as above. 

    // * AUTO
    // BOOL & CHAR are INTERCHANGABLE W/ AUTO.
    // auto keyword will know if it is a bool or a char.
    // ! what it wont know however
    // is how to read numbers if you remember their letter at the end. 
    // without them, auto will assume they're all integers.
    // * auto keyword is mostly used at more complicated tasks
    return 0;
}