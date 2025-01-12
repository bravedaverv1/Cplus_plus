// * Adding and Removing Elements

#include <iostream>
#include <vector>

using namespace std;

int main() {
// ? push_back() , what is it?
// To add a new element to the “back”, or end of the vector, 
// we can use the .push_back() function.
  vector<string> dna = {"ATG", "ACG"};
  // * We can add elements using .push_back():
  dna.push_back("GTG");
  cout << dna[2] << endl;
  // output: GTG

  // ? .pop_back() , what is it?
  // You can also remove elements from the “back” of the vector using .pop_back().
  dna.pop_back();
  cout << dna[2] << endl; 
  for (size_t i = 0; i < dna.size(); ++i) {
        // std::cout << dna[i] << " ";
        // * in our opinion, AT is better than using brackets.
        // * from what we know for now, using at will not display anything that has been popped
        // WITHOUT AN ERROR
        // unlike [] it doesnt just display what has been popped. you dont want popped items 
        // they are considered undefined behavior.
        // ! In practice, this could:
        // Print garbage data.
        // Cause a segmentation fault.
        // Sometimes appear to "work" because the memory where "GTG" was stored hasn't been overwritten yet.
        std::cout << dna.at(i) << " ";
        // ? at , what is it?
        // To safely access elements and avoid undefined behavior, use .at() instead of []:
  }
}