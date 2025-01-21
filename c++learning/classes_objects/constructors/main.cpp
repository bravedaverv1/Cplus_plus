#include <iostream>
#include "song.hpp" 

// ? constructor , what is it? 
// a special kind of method that lets you decide how the 
// objects of a class get created.
// It has the same name as the class and no return type.
// Constructors really shine when you want to instantiate an 
// object with specific attributes.

// steps:
// 1. Declare the constructor in song.hpp
// 2. Define the constructor in song.cpp
// 3. Create the object through the constructor in main.cpp 
// within the main function.

int main(){
    // No need to create functions anymore to add values 
    // to attributes. We can now add values via the line below 
    // instead of creating functions to do so. 
    Song back_to_black("Back to Black", "Amy Winehouse");

    std::cout 
        << back_to_black.get_title() 
        << " by " 
        << back_to_black.get_artist()
        << std::endl;
}