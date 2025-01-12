#include <iostream>

// ? Logic Errors, what are they?
// Once we have removed the compile-time,
// link-time errors, and run-time errors, the program runs successfully. 
// But sometimes, the program doesn’t do what we want it to do or no output is produced.
// These types of errors which provide incorrect output, 
// but appears to be error-free, are called logical errors. 
// These are one of the most common errors that happen to beginners and 
// lso usually the most difficult to find and eliminate.
// Logical errors solely depend on the logical thinking of the programmer. 
// Your job now is to figure out why the program didn’t do what you wanted it to do.

  // No compiler, link time, run time error
  // But the program is supposed to output steps from #1 - #10. 
  // The program is somehow starting from 0…

  // Find the logic error.

int main() {
  
  int steps = 10;
  
  for (int i = 0; i <= steps; i++) {
    // * i should start off at 1 instead of 0 in order to get numbers 1-10
    // from the above to the below:
    // for (int i = 1; i <= steps; i++) {
  
    std::cout << "Step #";
    std::cout << i << "\n";
    
  }
  
}