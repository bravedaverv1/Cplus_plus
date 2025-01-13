#include <iostream>
#include <cstdlib>
// a library that contains the rand() built in function

// ? Built-in Functions , what are they??
// C++ comes chock-full of functions that are already 
// created as part of the standard library. But how do we 
// access this hidden hoard of helpful functions? We gain access 
// to various functions by including headers like <cmath> or <string>.

// simply put, they are just like functions but unlike the functions
// we write ourselves to fufill what we must, these functions are already there
// to fulfill something. they're built - in, in other words, existing functions
// part of c++ there ready to complete specific tasks by being called on.

int main()
{

    // This seeds the random number generator:
    srand(time(NULL));

    // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 15;
    // * in the line above we use rand(), a built in function, 
    // to deliver and random number and get the remainder when 
    // divided by 15.

    std::cout << the_amazing_random_number << std::endl;
}