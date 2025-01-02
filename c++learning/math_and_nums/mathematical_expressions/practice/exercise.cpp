#include <iostream> 
//     x + 10
// z = ------
//       3y
// assuming x is 10 and y is 5. If implmented correctly,
// z will be 1.3

int main (){
    double x = 10;
    int y = 5;

    double z = (x + 10) / (3 * y);
    std::cout << z << std::endl;
    return 0;
}