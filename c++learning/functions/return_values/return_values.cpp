#include <iostream>

// ignore the string, and function name, im just being silly.
// ? return values , what about them?
// * When functions have a return type other than void, 
// * the function has two new requirements:
// ! 1. There must be a value returned from the function.
// ! 2. The return value must be the same type as the function’s return type.


int the_call_of_the_return(){
    std::cout << "I'm calling, but i am the return" << std::endl;
    return 5;
}

// ? But where does the return value get returned to?
// It gets returned to the place where the function is called. 

int main(){
    // it couldve been here and that would be that. not displayed
    // in terminal or anything.

    // * HOWEVER it is up to us as developers to do more with it
    // as we desire.
    int storage = the_call_of_the_return();
    std::cout << storage << std::endl; 
    // in the example above we called the function as 
    // a value of the varaible storage.
    // both data types check out, therefore, 
    // if done properly, the return of the function
    // would be the new variables value. 
    // if we were to display storage in terminal, it would display
    // the return.
}