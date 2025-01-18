#include <iostream>
#include "fns.hpp"

// ? #include "fns.hpp" , what this all about?
// If your program keeps growing, you may have to scroll through many 
// declarations before you see main(). That doesn’t seem like the best 
// way to do things. Plus you don’t want to keep declaring the same 
// functions over and over for different files — making changes would 
// be incredibly tiresome

// ? header file , what is it?
// Well, you can take those function declarations and move them all over to
// a header file, another file — usually with the same name as the file with 
// all of the function definitions — with the extension .hpp or .h.

// ? how do you bring everything from a header file into scope for another file
// As it turns out, with headers, you can just add #include "my_functions.hpp" 
// to the very top of main.cpp: // * #include "fns.hpp"      refernce line 2

int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  
}