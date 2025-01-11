#include <iostream>

// ? Compiler and Errors , how are they related?
// the compiler is our first line of defense against 
// * There are 2 types of compile-time errors:
// * Syntax errors: Errors that occur when we violate 
// ? common syntax errors , what are they?
// Missing semicolon ;
// Missing closing parenthesis ), square bracket ], or curly brace }
// the rules of C++ syntax.
// * Type errors: Errors that occur when there are mismatch 
// between the types we declared.
// ? common type errors , what are they?
// Forgetting to declare a variable
// Storing a value into the wrong type


int main() {

    char answer;
    int score = 0;

    std::cout << "Who Wants To Be a Millionaire\n\n"
    // * the compiler would catch that you are missing ";" at the end of this line.

    std::cout << "Question 1)\n\n";

    std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";

    std::cout << "A. Fresca   B. V8  \n";
    std::cout << "C. Yoo-hoo  D. A&W \n\n";

    std::cout << "Enter your answer: ";
    std::cin >> answer;

    if (answer == 'A' || answer == 'a') {
    
    score = score + 100;
    std::cout << "Correct!\n";
    
}

}