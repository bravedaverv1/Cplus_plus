#include <iostream>

int main(){
  // * Addition
  int sum_1 = 1;
  int sum_2 = 2;
  int addition = sum_1 + sum_2;
  std:: cout << addition << std::endl;
  // output: 3

  // * Division
  double division_1 = 10;
  int division_2 = 3;
  double divided = division_1/division_2;
  std:: cout << divided << std::endl;
  // output: 3.33333
  // ! with both numbers being divided being an int, you will always get an int. 
  // * SOLUTION: one should be a decimal and the division should be a decimal
  // when it is likely the result will not be an even number

  // * Modulous
  int modulous_1 = 10;
  int modulous_2 = 3;
  int modulous = modulous_1 % modulous_2;
  std:: cout << modulous << std::endl;
  // output: 1
  // ! unlike divison, modulous gets the remainder and needs its values to be
  // ! int in order to work, double will cause an error

// * INCREMENT AND DECREMENT
  // increment and decrement 
  int x = 10;
  x++;
  std:: cout << x << std::endl;
  x = 10;
  x--;
  std:: cout << x << std::endl;
  // * you can use shortcuts for Incrementing and Decrementing 
  // not for division or multiplaication

  // ! IMPORTANT TO NOTE ABOUT INCREMENTS AND DECREMENTS
  int xl = 100;
  int y = xl++;
  std::cout << y << std::endl;
  // in this case y = 100 and not the result of xl++. if you want the result
  // stored in y you must put the increments/decrements before the value
  // see below:
  std::cout << xl << std::endl;
  // displays the current value of xl
  --xl;
  // shows that you can easily incr/decr to change the value
  std::cout << xl << std::endl;
  y = ++xl;
  // increments coming before so that ++xl value gets stored and not just xl
  // like it would if it were flipped around.
  std::cout << y << std::endl;

  return 0;
}