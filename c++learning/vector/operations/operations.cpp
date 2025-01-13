#include <iostream>
#include <vector>
  

  // ? operations in vectors , how would they help?
  // what happens when you want to change each of the values within a vector?
  // You can use a for loop!
  // You can write a for loop that iterates from 0 to vector.size(). 

  // ? PROMPT
  // Write a for loop that iterates through the delivery_order vector (from 0 to delivery_order.size()). 
  // And add each order to total during each iteration.

int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;
  
  for(int i = 0; i < delivery_order.size(); i++){
    total += delivery_order[i];
  }

  std::cout << total << std::endl;
  
  }