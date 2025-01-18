#include <iostream>

#include "num_ops.hpp"

// ? function overloading , what is it?
// function overloading covers cases in which you might want an arg
// to accept an int or a double. even in times where you would want a param to
// be optional. C++ has a trick up its sleeve just for such situations.
// * using function overloading, you can give multiple c++ functions the same name, 
// * and just make sure at least one of the below is true: 
    // 1. Each has different type parameters.
    // 2. Each has a different number of parameters.
// * Overloading enables you to change the way a function behaves depending on what is passed in as an argument.

// examples: 
// void print_cat_ears(char let) {
//   std::cout << " " << let << "   " << let << " " << "\n";
//   std::cout << let << let << let << " " << let << let << let << "\n";
// }

// void print_cat_ears(int num) {
//   std::cout << " " << num << "   " << num << " " << "\n";
//   std::cout << num << num << num << " " << num << num << num << "\n";
// }

// Given the above functions, you could call the functions like so and C++ will know what to do:
// print_cat_ears('A');
// output:
//  A   A 
// AAA AAA 
// print_cat_ears(4);
// output:
//  4   4
// 444 444

int main() {

  std::cout << fancy_number(12, 3) << "\n";
  std::cout << fancy_number(12, 3, 19) << "\n";
  std::cout << fancy_number(13.5, 3.8) << "\n";
  
}