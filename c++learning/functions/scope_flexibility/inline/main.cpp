#include <iostream>
#include <chrono>
// ? chrono , what is it?
// a library header called chrono that allows us to clock time in milliseconds

// ? inline functions , what is it?
// couple different meanings.
// An inline function is a function definition, usually in a header file, qualified by inline like this:
// refer to night.hpp line 1-4
// * Using inline advises the compiler to insert the function’s body where the function call is, 
// which sometimes helps with execution speed (and sometimes hinders execution speed)
// If it is used, it is recommend to test how it affects the execution speed of your program.
// ! The bottom line is inline is something you’ll probably encounter, but may never use.

// ! HOWEVER, another definition of inline functions which can be used more often is:
// * “inline functions” that are just member functios - (i.e. functions inside of classes) which have 
// been defined and declared in a single line in a header file because the function body is so short:
// ex: 
// cookie_functions.hpp
// eat() belongs to the Cookie class:
// void Cookie::eat() {std::cout << "nom nom\n";} 

#include "night.hpp"

int main() {
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
  
  std::cout << goodnight2("eraser", "ivy");
  
}