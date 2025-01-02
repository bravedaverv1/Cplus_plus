#include <iostream>
#include <cstdlib>
// ? <cstdlib> , what is it?
// it includes another file from the standard library. 
// it this case, we want rand()
#include <ctime>
// ? <ctime> , what is it?
// this file gives us a function called time.
// it returns the current time.

using namespace std;

int main() {
    int number = rand();
    cout << number << endl;
    // ! random BUTTTT every time the program is ran, 
    // we get the same number
    // Not unless you implement srand
    srand(5);
    number = rand();
    cout << number << endl;
    // srand allows us to display a different number, but still
    // it will be the same number every time this program is ran. 
    // that is bc rand runs on kind of math.

    long elepasedSeconds = time(nullptr);
    srand(elepasedSeconds);
    number = rand() % 10;
    cout << number << endl;
    // a function of the ctime file that returns the current time,
    // in terms of number of seconds elapsed from Jan 1, 1970.
    // to call this arg, you must give it special arg called
    // ? nullptr , what is it?
    // for rn,  we know it helps trigger us a different value 
    // each time its ran by getting the current second since 
    // Jan 1, 1970
    // * applying it the way we have allows for a random number
    // to be assigned.
    // ? what if you need a smaller number? 
    // you can do like in the above where we apply the 
    // remainder symbol to have the number give its remainder 
    // by 10.

    // * BONUS FEATURE
    // you can actually just pass it in to srand instead of
    // having to store it into a variable
    // FROM:
    // long elepasedSeconds = time(nullptr);
    // srand(elepasedSeconds);
    // TO:
    srand(time(nullptr));
    number = rand() % 10;
    cout << number << endl;
    return 0;
}