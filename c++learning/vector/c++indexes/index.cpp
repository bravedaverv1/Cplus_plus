#include <iostream>
#include <vector>

int main(){
  std::vector<double> subway_adult = {1, 2, 3};
  std::vector<double> subway_child = {4,5,6};

  std::cout << subway_child[2] << std::endl;
}

// ! older version of COMPILERS will trigger the list initizialization as an error.
// SOLUTION:
// g++ -std=c++17 index.cpp -o index
// * compile with the most mondern being referenced. without it, this compiler 
// default is set to an older version hence the error trigger.