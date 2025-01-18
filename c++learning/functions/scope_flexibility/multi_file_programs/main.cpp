#include <iostream>                         // * Multi-File Programs
#include <cmath>

// ? multi-file programs , what is it?
// it’s common to use the same function in more than one .cpp file.
// * To make your code cleaner and more modular, you can move the function 
// definitions over to another specialized .cpp file (e.g., my_functions.cpp), leaving a 
// list of declarations above main().
// ? BUT , how does the main() program know about the function definitions with them being "out of scope"?
// Before your program even compiles, it links together any files you 
// list in your compilation statement into a single executable: // * g++ main.cpp my_functions.cpp

// Add declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}