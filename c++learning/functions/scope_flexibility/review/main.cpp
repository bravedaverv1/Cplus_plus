#include <iostream>
#include "review.hpp"

using namespace std;

int main(){
  double total = get_sum(1.00, 3.00); 
  cout << boolalpha << grtr_than_5(total) << endl;
  // ? boolalpha , what is it?
  // naturally, c++ bools in a cout terminal output display as 1 for true and 0 for false. 
  // using boolalpha right before the function call that would display 1 or 0 allows for 
  // the literal true or false to be displayed instead.
  congrats_david();
}