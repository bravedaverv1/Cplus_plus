#include <iostream>

// ? Link-time Errors , what are they?
// Sometimes the code compiles fine, but there is still a message because 
// the program needs some function or library that it can’t find. This is known as 
// a link-time error.
// As our program gets bigger, it is good practice to divide the program into separate 
// files. After compiling them, the linker takes those separate object files and combines them 
// into a single executable file. Link-time errors are found by the linker when 
// it is trying to combine object files into an executable file.

// ? common link-time errors: , what are they?
// 1. Using a function that was never defined (more on this later)
// 2. Writing Main() instead of main()

// ! this is an example of a link-time error.
int main() {
// ? common link-time errors: , what are they?
// 1. Using a function that was never defined (more on this later)
// 2. Writing Main() instead of main()

// the main function will trigger a link time error. why? 
// the error:
// link_time.cpp:34:1: warning: non-void function does not return a value [-Wreturn-type]
// }
// ^
// 1 warning generated.
// Undefined symbols for architecture arm64:
//   "_main", referenced from:
//       <initial-undefines>
// ld: symbol(s) not found for architecture arm64
// clang: error: linker command failed with exit code 1 (use -v to see invocation)

// * main is not referenced because it was 
// typed in with a capital M and c++ is case sensitive

  int num = 0;
  int sum = 0;

  std::cout << "Enter a number: ";
  std::cin >> num;

  for (int i = 1; i <= num; i++) {
    sum = sum + i;
    std::cout << i << " ";
  }

  std::cout << "Sum: " << sum << "\n";

}