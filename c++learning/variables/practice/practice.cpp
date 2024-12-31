// PRACTICE:
// * switch the values of a and b, then display them.

#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int storage = a;

    a = b;
    b = storage;

    std:: cout << a << std::endl;
    std:: cout << b << std::endl;

    return 0;
}