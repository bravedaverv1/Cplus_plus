#include <iostream>
#include "song.hpp"

// ? classes , what are they?
// classes can be thought of as a custom data type.
// A C++ class is a user-defined type.
// * The class serves as a blueprint for objects, 
// which are instances of the class (just like age is an instance of int). 
// An object gets characteristics and behaviors from its class.
// * We can create an empty C++ class in the header file.
int main(){
  // ? objects, how do we create(instantiate) an object? 
  // class name followed by object name
  Song electric_relaxation;
  // ? how can we access a classes method?
  // dot notation
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title() << std::endl;
}