#include <iostream>

int main(){
    // * * and / have a higher priority 
    // * than + and -. therefore, * and / are completed first,
    // then + and  -.
    // using () you can change the order bc () have a higher
    // priority.
    std::cout << "Order of Operators" << std::endl;
    double x = 1 + 2 * 3;
    std::cout << x << std::endl;
    x = (1 + 2) * 3;
    std::cout << x << std::endl;
    return 0;
}