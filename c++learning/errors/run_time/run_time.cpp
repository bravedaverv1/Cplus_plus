#include <iostream>

// ? Run-time Errors , what are they?
// Errors which happen during program execution (run-time) after 
// successful compilation are called run-time errors. Run-time 
// errors occur when a program with no compile-time errors and 
// link-time errors asks the computer to do something that the 
// computer is unable to reliably do.

// It happens after we give the ./ execute command:
// ./a.out

// ? common run-time errors , what are they?
// 1. Division by zero also known as division error. 
// These types of error are hard to find as the compiler doesn’t 
// point to the line at which the error occurs.
// 2. Trying to open a file that doesn’t exist

// ! There is no way for the compiler to know about these kinds of errors when the program is compiled.

int main() {
  
  int width = 20;
  int length = 0; // this would've caused an error on the lesson bc we're dividing by 0 but i didnt get one.

  int ratio = width / length;
  
  std::cout << ratio << "\n";
  
}