#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;
    // std::cout << "x = " << x << std::endl;
    // std::cout << "y = " << y << std::endl;
    std::cout   << "x = " << x << std::endl 
                << "y = " << y << std::endl;
    // * the above is how we can implement 
    // values to our statements. additionally, 
    // it shows how endl doesnt mean it has to end there.
    // rather here we show chaining. 
    cout << "implemented using namespace std;" << endl;
    // ! FURTHER MORE, we don't need std at every time, 
    // we can name it at the top and be able to use any of its features.
    // * the above turns to:
    cout    << "x = " << x << endl 
            << "y = " << y << endl;
    return 0;
}