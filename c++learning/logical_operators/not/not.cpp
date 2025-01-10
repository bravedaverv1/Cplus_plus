#include <iostream>

// ? ! , what is it?
// not in c++ is denoted as !.
// it can turns things into their opppsites. examples:
// ( !true ) returns false
// ( !false ) returns true
// ( !(10 < 11) ) returns false


int main() {

  bool logged_in = false;
// ? If the user is !logged_in, then print the phrase "Try again".

  // Write the code below:
  if (!logged_in){
    std::cout << "Try again." << std::endl;
  }
}
// output: Try Again.