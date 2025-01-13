#include <iostream>

// ? function return types , what if we knew a guy that knew a guy
// ? that wanted its fucntion to return something?
// C++ has you covered. Just like there are many variable types, 
// there are many different return types for functions. A function can return most 
// data types we’ve covered, including double, int, bool, char, 
// std::string, and std::vector.


// Change needs_it_support so that it returns support:
// ? how do we apply other data types than void?
bool needs_it_support()
// just like void, right before the function  name.
{

    bool support;

    std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
    std::cin >> support;
    // ? how do we return ?
    return support;
    // in this case we used the variable but really it can
    // be outputs in general of your code the can be returned
    // to the rest of your code
}

int main()
{
    // ? how can we display a return in the terminal?
    // Change the following line to print the function result:
    std::cout << needs_it_support();
}