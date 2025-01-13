#include <iostream>
#include <vector>

// ? size , what is it?
// <std::vector> not only stores the elements; it also stores the size of the vector

int main() {
  std::vector<std::string> grocery = {"Lettuce"};

  grocery.push_back("Yogurt");
  grocery.push_back("Water");

  // in this example we see how size is applied to give us the size of the vector
  std::cout << grocery.size() << std::endl;
  // output: 3
  // 3 bc there are currently 3 strings in the vector
}