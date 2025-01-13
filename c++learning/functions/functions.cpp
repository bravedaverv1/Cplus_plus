#include <iostream>

// ? Functions , what are they?
// you will find yourself reusing the same blocks of code over 
// and over throughout your program. In times like these, 
// you can turn to functions.
// * Also known as a method or procedure, 
// a function is a named group of code statements that accomplish 
// something together, a bit like a factory machine.

// ? why functions ?
// A single line can make all that code fire off instead of a whole bunch of lines.
// You can build DRY (Don’t Repeat Yourself) code, reusing the code you already wrote.
// Functions help make your code flexible and modular, meaning you can group your code more easily by task.

// * In fact, every C++ program has at least one function. Int is one example.
int main()
{
// the code belows works but this is where a function
// come in handy.
    // Conduct IT support
    std::string on_off_attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;

    // Check in with Jen
    std::cout << "Oh hi Jen!\n";

    // Conduct IT support again...
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;

    // Check in with Roy
    std::cout << "You stole the stress machine? But that's stealing!\n";

    // Conduct IT support yet again...zzzz...
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;
}