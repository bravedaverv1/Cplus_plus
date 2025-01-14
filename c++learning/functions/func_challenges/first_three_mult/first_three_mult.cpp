#include <iostream>
#include <vector>

// ? PROMPT:
// Write a function named first_three_multiples() that has:
// An int parameter named num.
// The function should return an std::vector of the first three multiples of num in ascending order.
// For example, first_three_multiples(7) should return a vector with 7, 14, and 21.

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
    std::vector<int> first_three_mult(3);
    for (int mult = 1; mult <= 3; ++mult) {
        first_three_mult.push_back(num * mult);
    }
    return first_three_mult;
}

int main()
{
    for (int element : first_three_multiples(8)) {
        // ? : , what is it?
        // this is in reference to a range based loop.
        // you can think of it in english translation as "in".
        // the entire for loop condition in english would be essentially translated to
        // for every element in first_three_multiples (vector) or in range of first_three_multiples.
        std::cout << element << "\n";
    }
}