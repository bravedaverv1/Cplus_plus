#include <iostream>

#include "coffee.hpp"

// ? what are default args?
// what if 9 times out of 10, you know you’ll use the same input value? 
// It would be really annoying to have to enter the same value over and over again
// * default arguments can be added to your function declarations as they are values assigned to 
// * parameters when the function is declared and defined
// refer to coffee.hpp line line 1
// ? what happens then if we don't pass any args for the one param with a default?
// no error. it will go to the default as long as the data types match.
// ? what if there are more than one param and not all have a default?
// ! ORDER MATTERS. with that, parameters with a default arg COME FIRST. 
// if it comes to needing to change the one after the other onlyy, the ones that come before must
// be included when called or else it may confuse the order and assume the second arg is for the first


int main() {
  
  // coffee black
  std::cout << make_coffee();
  
  // coffee with milk
  std::cout << make_coffee(true);
  
  // coffee with milk and sugar
  std::cout << make_coffee(true, true);
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}