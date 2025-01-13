#include <iostream>

// ? void , what is it?
// it is added in the function declaration before the function name.
// A void function, also known as a subroutine, 
// has no return value, making it ideally suited for situations 
// where you just want to print stuff to the terminal.

// Define oscar_wilde_quote() below:
// ! pt.1 functions go outside of the int function. 
// ? how to we apply void?
void oscar_wilde_quote()
// as said above, it is applied right before the function name
{
    std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
}

int main()
{
    // ! pt. 2 functions are called in the main function here.
    // Call your function here:
    oscar_wilde_quote();
}